/* verilator lint_off WIDTH */
module Decoder
(		// addr[11] = addr_i[5], addr[8:4] = addr_i[4:0]
	input  logic [7: 0]  data_output [0 : 255],

	output logic [31: 0] io_lcd,
	output logic [31: 0] io_ledg,
	output logic [31: 0] io_ledr,
	output logic [31: 0] io_hex0,
	output logic [31: 0] io_hex1,
	output logic [31: 0] io_hex2,
	output logic [31: 0] io_hex3,
	output logic [31: 0] io_hex4,
	output logic [31: 0] io_hex5,
	output logic [31: 0] io_hex6,
	output logic [31: 0] io_hex7
);
	localparam      HEX0_ADR [11 : 0] = 13'h800;
	localparam      HEX1_ADR [11 : 0] = 13'h810;
	localparam      HEX2_ADR [11 : 0] = 13'h820;
	localparam      HEX3_ADR [11 : 0] = 13'h830;
	localparam      HEX4_ADR [11 : 0] = 13'h840;
	localparam      HEX5_ADR [11 : 0] = 13'h850;
	localparam      HEX6_ADR [11 : 0] = 13'h860;
	localparam      HEX7_ADR [11 : 0] = 13'h870;
	localparam      LEDR     [11 : 0] = 13'h880;
	localparam      LEDG     [11 : 0] = 13'h890;
	localparam      LCD      [11 : 0] = 13'h8A0;
	
	genvar i;
	generate
		for (i = 0; i < 4; i = i + 1) begin: assign_data_output
			assign	io_lcd [7 + i*8 : i*8] = data_output[LCD + i];
			assign  io_hex0 [7 + i*8 : i*8] = data_output[HEX0_ADR + i];
			assign  io_hex1 [7 + i*8 : i*8] = data_output[HEX1_ADR + i];
			assign  io_hex2 [7 + i*8 : i*8] = data_output[HEX2_ADR + i];
			assign  io_hex3 [7 + i*8 : i*8] = data_output[HEX3_ADR + i];
			assign  io_hex4 [7 + i*8 : i*8] = data_output[HEX4_ADR + i];
			assign  io_hex5 [7 + i*8 : i*8] = data_output[HEX5_ADR + i];
			assign  io_hex6 [7 + i*8 : i*8] = data_output[HEX6_ADR + i];
			assign  io_hex7 [7 + i*8 : i*8] = data_output[HEX7_ADR + i];
			assign  io_ledr [7 + i*8 : i*8] = data_output[LEDR + i];
			assign  io_ledg [7 + i*8 : i*8] = data_output[LEDG + i];
		end
			
						//io_hex0 = 0;
						//io_hex1 = 0;				
						//io_hex2 = 0;
						//io_hex3 = 0;
						//io_hex4 = 0;
						//io_hex5 = 0;
						//io_hex6 = 0;
						//io_hex7 = 0;
						//io_ledr = 0;
						//io_ledg = 0;
						//io_lcd  = 0;
		//if(addr[5] & (~addr[4])) begin
		//case(addr[3:0])
		//	4'b0000: begin io_hex0 = Output_Periph; end
		//	4'b0001: begin io_hex1 = Output_Periph; end
		//	4'b0010: begin io_hex2 = Output_Periph; end
		//	4'b0011: begin io_hex3 = Output_Periph; end
		//	4'b0100: begin io_hex4 = Output_Periph; end
		//	4'b0101: begin io_hex5 = Output_Periph; end
		//	4'b0110: begin io_hex6 = Output_Periph; end
		//	4'b0111: begin io_hex7 = Output_Periph; end
		//	4'b1000: begin io_ledr = Output_Periph; end
		//	4'b1001: begin io_ledg = Output_Periph; end
		//	4'b1010: begin io_lcd  = Output_Periph; end
		//	default:  begin
		//		io_hex0 = 0;
		//		io_hex1 = 0;				
		//		io_hex2 = 0;
		//		io_hex3 = 0;
		//		io_hex4 = 0;
		//		io_hex5 = 0;
		//		io_hex6 = 0;
		//		io_hex7 = 0;
		//		io_ledr = 0;
		//		io_ledg = 0;
		//		io_lcd  = 0;
		//		end
		//endcase
		//end
	endgenerate
endmodule
