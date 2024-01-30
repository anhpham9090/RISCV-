module dmem
(
  input  logic 		clk_i,
  input  logic 		rst_ni,
  input  logic [31: 0]  addr,		// addr[11] = addr_i[5], addr[8:4] = addr_i[4:0]
  input  logic [31: 0]  st_data,
  input  logic [31: 0]  io_sw,

  input logic            st_en,
  input logic            sb_en,
  input logic            sh_en,
  input logic            sw_en,

  input logic            lb_en,
  input logic            lh_en,
  input logic            lbu_en,
  input logic            lhu_en,
  input logic            lw_en,

  output logic [31: 0]  ld_data,
  output logic [31: 0]  io_lcd,
  output logic [31: 0]  io_ledg,
  output logic [31: 0]  io_ledr,
  output logic [31: 0]  io_hex0,
  output logic [31: 0]  io_hex1,
  output logic [31: 0]  io_hex2,
  output logic [31: 0]  io_hex3,
  output logic [31: 0]  io_hex4,
  output logic [31: 0]  io_hex5,
  output logic [31: 0]  io_hex6,
  output logic [31: 0]  io_hex7
);

	
	//-------------------
	// Input_Periph  0x900           <=>                        12'b1001_0000_0000 (SW)
	// Output_Periph 0x800 --> 0x8FF <=> 12'b1000_0000_0000 --> 12'b1000_1111_1111
	// Data_Memory   0x000 --> 0x7FF <=> 12'b0000_0000_0000 --> 12'b0111_1111_1111
	//-------------------

//-------------------create signal--------------------
		logic [1:0] addr_sel;
		
		reg [31: 0] st_data_mem, ld_data_mem;
		
		reg [7 : 0]	data_mem	[0 : 2047];	// 0x000 to 0x7FF
		reg [7 : 0]	data_output	[0 :  255];	// 0x800 to 0x8FF
		reg [7 : 0]	data_input	[0 :  255];	// 0x900 to 0x9FF
		
		reg [7 : 0]	temp_st		[0 : 3];
		reg [7 : 0]	temp_ld		[0 : 3];
	//----------------------------------------------------

	//-------------------assign port--------------------
load_inst LOAD_DAT(
	.load_data			(ld_data_mem),
	.lb_en				(lb_en), 
	.lh_en				(lh_en),
	.lw_en				(lw_en),
	.lhu_en				(lhu_en),
	.lbu_en				(lbu_en),
	.output_data			(ld_data)
);

store_inst STORE_DAT(
	.store_data			(st_data),
	.sb_en				(sb_en),
	.sh_en				(sh_en),
	.sw_en                          (sw_en),
	.output_data			(st_data_mem)
);

assign addr_sel = {addr[11],addr[8]};
	//----------------------------------------------------
// Input load data 32bit ld_data_mem
genvar i;
generate 
	for (i = 0; i < 4; i = i + 1)	begin: generate_load_store
		assign	temp_st [i] 			= st_data_mem [7 + i*8 : i*8];
		assign	ld_data_mem [7 + i*8 : i*8]	= temp_ld [i];
		assign  data_input [i]			= io_sw [7 + i*8 : i*8];
	end
endgenerate
/* verilator lint_off BLKSEQ */
always @(posedge clk_i, negedge rst_ni)	begin
	if (!rst_ni) begin
		integer h,j;
		for (h = 0; h < 2048; h = h + 1) begin
			data_mem[h] = 8'b0;
		end

		for (j = 0; j < 256; j = j + 1) begin
			data_output[j] = 8'b0;
			data_input [j] = 8'b0;
		end
	end
end 
/* verilator lint_off LATCH */
always @(st_en, addr_sel) begin 
	if (st_en)	 begin		// Store Operation
		case (addr_sel)
			2'b00: begin		// Data
				for (integer k = 0; k < 4; k = k + 1) begin
					assign data_mem [addr + k] = temp_st [k];
				end

			end
				
			2'b01: begin		// Data
				for (integer k = 0; k < 4; k = k + 1) begin
					assign data_mem [addr + k] = temp_st [k];
				end
			end

			2'b10: begin		// Output 
				for (integer k = 0; k < 4; k = k + 1) begin
					assign data_output [addr + k] = temp_st [k];
				end
			end

			2'b11: begin		// Input 
				for (integer k = 0; k < 4; k = k + 1) begin
					assign data_input [addr + k] = temp_st [k];
				end		
			end

			default: begin		// Save in datamem
				for (integer k = 0; k < 4; k = k + 1) begin
					assign data_mem [addr + k] = temp_st [k];
				end
			end
		endcase
	end
	
	else begin			// Load
		case (addr_sel)
			2'b00: begin		// Data
				for (integer k = 0; k < 4; k = k + 1) begin
					assign temp_ld [k] = data_mem [addr + k];
				end
			end
				
			2'b01: begin		// Data
				for (integer k = 0; k < 4; k = k + 1) begin
					assign temp_ld [k] = data_mem [addr + k];
				end
			end

			2'b10: begin		// Output 
				for (integer k = 0; k < 4; k = k + 1) begin
					assign temp_ld [k] = data_output [addr + k];
				end
			end

			2'b11: begin		// Input 
				for (integer k = 0; k < 4; k = k + 1) begin
					assign temp_ld [k] = data_input [addr + k];
				end		
			end

			default: begin		// Save in datamem
				for (integer k = 0; k < 4; k = k + 1) begin
					assign temp_ld [k] = data_mem [addr + k];
				end
			end
		endcase
	end
end
Decoder D11
(
	.data_output(data_output), 
	.io_lcd(io_lcd),
	.io_ledg(io_ledg),
	.io_ledr(io_ledr),
	.io_hex0(io_hex0),
	.io_hex1(io_hex1),
	.io_hex2(io_hex2),
	.io_hex3(io_hex3),
	.io_hex4(io_hex4),
	.io_hex5(io_hex5),
	.io_hex6(io_hex6),
	.io_hex7(io_hex7)
);

endmodule
