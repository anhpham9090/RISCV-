module xor_comp (
// Input and Output 
	// Input Logic
	input logic		[31 : 0]		rs1,
	input logic 	[31 : 0]		rs2,
	
	// Output logic 
	output logic 	[31 : 0]		data_out
);

// Xor element 
xor_32bit		xor_inst	(
		// Input Logic
			.data_in1		(rs1),
			.data_in2		(rs2),
	
	// Output logic 
			.data_out		(data_out)
);
endmodule
