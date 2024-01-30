// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1681,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1682,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1683,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1684,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1685,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1686,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1687,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1688,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1689,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1690,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1691,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1692,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1693,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1694,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1695,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+1681,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1682,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1683,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1684,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1685,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1686,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1687,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1688,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1689,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1690,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1691,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1692,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1693,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1694,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1695,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+1683,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1681,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1682,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1684,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1685,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1686,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1687,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1688,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1689,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1690,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1691,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1692,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1693,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1694,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1695,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1044,"IF_pc_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1230,"IF_stall_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1045,"IF_rst_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1231,"IF_pc_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1046,"ID_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1047,"ID_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1048,"ID_pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+1232,"ID_stall_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1045,"ID_rst_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1049,"EX_rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1050,"EX_rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1051,"EX_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1052,"EX_pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1053,"EX_imm_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1054,"EX_rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1055,"EX_rs2_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1056,"EX_rd_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1057,"ID_rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1058,"ID_rs2_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+1059,"EX_rd_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1060,"EX_ex_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+1061,"EX_mem_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+1062,"EX_wb_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+1063,"EX_rd_rs2_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1064,"ID_rd_rs2_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1065,"EX_ld_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1233,"EX_stall_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1234,"EX_rst_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1231,"MEM_alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1235,"MEM_rd_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1066,"MEM_rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1067,"MEM_pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+1236,"MEM_rd_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1237,"MEM_mem_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+1068,"MEM_wb_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+1069,"MEM_ld_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1044,"MEM_pc_br",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1705,"MEM_stall_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1705,"MEM_rst_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1044,"MEM_pc_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1231,"MEM_pc_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1070,"WB_alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1071,"WB_ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1072,"WB_pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1238,"WB_rd_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+1239,"WB_rd_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1073,"WB_wb_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+1074,"WB_ld_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1240,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+1075,"WB_mem_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1241,"forwardA_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+1242,"forwardB_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+1231,"MEM_forwardA_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1231,"MEM_forwardB_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1240,"WB_forwardA_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1240,"WB_forwardB_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+1243,"pc_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1244,"sel_rs1_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1245,"sel_rs2_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("EX_instance ");
    tracep->declBit(c+1681,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1682,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1233,"EX_stall_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1234,"EX_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1049,"EX_rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1050,"EX_rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1051,"EX_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1052,"EX_pc_four",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1053,"EX_imm_value",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1056,"EX_rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1241,"forwardA_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1242,"forwardB_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1231,"MEM_forwardA_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1231,"MEM_forwardB_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1240,"WB_forwardA_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1240,"WB_forwardB_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1065,"EX_ld_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1059,"EX_rd_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1060,"EX_ex_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1061,"EX_mem_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBus(c+1062,"EX_wb_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1231,"MEM_alu_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1235,"MEM_rd_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1066,"MEM_rs2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1067,"MEM_pc_four",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1236,"MEM_rd_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1237,"MEM_mem_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBus(c+1068,"MEM_wb_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1044,"MEM_pc_br",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1069,"MEM_ld_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"br_lt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2,"br_eq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1696,"br_unpc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1697,"br_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1698,"branch_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1699,"pc_br",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1246,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1247,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1700,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1248,"forward_operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1249,"forward_operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,"rst_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+1246,"operand_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1247,"operand_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1076,"alu_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1700,"alu_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"add",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,"sub",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,"slt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,"sltu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1250,"xor_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1251,"and_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1252,"or_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,"sll",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,"srl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,"sra",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("add_func ");
    tracep->declBus(c+1246,"rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1247,"rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("add_inst ");
    tracep->declBus(c+1246,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1247,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1706,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("adder_inst ");
    tracep->declBit(c+1253,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1254,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+579,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+579,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gen_fulladder32_low[0] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1256,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1257,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+580,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+581,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1258,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+580,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1259,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[10] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1260,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1261,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+582,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+583,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1262,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+582,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1263,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[11] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1264,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1265,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+584,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+585,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1266,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+584,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1267,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[12] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1268,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1269,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+586,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+587,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1270,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+586,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1271,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[13] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1272,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1273,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+588,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+589,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1274,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+588,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1275,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[14] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1276,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1277,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+590,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+591,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1278,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+590,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1279,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[15] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1280,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1281,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+592,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+593,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1282,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+592,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1283,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[16] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1284,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1285,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+594,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+595,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1286,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+594,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1287,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[17] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1288,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1289,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+596,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+597,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1290,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+596,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1291,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[18] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1292,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1293,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+598,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+599,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1294,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+598,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1295,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[19] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1296,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1297,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+600,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+601,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1298,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+600,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1299,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[1] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1300,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1301,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+602,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+603,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1302,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+602,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1303,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[20] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1304,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1305,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+604,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+605,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1306,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+604,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1307,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[21] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1308,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1309,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+606,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1310,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+606,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1311,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[22] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1312,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1313,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+608,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+609,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1314,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+608,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1315,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[23] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1316,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1317,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+610,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+611,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1318,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+610,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1319,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[24] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1320,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1321,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+612,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+613,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1322,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+612,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1323,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[25] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1324,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1325,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+614,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+615,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1326,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+614,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1327,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[26] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1328,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1329,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+616,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+617,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1330,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+616,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1331,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[27] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1332,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1333,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+618,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+619,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1334,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+618,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1335,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[28] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1336,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1337,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+620,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+621,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1338,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+620,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1339,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[29] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1340,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1341,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+622,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+623,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1342,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+622,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1343,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[2] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1344,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1345,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+624,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+625,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1346,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+624,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1347,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[30] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1348,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1349,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+626,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+627,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1350,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+626,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1351,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[3] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1352,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1353,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+628,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+629,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1354,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+628,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1355,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[4] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1356,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1357,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+630,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+631,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1358,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+630,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1359,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[5] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1360,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1361,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+632,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+633,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1362,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+632,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1363,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[6] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1364,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1365,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+634,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+635,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1366,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+634,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1367,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[7] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1368,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1369,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+636,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+637,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1370,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+636,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1371,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[8] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1372,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1373,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+638,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+639,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1374,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+638,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1375,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[9] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1376,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1377,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+640,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+641,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1378,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+640,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1379,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("and_func ");
    tracep->declBus(c+1246,"rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1247,"rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1251,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("and_inst ");
    tracep->declBus(c+1246,"data_in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1247,"data_in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1251,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("or_func ");
    tracep->declBus(c+1246,"rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1247,"rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1252,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("or_inst ");
    tracep->declBus(c+1246,"data_in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1247,"data_in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1252,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("select_inst ");
    tracep->declBus(c+4,"a0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"a1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"a2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"a3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1250,"a4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1252,"a5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1251,"a6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+8,"a7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"a8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"a9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1076,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1700,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift_comp ");
    tracep->declBus(c+1246,"rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1247,"rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+8,"data_out_sll",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"data_out_srl",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"data_out_sra",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1380,"sll_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1381,"sra_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1382,"srl_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("result_inst ");
    tracep->declBus(c+1380,"sll",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1381,"sra",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1382,"srl",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1247,"rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1253,"rs1_sign",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"sll_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"sra_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"srl_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+44,"a_e_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+45,"a_m_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+46,"a_l_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+47,"overflow_signal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1383,"overflow_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("check_inst ");
    tracep->declBus(c+1247,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1707,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+44,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"a_e_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,"a_m_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,"a_l_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("gen_compare32[0] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1349,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+642,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+643,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[10] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1305,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+644,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+645,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[11] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1297,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+646,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+647,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[12] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1293,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+648,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+649,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[13] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1289,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+650,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+651,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[14] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1285,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+652,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+653,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[15] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1281,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+654,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+655,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[16] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1277,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+656,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+657,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[17] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1273,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+659,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[18] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1269,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+660,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+661,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[19] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1265,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+662,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+663,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[1] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1341,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+664,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+665,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[20] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1261,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+666,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+667,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[21] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1377,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+668,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+669,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[22] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1373,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+670,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+671,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[23] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1369,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+672,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+673,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[24] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1365,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+100,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+101,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+674,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+675,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+101,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[25] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1361,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1705,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+676,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+677,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[26] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1357,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+106,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+678,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+679,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[27] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1353,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+680,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+681,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[28] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1345,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+111,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+682,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+683,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[29] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1301,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+114,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+116,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+684,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+685,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+116,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[2] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1337,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+686,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+687,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[30] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1257,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+120,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+121,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+122,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+688,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+689,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+122,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[3] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1333,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+690,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+691,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[4] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1329,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+126,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+127,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+128,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+692,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+693,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+128,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[5] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1325,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+129,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+130,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+131,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+694,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+695,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+131,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[6] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1321,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+696,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+697,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[7] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1317,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+135,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+698,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+699,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[8] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1313,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+138,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+700,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+701,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[9] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1309,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+702,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+703,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("master_inst ");
    tracep->declBit(c+1254,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1384,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1254,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("over_select ");
    tracep->declBit(c+1253,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1383,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("over_select ");
    tracep->declBus(c+1708,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1709,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1253,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1383,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sll_select ");
    tracep->declBus(c+1380,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1708,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+47,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sra_select ");
    tracep->declBus(c+1381,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1383,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+47,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("srl_select ");
    tracep->declBus(c+1382,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1708,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+47,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sll_inst ");
    tracep->declBus(c+1246,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1247,"shift_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1380,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1385,"shift_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1386,"shift_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1387,"shift_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1388,"shift_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1389,"shift_16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1390,"shift1_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1391,"shift2_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1392,"shift4_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1393,"shift8_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1380,"shift16_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("shift16_inst ");
    tracep->declBus(c+1393,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1389,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1357,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1380,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift1_inst ");
    tracep->declBus(c+1246,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1385,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1257,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1390,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift2_inst ");
    tracep->declBus(c+1390,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1386,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1301,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1391,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift4_inst ");
    tracep->declBus(c+1391,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1387,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1345,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1392,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift8_inst ");
    tracep->declBus(c+1392,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1388,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1353,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1393,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sra_inst ");
    tracep->declBus(c+1246,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1247,"shift_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1381,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1394,"shift_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1395,"shift1_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1396,"shift1_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1397,"shift_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1398,"shift2_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1399,"shift2_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1400,"shift_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1401,"shift4_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1402,"shift4_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1403,"shift_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1404,"shift8_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1405,"shift8_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1406,"shift_16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1407,"shift16_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1408,"shift16_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1409,"shift1_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1410,"shift2_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1411,"shift4_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1412,"shift8_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1381,"shift16_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("select_shift1 ");
    tracep->declBus(c+1395,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1396,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1253,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1394,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("select_shift16 ");
    tracep->declBus(c+1407,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1408,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1253,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1406,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("select_shift2 ");
    tracep->declBus(c+1398,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1399,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1253,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1397,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("select_shift4 ");
    tracep->declBus(c+1401,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1402,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1253,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1400,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("select_shift8 ");
    tracep->declBus(c+1404,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1405,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1253,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1403,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift16_inst ");
    tracep->declBus(c+1412,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1406,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1357,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1381,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift1_inst ");
    tracep->declBus(c+1246,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1394,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1257,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1409,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift2_inst ");
    tracep->declBus(c+1409,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1397,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1301,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1410,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift4_inst ");
    tracep->declBus(c+1410,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1400,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1345,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1411,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift8_inst ");
    tracep->declBus(c+1411,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1403,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1353,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1412,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("srl_inst ");
    tracep->declBus(c+1246,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1247,"shift_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1382,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1395,"shift_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1413,"shift_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1414,"shift_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1415,"shift_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1416,"shift_16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1417,"shift1_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1418,"shift2_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1419,"shift4_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1420,"shift8_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1382,"shift16_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("shift16_inst ");
    tracep->declBus(c+1420,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1416,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1357,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1382,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift1_inst ");
    tracep->declBus(c+1246,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1395,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1257,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1417,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift2_inst ");
    tracep->declBus(c+1417,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1413,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1301,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1418,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift4_inst ");
    tracep->declBus(c+1418,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1414,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1345,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1419,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift8_inst ");
    tracep->declBus(c+1419,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1415,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1353,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1420,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sl_func ");
    tracep->declBus(c+1246,"rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1247,"rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"data_out_s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"data_out_u",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1253,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1254,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+144,"c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+145,"a_equal_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+144,"a_less_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+146,"a_more_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+704,"out_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+144,"out_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("comparator_inst ");
    tracep->declBus(c+1246,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1247,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+145,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+147,"a_e_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,"a_m_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,"a_l_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("gen_compare32[0] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1348,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1349,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+150,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+152,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+705,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+706,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+707,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[10] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1304,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1305,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+153,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+155,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+708,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+709,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+710,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[11] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1296,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1297,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+156,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+157,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+158,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+711,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+712,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+713,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[12] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1292,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1293,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+159,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+160,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+714,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+715,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[13] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1288,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1289,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+162,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+163,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+164,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+717,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+718,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+719,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[14] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1284,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1285,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+165,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+167,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+720,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+721,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+722,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[15] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1280,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1281,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+168,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+169,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+170,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+723,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+724,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+725,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[16] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1276,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1277,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+171,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+726,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+727,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+728,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[17] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1272,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1273,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+174,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+176,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+729,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+730,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+731,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[18] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1268,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1269,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+732,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+733,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+734,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[19] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1264,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1265,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+181,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+735,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+736,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+737,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[1] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1340,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1341,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+184,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+185,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+738,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+739,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+740,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[20] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1260,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1261,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+186,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+741,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+742,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+743,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[21] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1376,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1377,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+191,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+744,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+745,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+746,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[22] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1372,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1373,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+194,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+747,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+748,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+749,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[23] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1368,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1369,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+195,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+750,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+751,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+752,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[24] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1364,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1365,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+198,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+753,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+754,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+755,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[25] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1360,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1361,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+201,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+202,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+203,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+756,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+757,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+758,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[26] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1356,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1357,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+204,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+205,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+206,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+759,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+760,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+761,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[27] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1352,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1353,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+207,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+208,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+209,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+762,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+763,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+764,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[28] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1344,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1345,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+210,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+211,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+212,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+765,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+766,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+767,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[29] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1300,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1301,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+213,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+214,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+215,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+768,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+769,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+770,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[2] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1336,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1337,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+216,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+217,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+218,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+771,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+772,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+773,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[30] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1256,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1257,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+220,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+774,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+775,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+776,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[3] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1332,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1333,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+224,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+777,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+778,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+779,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[4] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1328,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1329,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+780,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+781,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+782,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[5] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1324,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1325,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+228,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+783,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+784,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+785,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[6] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1320,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1321,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+786,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+787,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+788,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[7] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1316,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1317,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+789,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+790,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+791,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[8] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1312,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1313,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+792,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+793,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+794,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[9] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1308,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1309,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+242,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+795,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+796,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+797,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("master_inst ");
    tracep->declBit(c+1253,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1254,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1421,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1422,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1423,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sub_func ");
    tracep->declBus(c+1246,"rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1247,"rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1424,"rs2_neg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("add_inst ");
    tracep->declBus(c+1246,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1424,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1705,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+243,"c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("adder_inst ");
    tracep->declBit(c+1253,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1425,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+244,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+798,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1426,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+798,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gen_fulladder32_low[0] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1256,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1427,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+245,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+799,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+800,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1428,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+799,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1429,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[10] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1260,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1430,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+801,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+802,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1431,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+801,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1432,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[11] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1264,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1433,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+803,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+804,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1434,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+803,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1435,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[12] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1268,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1436,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+805,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+806,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1437,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+805,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1438,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[13] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1272,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1439,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+807,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+808,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1440,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+807,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1441,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[14] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1276,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1442,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+809,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+810,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1443,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+809,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1444,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[15] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1280,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1445,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+811,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+812,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1446,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+811,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1447,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[16] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1284,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1448,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+252,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+813,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+814,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1449,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+813,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1450,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[17] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1288,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1451,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+815,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+816,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1452,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+815,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1453,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[18] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1292,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1454,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+254,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+817,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+818,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1455,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+817,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1456,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[19] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1296,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1457,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+819,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+820,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1458,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+819,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1459,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[1] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1300,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1460,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+821,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+822,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1461,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+821,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1462,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[20] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1304,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1463,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+823,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+824,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1464,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+823,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1465,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[21] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1308,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1466,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+825,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+826,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1467,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+825,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1468,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[22] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1312,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1469,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+259,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+827,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+828,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1470,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+827,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1471,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[23] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1316,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1472,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+260,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+829,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+830,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1473,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+829,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1474,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[24] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1320,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1475,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+831,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+832,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1476,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+831,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1477,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[25] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1324,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1478,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+833,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+834,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1479,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+833,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1480,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[26] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1328,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1481,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+835,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+836,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1482,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+835,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1483,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[27] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1332,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1484,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+837,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+838,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1485,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+837,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1486,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[28] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1336,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1487,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+839,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+840,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1488,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+839,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1489,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[29] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1340,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1490,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+841,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+842,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1491,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+841,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1492,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[2] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1344,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1493,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+843,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+844,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1494,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+843,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1495,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[30] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1348,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1496,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+845,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+846,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1497,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+845,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1498,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[3] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1352,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1499,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+269,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+847,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+848,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1500,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+847,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1501,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[4] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1356,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1502,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+849,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+850,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1503,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+849,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1504,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[5] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1360,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1505,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+851,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+852,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1506,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+851,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1507,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[6] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1364,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1508,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+853,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+854,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1509,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+853,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1510,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[7] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1368,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1511,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+855,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+856,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1512,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+855,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1513,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[8] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1372,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1514,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+857,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+858,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1515,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+857,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1516,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[9] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1376,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1517,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+859,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+860,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1518,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+859,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1519,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("inv_inst ");
    tracep->declBus(c+1247,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1424,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("xor_func ");
    tracep->declBus(c+1246,"rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1247,"rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1250,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("xor_inst ");
    tracep->declBus(c+1246,"data_in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1247,"data_in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1250,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("brc_inst ");
    tracep->declBus(c+1249,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1248,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1077,"br_unsigned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"br_equal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"br_less",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"w0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1520,"diff_sign",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1521,"neg_rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("Signed ");
    tracep->declBus(c+1522,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBus(c+1523,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBit(c+278,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+280,"a_e_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 30,0);
    tracep->declBus(c+281,"a_m_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 30,0);
    tracep->declBus(c+282,"a_l_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 30,0);
    tracep->pushNamePrefix("gen_compare32[0] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1524,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1525,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+283,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+861,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+862,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+863,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[10] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1526,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1527,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+864,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+865,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+866,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[11] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1528,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1529,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+289,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+290,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+291,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+867,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+868,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+869,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[12] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1530,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1531,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+293,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+294,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+870,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+871,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+872,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[13] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1532,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1533,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+295,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+296,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+873,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+874,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+875,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[14] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1534,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1535,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+298,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+299,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+300,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+876,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+877,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+878,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[15] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1536,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1537,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+301,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+302,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+303,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+879,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+880,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+881,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[16] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1538,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1539,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+304,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+306,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+882,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+883,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+884,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[17] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1540,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1541,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+307,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+308,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+309,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+885,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+886,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+887,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[18] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1542,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1543,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+310,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+311,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+888,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+889,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+890,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[19] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1544,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1545,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+313,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+314,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+315,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+891,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+892,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+893,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[1] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1546,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1547,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+316,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+317,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+318,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+894,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+895,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+896,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[20] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1548,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1549,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+319,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+320,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+897,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+899,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[21] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1550,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1551,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+322,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+900,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+901,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+902,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[22] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1552,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1553,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+325,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+903,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+904,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+905,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[23] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1554,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1555,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+328,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+329,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+330,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+906,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+907,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+908,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[24] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1556,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1557,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+331,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+332,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+909,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+910,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+911,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[25] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1558,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1559,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+334,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+335,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+336,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+912,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+913,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+914,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[26] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1560,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1561,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+337,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+338,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+339,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+915,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+916,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+917,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[27] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1562,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1563,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+340,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+341,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+342,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+918,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+919,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+920,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[28] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1564,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1565,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+343,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+344,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+345,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+921,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+922,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+923,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[29] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1566,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1567,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+346,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+347,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+348,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+924,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+925,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+926,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[2] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1568,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1569,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+349,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+350,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+351,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+927,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+928,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+929,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[3] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1570,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1571,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+352,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+353,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+354,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+930,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+931,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+932,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[4] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1572,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1573,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+355,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+356,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+357,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+933,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+934,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+935,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[5] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1574,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1575,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+358,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+359,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+360,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+936,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+937,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+938,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[6] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1576,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1577,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+361,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+362,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+363,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+939,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+940,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+941,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[7] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1578,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1579,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+364,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+365,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+366,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+942,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+943,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+944,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[8] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1580,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1581,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+367,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+368,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+369,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+945,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+946,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+947,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[9] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1582,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1583,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+370,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+371,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+372,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+948,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+949,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+950,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("master_inst ");
    tracep->declBit(c+1584,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1585,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1586,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1587,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1588,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Unsigned ");
    tracep->declBus(c+1249,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1248,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+276,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+373,"a_e_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,"a_m_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+375,"a_l_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("gen_compare32[0] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1589,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1590,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+376,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+377,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+378,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+951,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+952,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+953,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[10] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1591,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1592,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+379,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+380,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+381,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+954,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+955,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+956,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[11] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1593,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1594,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+382,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+383,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+384,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+957,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+958,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+959,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[12] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1595,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1596,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+960,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+961,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+962,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[13] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1597,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1598,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+388,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+389,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+390,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+963,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+964,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+965,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[14] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1599,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1600,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+391,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+392,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+393,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+966,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+967,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+968,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[15] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1601,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1602,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+394,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+395,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+396,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+969,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+970,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+971,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[16] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1603,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1604,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+397,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+398,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+399,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+972,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+973,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+974,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[17] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1605,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1606,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+400,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+402,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+975,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+976,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+977,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[18] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1607,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1608,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+403,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+404,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+405,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+978,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+979,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+980,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[19] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1609,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1610,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+406,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+407,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+408,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+981,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+982,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+983,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[1] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1611,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1612,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+409,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+410,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+411,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+984,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+985,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+986,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[20] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1613,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1614,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+412,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+413,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+414,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+987,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+988,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+989,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[21] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1615,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1616,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+415,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+417,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+990,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+991,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+992,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[22] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1617,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1618,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+419,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+420,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+993,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+994,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+995,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[23] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1619,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1620,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+421,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+422,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+423,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+996,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+997,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+998,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[24] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1621,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1622,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+424,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+425,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+426,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+999,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1000,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1001,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[25] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1623,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1624,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+427,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+428,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+429,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1002,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1003,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1004,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[26] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1625,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1626,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+430,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+431,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+432,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1005,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1006,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1007,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[27] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1627,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1628,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+433,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+434,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+435,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1008,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1009,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1010,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[28] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1629,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1630,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+437,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+438,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1011,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1012,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1013,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[29] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1631,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1632,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+439,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+440,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+441,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1014,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1015,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1016,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[2] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1633,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+442,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+443,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+444,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1017,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1018,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1019,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[30] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1635,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1636,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+445,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+446,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+447,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1020,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1021,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1022,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[3] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1637,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1638,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+448,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+449,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+450,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1023,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1024,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1025,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[4] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1639,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1640,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+451,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+452,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+453,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1026,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1027,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1028,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[5] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1641,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1642,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+454,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+455,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+456,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1029,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1030,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1031,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[6] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1643,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1644,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+457,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+458,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+459,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1032,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1033,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1034,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[7] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1645,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1646,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+460,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+461,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+462,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1035,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1036,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1037,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[8] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1647,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1648,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+463,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+464,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+465,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1038,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1039,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1040,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[9] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1649,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1650,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+466,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+467,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+468,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1041,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1042,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1043,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("master_inst ");
    tracep->declBit(c+1521,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1651,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1652,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1653,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1654,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sel_forwardA_inst ");
    tracep->declBus(c+1049,"a0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1240,"a1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1231,"a2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1241,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1249,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sel_forwardB_inst ");
    tracep->declBus(c+1050,"a0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1240,"a1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1231,"a2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1242,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1248,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("select_a_inst ");
    tracep->declBus(c+1249,"a0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1051,"a1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1708,"a2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1078,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1246,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("select_b_inst ");
    tracep->declBus(c+1248,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1053,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1079,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1247,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID_instance ");
    tracep->declBit(c+1681,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1682,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1239,"WB_rd_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1232,"ID_stall_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1045,"ID_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1046,"ID_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1047,"ID_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1048,"ID_pc_four",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1238,"WB_rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1240,"WB_rd_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1244,"sel_rs1_wb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1245,"sel_rs2_wb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1049,"EX_rs1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1050,"EX_rs2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1051,"EX_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1052,"EX_pc_four",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1053,"EX_imm_value",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1054,"EX_rs1_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1055,"EX_rs2_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1056,"EX_rd_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1057,"ID_rs1_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1058,"ID_rs2_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+1059,"EX_rd_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1060,"EX_ex_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1061,"EX_mem_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBus(c+1062,"EX_wb_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1063,"EX_rd_rs2_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1065,"EX_ld_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1064,"ID_rd_rs2_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1057,"rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1058,"rs2_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1080,"rd_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1701,"rs1_data_raw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1702,"rs2_data_raw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1703,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1704,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1081,"inst_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+1082,"imm_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1083,"inst_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
    tracep->declBus(c+1084,"immsel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+1085,"rd_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1086,"ex_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+1087,"mem_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+1088,"wb_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+1089,"ld_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1064,"rd_rs2_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+469,"rst_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("ctr_inst ");
    tracep->declBus(c+1083,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBit(c+1090,"pc_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1084,"imm_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+1091,"br_unsigned",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1092,"op_a_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1093,"op_b_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1094,"alu_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1095,"mem_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1085,"rd_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1088,"wb_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1096,"sb_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1097,"sh_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1098,"sw_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1099,"lb_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1100,"lh_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1101,"lbu_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1102,"lhu_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1103,"lw_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1104,"j_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1105,"br_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+1064,"ID_rd_rs2_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1089,"ld_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1106,"opcode_dif",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1107,"funct3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+1108,"funct7_dif",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1109,"rv32i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1110,"r_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1111,"i_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1089,"l_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1112,"s_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1113,"b_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1114,"add_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1115,"sub_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1116,"sll_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1117,"slt_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1118,"sltu_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1119,"xor_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1120,"srl_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1121,"sra_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1122,"or_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1123,"and_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1124,"addi_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1125,"slli_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1126,"slti_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1127,"sltiu_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1128,"xori_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1129,"srli_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1130,"srai_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1131,"ori_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1132,"andi_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1133,"beq_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1134,"bne_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1135,"blt_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1136,"bge_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1137,"bltu_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1138,"bgeu_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1139,"jal_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1140,"jalr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1141,"lui_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1142,"auipc_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_inst ");
    tracep->declBus(c+1084,"immsel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1081,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,7);
    tracep->declBus(c+1082,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1143,"w1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1144,"inst_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->pushNamePrefix("Comp1 ");
    tracep->declBit(c+1145,"imm_in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1145,"imm_in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1146,"imm_in3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1147,"imm_in4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"imm_in5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1084,"immsel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+1143,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Comp2 ");
    tracep->declBus(c+1144,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+1084,"immsel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1148,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->pushNamePrefix("IMM0 ");
    tracep->declBit(c+1149,"imm_in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1150,"imm_in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"imm_in3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"imm_in4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"imm_in5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1084,"immsel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+1151,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1152,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1153,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+1154,"j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+1155,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile_inst ");
    tracep->declBus(c+1057,"rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1058,"rs2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1238,"rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+1239,"rd_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1681,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1682,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1240,"rd_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1701,"rs1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1702,"rs2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1156+i*1,"mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1188,"j",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sel_rd_inst1 ");
    tracep->declBus(c+1701,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1240,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1244,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1703,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sel_rd_inst2 ");
    tracep->declBus(c+1702,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1240,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1245,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1704,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IF_instance ");
    tracep->declBit(c+1681,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1682,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1044,"pc_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1231,"pc_imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1230,"IF_stall_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1045,"IF_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1243,"pc_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1046,"ID_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1047,"ID_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1048,"ID_pc_four",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1684,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+470,"nxt_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1189,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+471,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+472,"inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+469,"rst_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("FA_inst ");
    tracep->declBus(c+1189,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1710,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1706,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+471,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+473,"c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("adder_inst ");
    tracep->declBit(c+1190,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+474,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+516,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1190,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+516,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gen_fulladder32_low[0] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1191,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+475,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+517,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+518,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1191,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+517,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[10] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1192,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+519,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+520,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1192,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+519,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[11] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1193,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+477,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+521,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+522,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1193,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+521,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[12] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1194,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+478,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+523,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+524,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1194,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+523,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[13] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1195,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+479,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+525,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+526,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1195,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+525,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[14] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1196,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+480,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+527,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+528,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1196,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+527,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[15] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1197,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+481,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+529,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+530,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1197,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+529,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[16] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1198,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+482,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+531,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+532,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1198,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+531,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[17] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1199,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+483,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+533,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+534,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1199,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+533,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[18] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1200,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+484,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+535,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+536,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+535,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[19] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1201,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+485,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+537,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+538,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+537,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[1] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1202,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+486,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+539,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+540,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1202,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+539,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[20] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1203,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+487,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+541,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+542,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1203,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+541,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[21] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1204,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+488,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+543,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+544,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1204,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+543,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[22] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1205,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+489,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+545,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+546,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1205,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+545,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[23] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1206,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+490,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+547,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+548,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1206,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+547,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[24] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1207,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+491,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+549,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+550,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1207,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+549,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[25] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1208,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+551,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+552,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1208,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+551,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[26] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1209,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+493,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+553,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+554,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1209,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+553,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[27] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1210,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+494,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+555,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+556,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1210,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+555,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[28] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1211,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+495,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+557,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+558,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1211,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+557,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[29] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1212,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+496,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+559,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+560,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1212,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+559,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[2] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1213,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1705,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+497,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+561,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+562,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1214,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+561,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1213,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[30] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1215,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+498,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+563,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+564,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1215,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+563,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[3] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1216,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+499,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+565,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+566,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1216,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+565,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[4] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1217,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+500,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+567,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+568,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1217,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+567,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[5] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1218,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+501,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+569,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+570,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1218,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+569,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[6] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1219,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+502,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+572,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1219,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+571,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[7] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1220,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+573,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+574,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1220,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+573,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[8] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1221,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+504,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+575,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+576,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1221,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+575,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[9] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1222,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1706,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+505,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+577,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+578,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1222,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+577,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1706,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("Mux_br_sel ");
    tracep->declBus(c+471,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1231,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1044,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+470,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_inst ");
    tracep->declBus(c+470,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1681,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1682,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1243,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1189,"Q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_inst ");
    tracep->declBus(c+1189,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1682,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+472,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1223,"pbyte",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+1224,"pword",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("MEM_instance ");
    tracep->declBit(c+1681,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1682,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1705,"MEM_stall_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1705,"MEM_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1231,"MEM_alu_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1066,"MEM_rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1235,"MEM_rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1067,"MEM_pc_four",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1236,"MEM_rd_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1237,"MEM_mem_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBus(c+1068,"MEM_wb_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1069,"MEM_ld_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1044,"MEM_pc_br",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1683,"sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1044,"MEM_pc_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1231,"MEM_pc_imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1685,"io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1686,"io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1687,"io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1688,"io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1689,"io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1690,"io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1691,"io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1692,"io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1693,"io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1694,"io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1695,"io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1070,"WB_alu_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1071,"WB_ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1072,"WB_pc_four",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1238,"WB_rd_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+1239,"WB_rd_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1073,"WB_wb_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1075,"WB_mem_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1074,"WB_ld_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+506,"MEM_ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+1682,"rst_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("dmem_inst ");
    tracep->declBit(c+1681,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1682,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1231,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1066,"st_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1683,"io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1655,"st_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1656,"sb_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1657,"sh_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1658,"sw_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1659,"lb_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1660,"lh_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1661,"lbu_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1662,"lhu_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1663,"lw_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+506,"ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1685,"io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1686,"io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1687,"io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1688,"io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1689,"io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1690,"io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1691,"io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1692,"io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1693,"io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1694,"io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1695,"io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1664,"addr_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+1665,"st_data_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+507,"ld_data_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+508+i*1,"data_input",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1666+i*1,"temp_st",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+512+i*1,"temp_ld",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+1711,"HEX0_ADR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1712,"HEX1_ADR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1713,"HEX2_ADR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1714,"HEX3_ADR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1715,"HEX4_ADR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1716,"HEX5_ADR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1717,"HEX6_ADR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1718,"HEX7_ADR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1719,"LEDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1720,"LEDG",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1721,"LCD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->pushNamePrefix("LOAD_DAT ");
    tracep->declBus(c+507,"load_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1663,"lw_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1659,"lb_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1660,"lh_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1662,"lhu_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1661,"lbu_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+506,"output_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1670,"sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1671,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1672,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+1673,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+1674,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("STORE_DAT ");
    tracep->declBus(c+1066,"store_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1658,"sw_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1656,"sb_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1657,"sh_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1665,"output_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1675,"sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1676,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1677,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1225,"h",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1226,"j",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1227,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+1228,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+1229,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+1678,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+1679,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+1680,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+1722,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("WB_instance ");
    tracep->declBus(c+1071,"WB_ld_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1070,"WB_alu_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1072,"WB_pc_four",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1073,"WB_wb_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1240,"wb_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("select_inst ");
    tracep->declBus(c+1071,"a0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1070,"a1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1072,"a2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1073,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1240,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fwr_inst ");
    tracep->declBit(c+1236,"MEM_rd_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1239,"WB_rd_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1655,"MEM_mem_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1069,"MEM_ld_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1075,"WB_mem_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1074,"WB_ld_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1057,"ID_rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1058,"ID_rs2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1054,"EX_rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1055,"EX_rs2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1235,"MEM_rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1238,"WB_rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+1063,"EX_rd_rs2_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1064,"ID_rd_rs2_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1241,"forwardA_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1242,"forwardB_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1230,"IF_ID_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1232,"ID_EX_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1233,"EX_MEM_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1243,"pc_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1244,"sel_rs1_wb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1245,"sel_rs2_wb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1234,"EX_MEM_rst_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("stage_rst_instance ");
    tracep->declBit(c+1044,"MEM_brj_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1045,"IF_rst_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1045,"ID_rst_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_eq));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__rst_n));
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__slt),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sltu),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sll),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__srl),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sra),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c),32);
    bufp->fullBit(oldp+12,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                            >> 0x1fU)));
    bufp->fullBit(oldp+13,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)));
    bufp->fullBit(oldp+14,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0xaU))));
    bufp->fullBit(oldp+15,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0xbU))));
    bufp->fullBit(oldp+16,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0xcU))));
    bufp->fullBit(oldp+17,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0xdU))));
    bufp->fullBit(oldp+18,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0xeU))));
    bufp->fullBit(oldp+19,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0xfU))));
    bufp->fullBit(oldp+20,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x10U))));
    bufp->fullBit(oldp+21,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x11U))));
    bufp->fullBit(oldp+22,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x12U))));
    bufp->fullBit(oldp+23,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x13U))));
    bufp->fullBit(oldp+24,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 1U))));
    bufp->fullBit(oldp+25,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x14U))));
    bufp->fullBit(oldp+26,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x15U))));
    bufp->fullBit(oldp+27,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x16U))));
    bufp->fullBit(oldp+28,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x17U))));
    bufp->fullBit(oldp+29,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x18U))));
    bufp->fullBit(oldp+30,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x19U))));
    bufp->fullBit(oldp+31,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x1aU))));
    bufp->fullBit(oldp+32,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x1bU))));
    bufp->fullBit(oldp+33,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x1cU))));
    bufp->fullBit(oldp+34,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x1dU))));
    bufp->fullBit(oldp+35,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 2U))));
    bufp->fullBit(oldp+36,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+37,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 3U))));
    bufp->fullBit(oldp+38,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 4U))));
    bufp->fullBit(oldp+39,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 5U))));
    bufp->fullBit(oldp+40,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 6U))));
    bufp->fullBit(oldp+41,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 7U))));
    bufp->fullBit(oldp+42,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 8U))));
    bufp->fullBit(oldp+43,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 9U))));
    bufp->fullBit(oldp+44,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b)));
    bufp->fullBit(oldp+45,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b)));
    bufp->fullBit(oldp+46,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b)));
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__overflow_signal));
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b),32);
    bufp->fullBit(oldp+51,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                            >> 0x1fU)));
    bufp->fullBit(oldp+52,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                            >> 0x1fU)));
    bufp->fullBit(oldp+53,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                            >> 0x1fU)));
    bufp->fullBit(oldp+54,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 0x15U))));
    bufp->fullBit(oldp+55,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 0x15U))));
    bufp->fullBit(oldp+56,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                  >> 0x15U))));
    bufp->fullBit(oldp+57,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 0x14U))));
    bufp->fullBit(oldp+58,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 0x14U))));
    bufp->fullBit(oldp+59,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                  >> 0x14U))));
    bufp->fullBit(oldp+60,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 0x13U))));
    bufp->fullBit(oldp+61,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 0x13U))));
    bufp->fullBit(oldp+62,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                  >> 0x13U))));
    bufp->fullBit(oldp+63,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 0x12U))));
    bufp->fullBit(oldp+64,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 0x12U))));
    bufp->fullBit(oldp+65,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                  >> 0x12U))));
    bufp->fullBit(oldp+66,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 0x11U))));
    bufp->fullBit(oldp+67,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 0x11U))));
    bufp->fullBit(oldp+68,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                  >> 0x11U))));
    bufp->fullBit(oldp+69,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 0x10U))));
    bufp->fullBit(oldp+70,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 0x10U))));
    bufp->fullBit(oldp+71,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                  >> 0x10U))));
    bufp->fullBit(oldp+72,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 0xfU))));
    bufp->fullBit(oldp+73,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 0xfU))));
    bufp->fullBit(oldp+74,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                  >> 0xfU))));
    bufp->fullBit(oldp+75,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 0xeU))));
    bufp->fullBit(oldp+76,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 0xeU))));
    bufp->fullBit(oldp+77,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                  >> 0xeU))));
    bufp->fullBit(oldp+78,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 0xdU))));
    bufp->fullBit(oldp+79,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 0xdU))));
    bufp->fullBit(oldp+80,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                  >> 0xdU))));
    bufp->fullBit(oldp+81,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 0xcU))));
    bufp->fullBit(oldp+82,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 0xcU))));
    bufp->fullBit(oldp+83,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                  >> 0xcU))));
    bufp->fullBit(oldp+84,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+85,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+86,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+87,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 0xbU))));
    bufp->fullBit(oldp+88,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 0xbU))));
    bufp->fullBit(oldp+89,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                  >> 0xbU))));
    bufp->fullBit(oldp+90,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 0xaU))));
    bufp->fullBit(oldp+91,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 0xaU))));
    bufp->fullBit(oldp+92,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                  >> 0xaU))));
    bufp->fullBit(oldp+93,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 9U))));
    bufp->fullBit(oldp+94,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 9U))));
    bufp->fullBit(oldp+95,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                  >> 9U))));
    bufp->fullBit(oldp+96,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 8U))));
    bufp->fullBit(oldp+97,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 8U))));
    bufp->fullBit(oldp+98,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                  >> 8U))));
    bufp->fullBit(oldp+99,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 7U))));
    bufp->fullBit(oldp+100,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 7U))));
    bufp->fullBit(oldp+101,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 7U))));
    bufp->fullBit(oldp+102,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 6U))));
    bufp->fullBit(oldp+103,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 6U))));
    bufp->fullBit(oldp+104,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 6U))));
    bufp->fullBit(oldp+105,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 5U))));
    bufp->fullBit(oldp+106,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 5U))));
    bufp->fullBit(oldp+107,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 5U))));
    bufp->fullBit(oldp+108,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 4U))));
    bufp->fullBit(oldp+109,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 4U))));
    bufp->fullBit(oldp+110,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 4U))));
    bufp->fullBit(oldp+111,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 3U))));
    bufp->fullBit(oldp+112,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 3U))));
    bufp->fullBit(oldp+113,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 3U))));
    bufp->fullBit(oldp+114,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 2U))));
    bufp->fullBit(oldp+115,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 2U))));
    bufp->fullBit(oldp+116,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 2U))));
    bufp->fullBit(oldp+117,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+118,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+119,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+120,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 1U))));
    bufp->fullBit(oldp+121,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 1U))));
    bufp->fullBit(oldp+122,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 1U))));
    bufp->fullBit(oldp+123,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+124,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+125,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+126,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+127,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+128,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+129,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+130,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+131,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+132,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+133,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+134,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+135,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+136,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+137,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+138,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+139,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+140,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+141,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+142,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+143,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+144,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b)));
    bufp->fullBit(oldp+145,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b)));
    bufp->fullBit(oldp+146,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b)));
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b),32);
    bufp->fullBit(oldp+150,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+151,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+152,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+153,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+154,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+155,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+156,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+157,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+158,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+159,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+160,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+161,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+162,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+163,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+164,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+165,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+166,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+167,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+168,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+169,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+170,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+171,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+172,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+173,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+174,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+175,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+176,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+177,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+178,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+179,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+180,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+181,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+182,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+183,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+184,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+185,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+186,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+187,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+188,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+189,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+190,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+191,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+192,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 9U))));
    bufp->fullBit(oldp+193,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 9U))));
    bufp->fullBit(oldp+194,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 9U))));
    bufp->fullBit(oldp+195,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 8U))));
    bufp->fullBit(oldp+196,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 8U))));
    bufp->fullBit(oldp+197,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 8U))));
    bufp->fullBit(oldp+198,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 7U))));
    bufp->fullBit(oldp+199,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 7U))));
    bufp->fullBit(oldp+200,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 7U))));
    bufp->fullBit(oldp+201,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 6U))));
    bufp->fullBit(oldp+202,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 6U))));
    bufp->fullBit(oldp+203,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 6U))));
    bufp->fullBit(oldp+204,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 5U))));
    bufp->fullBit(oldp+205,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 5U))));
    bufp->fullBit(oldp+206,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 5U))));
    bufp->fullBit(oldp+207,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 4U))));
    bufp->fullBit(oldp+208,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 4U))));
    bufp->fullBit(oldp+209,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 4U))));
    bufp->fullBit(oldp+210,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 3U))));
    bufp->fullBit(oldp+211,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 3U))));
    bufp->fullBit(oldp+212,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 3U))));
    bufp->fullBit(oldp+213,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 2U))));
    bufp->fullBit(oldp+214,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 2U))));
    bufp->fullBit(oldp+215,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 2U))));
    bufp->fullBit(oldp+216,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+217,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+218,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+219,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 1U))));
    bufp->fullBit(oldp+220,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 1U))));
    bufp->fullBit(oldp+221,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 1U))));
    bufp->fullBit(oldp+222,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+223,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+224,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+225,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+226,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+227,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+228,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+229,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+230,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+231,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+232,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+233,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+234,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+235,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+236,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+237,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+238,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+239,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+240,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+241,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+242,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x16U))));
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c),32);
    bufp->fullBit(oldp+244,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                             >> 0x1fU)));
    bufp->fullBit(oldp+245,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)));
    bufp->fullBit(oldp+246,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0xaU))));
    bufp->fullBit(oldp+247,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0xbU))));
    bufp->fullBit(oldp+248,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0xcU))));
    bufp->fullBit(oldp+249,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0xdU))));
    bufp->fullBit(oldp+250,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0xeU))));
    bufp->fullBit(oldp+251,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0xfU))));
    bufp->fullBit(oldp+252,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x10U))));
    bufp->fullBit(oldp+253,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x11U))));
    bufp->fullBit(oldp+254,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x12U))));
    bufp->fullBit(oldp+255,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x13U))));
    bufp->fullBit(oldp+256,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 1U))));
    bufp->fullBit(oldp+257,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x14U))));
    bufp->fullBit(oldp+258,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x15U))));
    bufp->fullBit(oldp+259,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x16U))));
    bufp->fullBit(oldp+260,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x17U))));
    bufp->fullBit(oldp+261,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x18U))));
    bufp->fullBit(oldp+262,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x19U))));
    bufp->fullBit(oldp+263,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+264,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+265,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+266,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+267,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 2U))));
    bufp->fullBit(oldp+268,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+269,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 3U))));
    bufp->fullBit(oldp+270,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 4U))));
    bufp->fullBit(oldp+271,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 5U))));
    bufp->fullBit(oldp+272,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 6U))));
    bufp->fullBit(oldp+273,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 7U))));
    bufp->fullBit(oldp+274,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 8U))));
    bufp->fullBit(oldp+275,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 9U))));
    bufp->fullBit(oldp+276,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b)));
    bufp->fullBit(oldp+277,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b)));
    bufp->fullBit(oldp+278,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b)));
    bufp->fullBit(oldp+279,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b)));
    bufp->fullIData(oldp+280,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b),31);
    bufp->fullIData(oldp+281,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b),31);
    bufp->fullIData(oldp+282,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b),31);
    bufp->fullBit(oldp+283,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+284,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+285,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+286,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+287,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+288,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+289,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+290,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+291,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+292,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+293,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+294,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+295,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+296,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+297,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+298,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+299,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+300,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+301,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+302,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+303,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+304,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+305,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+306,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+307,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+308,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+309,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+310,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+311,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+312,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+313,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+314,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+315,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+316,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+317,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+318,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+319,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+320,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+321,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+322,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 9U))));
    bufp->fullBit(oldp+323,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 9U))));
    bufp->fullBit(oldp+324,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 9U))));
    bufp->fullBit(oldp+325,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 8U))));
    bufp->fullBit(oldp+326,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 8U))));
    bufp->fullBit(oldp+327,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 8U))));
    bufp->fullBit(oldp+328,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 7U))));
    bufp->fullBit(oldp+329,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 7U))));
    bufp->fullBit(oldp+330,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 7U))));
    bufp->fullBit(oldp+331,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 6U))));
    bufp->fullBit(oldp+332,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 6U))));
    bufp->fullBit(oldp+333,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 6U))));
    bufp->fullBit(oldp+334,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 5U))));
    bufp->fullBit(oldp+335,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 5U))));
    bufp->fullBit(oldp+336,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 5U))));
    bufp->fullBit(oldp+337,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 4U))));
    bufp->fullBit(oldp+338,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 4U))));
    bufp->fullBit(oldp+339,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 4U))));
    bufp->fullBit(oldp+340,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 3U))));
    bufp->fullBit(oldp+341,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 3U))));
    bufp->fullBit(oldp+342,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 3U))));
    bufp->fullBit(oldp+343,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 2U))));
    bufp->fullBit(oldp+344,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 2U))));
    bufp->fullBit(oldp+345,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 2U))));
    bufp->fullBit(oldp+346,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 1U))));
    bufp->fullBit(oldp+347,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 1U))));
    bufp->fullBit(oldp+348,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 1U))));
    bufp->fullBit(oldp+349,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+350,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+351,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+352,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+353,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+354,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+355,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+356,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+357,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+358,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+359,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+360,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+361,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+362,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+363,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+364,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+365,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+366,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+367,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+368,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+369,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+370,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+371,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+372,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x15U))));
    bufp->fullIData(oldp+373,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b),32);
    bufp->fullIData(oldp+374,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b),32);
    bufp->fullIData(oldp+375,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b),32);
    bufp->fullBit(oldp+376,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+377,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+378,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+379,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+380,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+381,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+382,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+383,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+384,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+385,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+386,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+387,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+388,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+389,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+390,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+391,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+392,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+393,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+394,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+395,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+396,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+397,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+398,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+399,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+400,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+401,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+402,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+403,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+404,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+405,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+406,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+407,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+408,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+409,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+410,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+411,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+412,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+413,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+414,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+415,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+416,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+417,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+418,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 9U))));
    bufp->fullBit(oldp+419,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 9U))));
    bufp->fullBit(oldp+420,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 9U))));
    bufp->fullBit(oldp+421,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 8U))));
    bufp->fullBit(oldp+422,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 8U))));
    bufp->fullBit(oldp+423,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 8U))));
    bufp->fullBit(oldp+424,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 7U))));
    bufp->fullBit(oldp+425,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 7U))));
    bufp->fullBit(oldp+426,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 7U))));
    bufp->fullBit(oldp+427,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 6U))));
    bufp->fullBit(oldp+428,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 6U))));
    bufp->fullBit(oldp+429,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 6U))));
    bufp->fullBit(oldp+430,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 5U))));
    bufp->fullBit(oldp+431,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 5U))));
    bufp->fullBit(oldp+432,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 5U))));
    bufp->fullBit(oldp+433,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 4U))));
    bufp->fullBit(oldp+434,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 4U))));
    bufp->fullBit(oldp+435,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 4U))));
    bufp->fullBit(oldp+436,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 3U))));
    bufp->fullBit(oldp+437,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 3U))));
    bufp->fullBit(oldp+438,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 3U))));
    bufp->fullBit(oldp+439,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 2U))));
    bufp->fullBit(oldp+440,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 2U))));
    bufp->fullBit(oldp+441,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 2U))));
    bufp->fullBit(oldp+442,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+443,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+444,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+445,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 1U))));
    bufp->fullBit(oldp+446,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 1U))));
    bufp->fullBit(oldp+447,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 1U))));
    bufp->fullBit(oldp+448,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+449,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+450,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+451,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+452,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+453,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+454,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+455,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+456,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+457,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+458,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+459,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+460,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+461,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+462,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+463,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+464,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+465,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+466,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+467,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+468,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+469,(vlSelf->top__DOT__dut__DOT__IF_instance__DOT__rst_n));
    bufp->fullIData(oldp+470,(vlSelf->top__DOT__dut__DOT__IF_instance__DOT__nxt_pc),32);
    bufp->fullIData(oldp+471,(vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc_four),32);
    bufp->fullIData(oldp+472,(vlSelf->top__DOT__dut__DOT__IF_instance__DOT__inst),32);
    bufp->fullIData(oldp+473,(vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c),32);
    bufp->fullBit(oldp+474,((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                             >> 0x1fU)));
    bufp->fullBit(oldp+475,((1U & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c)));
    bufp->fullBit(oldp+476,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0xaU))));
    bufp->fullBit(oldp+477,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0xbU))));
    bufp->fullBit(oldp+478,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0xcU))));
    bufp->fullBit(oldp+479,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0xdU))));
    bufp->fullBit(oldp+480,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0xeU))));
    bufp->fullBit(oldp+481,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0xfU))));
    bufp->fullBit(oldp+482,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0x10U))));
    bufp->fullBit(oldp+483,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0x11U))));
    bufp->fullBit(oldp+484,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0x12U))));
    bufp->fullBit(oldp+485,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0x13U))));
    bufp->fullBit(oldp+486,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 1U))));
    bufp->fullBit(oldp+487,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0x14U))));
    bufp->fullBit(oldp+488,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0x15U))));
    bufp->fullBit(oldp+489,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0x16U))));
    bufp->fullBit(oldp+490,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0x17U))));
    bufp->fullBit(oldp+491,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0x18U))));
    bufp->fullBit(oldp+492,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0x19U))));
    bufp->fullBit(oldp+493,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+494,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+495,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+496,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+497,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 2U))));
    bufp->fullBit(oldp+498,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+499,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 3U))));
    bufp->fullBit(oldp+500,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 4U))));
    bufp->fullBit(oldp+501,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 5U))));
    bufp->fullBit(oldp+502,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 6U))));
    bufp->fullBit(oldp+503,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 7U))));
    bufp->fullBit(oldp+504,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 8U))));
    bufp->fullBit(oldp+505,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                   >> 9U))));
    bufp->fullIData(oldp+506,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__MEM_ld_data),32);
    bufp->fullIData(oldp+507,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__ld_data_mem),32);
    bufp->fullCData(oldp+508,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__data_input[0]),8);
    bufp->fullCData(oldp+509,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__data_input[1]),8);
    bufp->fullCData(oldp+510,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__data_input[2]),8);
    bufp->fullCData(oldp+511,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__data_input[3]),8);
    bufp->fullCData(oldp+512,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__temp_ld[0]),8);
    bufp->fullCData(oldp+513,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__temp_ld[1]),8);
    bufp->fullCData(oldp+514,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__temp_ld[2]),8);
    bufp->fullCData(oldp+515,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__temp_ld[3]),8);
    bufp->fullBit(oldp+516,(((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                              ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+517,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                   ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c))));
    bufp->fullBit(oldp+518,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                   & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c))));
    bufp->fullBit(oldp+519,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+520,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+521,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+522,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+523,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+524,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+525,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+526,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+527,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+528,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+529,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+530,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+531,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+532,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+533,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+534,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+535,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+536,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+537,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+538,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+539,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 1U))));
    bufp->fullBit(oldp+540,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 1U))));
    bufp->fullBit(oldp+541,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+542,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+543,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+544,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+545,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+546,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+547,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+548,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+549,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+550,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+551,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+552,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+553,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+554,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+555,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+556,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+557,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+558,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+559,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+560,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+561,((1U & ((~ (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 2U)) ^ (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                                  >> 2U)))));
    bufp->fullBit(oldp+562,((1U & (((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                     | (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                        & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c)) 
                                    | vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 2U))));
    bufp->fullBit(oldp+563,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+564,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+565,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 3U))));
    bufp->fullBit(oldp+566,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 3U))));
    bufp->fullBit(oldp+567,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 4U))));
    bufp->fullBit(oldp+568,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 4U))));
    bufp->fullBit(oldp+569,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 5U))));
    bufp->fullBit(oldp+570,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 5U))));
    bufp->fullBit(oldp+571,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 6U))));
    bufp->fullBit(oldp+572,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 6U))));
    bufp->fullBit(oldp+573,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 7U))));
    bufp->fullBit(oldp+574,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 7U))));
    bufp->fullBit(oldp+575,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 8U))));
    bufp->fullBit(oldp+576,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 8U))));
    bufp->fullBit(oldp+577,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 9U))));
    bufp->fullBit(oldp+578,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                   >> 9U))));
    bufp->fullBit(oldp+579,((((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                              ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+580,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c))));
    bufp->fullBit(oldp+581,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                      & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)))));
    bufp->fullBit(oldp+582,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+583,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+584,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+585,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+586,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+587,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+588,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+589,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+590,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+591,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+592,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+593,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+594,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+595,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+596,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+597,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+598,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+599,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+600,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+601,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+602,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 1U))));
    bufp->fullBit(oldp+603,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 1U))));
    bufp->fullBit(oldp+604,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+605,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+606,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+607,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+608,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+609,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+610,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+611,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+612,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+613,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+614,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+615,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+616,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+617,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+618,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+619,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+620,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+621,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+622,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+623,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+624,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 2U))));
    bufp->fullBit(oldp+625,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 2U))));
    bufp->fullBit(oldp+626,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+627,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+628,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 3U))));
    bufp->fullBit(oldp+629,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 3U))));
    bufp->fullBit(oldp+630,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 4U))));
    bufp->fullBit(oldp+631,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 4U))));
    bufp->fullBit(oldp+632,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 5U))));
    bufp->fullBit(oldp+633,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 5U))));
    bufp->fullBit(oldp+634,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 6U))));
    bufp->fullBit(oldp+635,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 6U))));
    bufp->fullBit(oldp+636,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 7U))));
    bufp->fullBit(oldp+637,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 7U))));
    bufp->fullBit(oldp+638,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 8U))));
    bufp->fullBit(oldp+639,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 8U))));
    bufp->fullBit(oldp+640,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 9U))));
    bufp->fullBit(oldp+641,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 9U))));
    bufp->fullBit(oldp+642,(((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                              >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              >> 0x1eU)))));
    bufp->fullBit(oldp+643,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x1fU) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x1eU) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x1fU))))));
    bufp->fullBit(oldp+644,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+645,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x15U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x14U) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x15U))))));
    bufp->fullBit(oldp+646,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+647,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x14U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x13U) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x14U))))));
    bufp->fullBit(oldp+648,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+649,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x13U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x12U) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x13U))))));
    bufp->fullBit(oldp+650,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+651,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x12U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x11U) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x12U))))));
    bufp->fullBit(oldp+652,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+653,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x11U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x10U) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x11U))))));
    bufp->fullBit(oldp+654,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x10U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0xfU))))));
    bufp->fullBit(oldp+655,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x10U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0xfU) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x10U))))));
    bufp->fullBit(oldp+656,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0xfU) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+657,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0xfU) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                 >> 0xeU) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+658,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0xeU) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+659,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0xeU) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                 >> 0xdU) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+660,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0xdU) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+661,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0xdU) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                 >> 0xcU) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+662,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0xcU) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+663,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0xcU) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                 >> 0xbU) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+664,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x1eU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+665,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x1eU) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x1dU) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x1eU))))));
    bufp->fullBit(oldp+666,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0xbU) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+667,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0xbU) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                 >> 0xaU) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+668,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0xaU) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                   >> 9U))))));
    bufp->fullBit(oldp+669,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0xaU) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                 >> 9U) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+670,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 9U) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+671,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 9U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                               >> 8U) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+672,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 8U) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+673,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 8U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                               >> 7U) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+674,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 7U) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+675,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 7U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                               >> 6U) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+676,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 6U) & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              >> 5U)))));
    bufp->fullBit(oldp+677,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                    >> 6U) | ((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 5U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+678,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 5U) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+679,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 5U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                               >> 4U) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+680,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 4U) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+681,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 4U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                               >> 3U) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+682,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 3U) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+683,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 3U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                               >> 2U) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+684,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 2U) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+685,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 2U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                               >> 1U) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+686,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x1dU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+687,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x1dU) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x1cU) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x1dU))))));
    bufp->fullBit(oldp+688,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 1U) & (~ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b)))));
    bufp->fullBit(oldp+689,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 1U) | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+690,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+691,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x1cU) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x1bU) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x1cU))))));
    bufp->fullBit(oldp+692,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+693,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x1bU) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x1aU) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x1bU))))));
    bufp->fullBit(oldp+694,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+695,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x1aU) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x19U) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x1aU))))));
    bufp->fullBit(oldp+696,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+697,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x19U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x18U) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x19U))))));
    bufp->fullBit(oldp+698,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+699,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x18U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x17U) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x18U))))));
    bufp->fullBit(oldp+700,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+701,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x17U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x16U) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x17U))))));
    bufp->fullBit(oldp+702,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+703,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x16U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x15U) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x16U))))));
    bufp->fullBit(oldp+704,((1U & ((((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                         >> 0x1fU)) 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b) 
                                    | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        >> 0x1fU) & 
                                       (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           >> 0x1fU)))) 
                                   | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0x1fU) & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b)))));
    bufp->fullBit(oldp+705,(((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                              >> 0x1fU) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                               ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                              >> 0x1eU)))));
    bufp->fullBit(oldp+706,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x1fU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0x1eU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 0x1eU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1fU))))));
    bufp->fullBit(oldp+707,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x1fU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 0x1eU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0x1eU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1fU))))));
    bufp->fullBit(oldp+708,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x15U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+709,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x15U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0x14U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 0x14U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x15U))))));
    bufp->fullBit(oldp+710,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x15U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 0x14U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0x14U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x15U))))));
    bufp->fullBit(oldp+711,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x14U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+712,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x14U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0x13U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 0x13U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x14U))))));
    bufp->fullBit(oldp+713,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x14U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 0x13U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0x13U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x14U))))));
    bufp->fullBit(oldp+714,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x13U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+715,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x13U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0x12U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 0x12U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x13U))))));
    bufp->fullBit(oldp+716,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x13U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 0x12U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0x12U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x13U))))));
    bufp->fullBit(oldp+717,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x12U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+718,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x12U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0x11U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 0x11U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x12U))))));
    bufp->fullBit(oldp+719,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x12U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 0x11U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0x11U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x12U))))));
    bufp->fullBit(oldp+720,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x11U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+721,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x11U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0x10U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 0x10U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x11U))))));
    bufp->fullBit(oldp+722,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x11U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 0x10U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0x10U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x11U))))));
    bufp->fullBit(oldp+723,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x10U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 0xfU))))));
    bufp->fullBit(oldp+724,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x10U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0xfU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 0xfU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x10U))))));
    bufp->fullBit(oldp+725,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x10U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 0xfU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0xfU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x10U))))));
    bufp->fullBit(oldp+726,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0xfU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+727,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0xfU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  >> 0xeU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0xeU))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+728,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0xfU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0xeU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 0xeU)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+729,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0xeU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+730,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0xeU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  >> 0xdU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0xdU))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+731,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0xeU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0xdU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 0xdU)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+732,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0xdU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+733,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0xdU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  >> 0xcU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0xcU))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+734,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0xdU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0xcU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 0xcU)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+735,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0xcU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+736,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0xcU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  >> 0xbU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0xbU))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+737,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0xcU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0xbU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 0xbU)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+738,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x1eU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+739,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x1eU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0x1dU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 0x1dU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1eU))))));
    bufp->fullBit(oldp+740,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x1eU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 0x1dU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0x1dU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1eU))))));
    bufp->fullBit(oldp+741,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0xbU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+742,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0xbU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  >> 0xaU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0xaU))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+743,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0xbU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0xaU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 0xaU)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+744,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0xaU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                   >> 9U))))));
    bufp->fullBit(oldp+745,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0xaU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  >> 9U) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 9U))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+746,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0xaU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 9U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 9U)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+747,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 9U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                 >> 8U))))));
    bufp->fullBit(oldp+748,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 9U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                >> 8U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                   >> 8U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+749,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 9U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 8U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 8U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+750,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 8U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                 >> 7U))))));
    bufp->fullBit(oldp+751,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 8U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                >> 7U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                   >> 7U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+752,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 8U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 7U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 7U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+753,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 7U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                 >> 6U))))));
    bufp->fullBit(oldp+754,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 7U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                >> 6U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                   >> 6U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+755,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 7U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 6U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 6U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+756,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 6U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                 >> 5U))))));
    bufp->fullBit(oldp+757,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 6U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                >> 5U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                   >> 5U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+758,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 6U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 5U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 5U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+759,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 5U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                 >> 4U))))));
    bufp->fullBit(oldp+760,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 5U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                >> 4U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                   >> 4U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+761,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 5U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 4U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 4U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+762,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 4U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                 >> 3U))))));
    bufp->fullBit(oldp+763,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 4U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                >> 3U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                   >> 3U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+764,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 4U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 3U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 3U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+765,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 3U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                 >> 2U))))));
    bufp->fullBit(oldp+766,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 3U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                >> 2U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                   >> 2U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+767,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 3U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 2U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 2U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+768,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 2U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                 >> 1U))))));
    bufp->fullBit(oldp+769,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 2U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                >> 1U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                   >> 1U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+770,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 2U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 1U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 1U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+771,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x1dU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+772,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x1dU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0x1cU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 0x1cU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1dU))))));
    bufp->fullBit(oldp+773,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x1dU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 0x1cU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0x1cU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1dU))))));
    bufp->fullBit(oldp+774,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 1U) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                 ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b))))));
    bufp->fullBit(oldp+775,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 1U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                               & (~ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+776,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 1U) | (((~ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a) 
                                               & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+777,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x1cU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+778,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x1cU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0x1bU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 0x1bU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1cU))))));
    bufp->fullBit(oldp+779,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x1cU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 0x1bU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0x1bU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1cU))))));
    bufp->fullBit(oldp+780,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x1bU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+781,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x1bU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0x1aU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 0x1aU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1bU))))));
    bufp->fullBit(oldp+782,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x1bU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 0x1aU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0x1aU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1bU))))));
    bufp->fullBit(oldp+783,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x1aU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+784,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x1aU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0x19U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 0x19U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1aU))))));
    bufp->fullBit(oldp+785,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x1aU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 0x19U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0x19U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1aU))))));
    bufp->fullBit(oldp+786,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x19U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+787,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x19U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0x18U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 0x18U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x19U))))));
    bufp->fullBit(oldp+788,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x19U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 0x18U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0x18U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x19U))))));
    bufp->fullBit(oldp+789,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x18U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+790,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x18U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0x17U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 0x17U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x18U))))));
    bufp->fullBit(oldp+791,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x18U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 0x17U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0x17U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x18U))))));
    bufp->fullBit(oldp+792,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x17U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+793,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x17U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0x16U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 0x16U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x17U))))));
    bufp->fullBit(oldp+794,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x17U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 0x16U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0x16U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x17U))))));
    bufp->fullBit(oldp+795,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x16U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+796,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x16U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 0x15U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 0x15U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x16U))))));
    bufp->fullBit(oldp+797,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x16U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 0x15U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 0x15U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x16U))))));
    bufp->fullBit(oldp+798,((((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                              ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+799,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c))));
    bufp->fullBit(oldp+800,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                      & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)))));
    bufp->fullBit(oldp+801,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+802,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+803,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+804,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+805,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+806,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+807,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+808,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+809,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+810,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+811,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+812,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+813,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+814,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+815,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+816,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+817,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+818,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+819,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+820,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+821,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 1U))));
    bufp->fullBit(oldp+822,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 1U))));
    bufp->fullBit(oldp+823,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+824,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+825,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+826,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+827,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+828,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+829,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+830,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+831,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+832,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+833,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+834,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+835,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+836,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+837,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+838,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+839,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+840,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+841,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+842,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+843,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 2U))));
    bufp->fullBit(oldp+844,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 2U))));
    bufp->fullBit(oldp+845,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+846,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+847,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 3U))));
    bufp->fullBit(oldp+848,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 3U))));
    bufp->fullBit(oldp+849,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 4U))));
    bufp->fullBit(oldp+850,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 4U))));
    bufp->fullBit(oldp+851,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 5U))));
    bufp->fullBit(oldp+852,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 5U))));
    bufp->fullBit(oldp+853,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 6U))));
    bufp->fullBit(oldp+854,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 6U))));
    bufp->fullBit(oldp+855,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 7U))));
    bufp->fullBit(oldp+856,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 7U))));
    bufp->fullBit(oldp+857,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 8U))));
    bufp->fullBit(oldp+858,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 8U))));
    bufp->fullBit(oldp+859,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 9U))));
    bufp->fullBit(oldp+860,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 9U))));
    bufp->fullBit(oldp+861,((IData)(((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0x1eU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                    >> 0x1dU))))));
    bufp->fullBit(oldp+862,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x1eU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x1dU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x1dU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1eU))))));
    bufp->fullBit(oldp+863,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x1eU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x1dU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x1dU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1eU))))));
    bufp->fullBit(oldp+864,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x14U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+865,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x14U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x13U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x13U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x14U))))));
    bufp->fullBit(oldp+866,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x14U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x13U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x13U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x14U))))));
    bufp->fullBit(oldp+867,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x13U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+868,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x13U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x12U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x12U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x13U))))));
    bufp->fullBit(oldp+869,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x13U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x12U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x12U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x13U))))));
    bufp->fullBit(oldp+870,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x12U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+871,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x12U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x11U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x11U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x12U))))));
    bufp->fullBit(oldp+872,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x12U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x11U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x11U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x12U))))));
    bufp->fullBit(oldp+873,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x11U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+874,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x11U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x10U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x10U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x11U))))));
    bufp->fullBit(oldp+875,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x11U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x10U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x10U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x11U))))));
    bufp->fullBit(oldp+876,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x10U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0xfU))))));
    bufp->fullBit(oldp+877,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x10U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0xfU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0xfU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x10U))))));
    bufp->fullBit(oldp+878,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x10U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0xfU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0xfU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x10U))))));
    bufp->fullBit(oldp+879,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0xfU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+880,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0xfU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 0xeU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0xeU))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+881,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0xfU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0xeU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 0xeU)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+882,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0xeU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+883,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0xeU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 0xdU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0xdU))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+884,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0xeU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0xdU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 0xdU)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+885,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0xdU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+886,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0xdU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 0xcU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0xcU))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+887,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0xdU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0xcU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 0xcU)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+888,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0xcU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+889,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0xcU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 0xbU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0xbU))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+890,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0xcU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0xbU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 0xbU)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+891,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0xbU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+892,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0xbU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 0xaU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0xaU))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+893,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0xbU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0xaU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 0xaU)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+894,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x1dU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+895,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x1dU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x1cU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x1cU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1dU))))));
    bufp->fullBit(oldp+896,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x1dU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x1cU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x1cU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1dU))))));
    bufp->fullBit(oldp+897,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0xaU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 9U))))));
    bufp->fullBit(oldp+898,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0xaU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 9U) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 9U))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+899,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0xaU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 9U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 9U)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+900,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 9U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                 >> 8U))))));
    bufp->fullBit(oldp+901,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 9U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                >> 8U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 8U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+902,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 9U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 8U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                  >> 8U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+903,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 8U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                 >> 7U))))));
    bufp->fullBit(oldp+904,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 8U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                >> 7U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 7U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+905,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 8U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 7U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                  >> 7U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+906,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 7U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                 >> 6U))))));
    bufp->fullBit(oldp+907,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 7U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                >> 6U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 6U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+908,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 7U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 6U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                  >> 6U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+909,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 6U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                 >> 5U))))));
    bufp->fullBit(oldp+910,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 6U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                >> 5U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 5U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+911,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 6U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 5U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                  >> 5U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+912,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 5U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                 >> 4U))))));
    bufp->fullBit(oldp+913,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 5U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                >> 4U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 4U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+914,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 5U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 4U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                  >> 4U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+915,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 4U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                 >> 3U))))));
    bufp->fullBit(oldp+916,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 4U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                >> 3U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 3U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+917,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 4U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 3U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                  >> 3U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+918,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 3U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                 >> 2U))))));
    bufp->fullBit(oldp+919,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 3U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                >> 2U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 2U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+920,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 3U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 2U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                  >> 2U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+921,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 2U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                 >> 1U))))));
    bufp->fullBit(oldp+922,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 2U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                >> 1U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 1U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+923,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 2U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 1U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                  >> 1U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+924,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 1U) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                 ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b))))));
    bufp->fullBit(oldp+925,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 1U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                               & (~ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+926,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 1U) | (((~ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a) 
                                               & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+927,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x1cU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+928,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x1cU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x1bU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x1bU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1cU))))));
    bufp->fullBit(oldp+929,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x1cU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x1bU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x1bU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1cU))))));
    bufp->fullBit(oldp+930,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x1bU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+931,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x1bU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x1aU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x1aU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1bU))))));
    bufp->fullBit(oldp+932,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x1bU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x1aU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x1aU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1bU))))));
    bufp->fullBit(oldp+933,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x1aU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+934,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x1aU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x19U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x19U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1aU))))));
    bufp->fullBit(oldp+935,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x1aU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x19U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x19U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1aU))))));
    bufp->fullBit(oldp+936,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x19U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+937,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x19U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x18U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x18U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x19U))))));
    bufp->fullBit(oldp+938,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x19U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x18U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x18U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x19U))))));
    bufp->fullBit(oldp+939,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x18U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+940,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x18U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x17U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x17U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x18U))))));
    bufp->fullBit(oldp+941,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x18U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x17U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x17U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x18U))))));
    bufp->fullBit(oldp+942,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x17U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+943,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x17U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x16U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x16U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x17U))))));
    bufp->fullBit(oldp+944,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x17U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x16U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x16U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x17U))))));
    bufp->fullBit(oldp+945,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x16U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+946,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x16U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x15U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x15U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x16U))))));
    bufp->fullBit(oldp+947,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x16U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x15U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x15U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x16U))))));
    bufp->fullBit(oldp+948,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x15U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+949,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x15U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x14U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x14U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x15U))))));
    bufp->fullBit(oldp+950,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x15U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x14U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x14U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x15U))))));
    bufp->fullBit(oldp+951,(((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                              >> 0x1fU) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                               ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                              >> 0x1eU)))));
    bufp->fullBit(oldp+952,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0x1fU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x1eU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x1eU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x1fU))))));
    bufp->fullBit(oldp+953,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0x1fU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x1eU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x1eU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x1fU))))));
    bufp->fullBit(oldp+954,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0x15U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+955,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0x15U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x14U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x14U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x15U))))));
    bufp->fullBit(oldp+956,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0x15U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x14U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x14U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x15U))))));
    bufp->fullBit(oldp+957,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0x14U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+958,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0x14U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x13U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x13U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x14U))))));
    bufp->fullBit(oldp+959,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0x14U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x13U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x13U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x14U))))));
    bufp->fullBit(oldp+960,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0x13U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+961,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0x13U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x12U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x12U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x13U))))));
    bufp->fullBit(oldp+962,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0x13U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x12U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x12U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x13U))))));
    bufp->fullBit(oldp+963,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0x12U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+964,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0x12U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x11U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x11U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x12U))))));
    bufp->fullBit(oldp+965,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0x12U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x11U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x11U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x12U))))));
    bufp->fullBit(oldp+966,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0x11U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+967,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0x11U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x10U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x10U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x11U))))));
    bufp->fullBit(oldp+968,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0x11U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x10U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x10U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x11U))))));
    bufp->fullBit(oldp+969,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0x10U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0xfU))))));
    bufp->fullBit(oldp+970,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0x10U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0xfU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0xfU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x10U))))));
    bufp->fullBit(oldp+971,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0x10U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0xfU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0xfU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x10U))))));
    bufp->fullBit(oldp+972,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0xfU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+973,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0xfU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 0xeU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0xeU))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+974,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0xfU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0xeU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 0xeU)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+975,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0xeU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+976,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0xeU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 0xdU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0xdU))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+977,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0xeU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0xdU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 0xdU)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+978,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0xdU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+979,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0xdU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 0xcU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0xcU))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+980,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0xdU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0xcU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 0xcU)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+981,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0xcU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+982,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0xcU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 0xbU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0xbU))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+983,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0xcU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0xbU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 0xbU)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+984,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0x1eU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+985,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0x1eU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0x1dU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x1dU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x1eU))))));
    bufp->fullBit(oldp+986,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0x1eU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x1dU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0x1dU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x1eU))))));
    bufp->fullBit(oldp+987,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0xbU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+988,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0xbU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 0xaU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 0xaU))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+989,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0xbU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 0xaU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 0xaU)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+990,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0xaU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 9U))))));
    bufp->fullBit(oldp+991,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0xaU) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 9U) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 9U))) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+992,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0xaU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 9U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 9U)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+993,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 9U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                 >> 8U))))));
    bufp->fullBit(oldp+994,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 9U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                >> 8U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 8U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+995,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 9U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 8U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                  >> 8U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+996,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 8U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                 >> 7U))))));
    bufp->fullBit(oldp+997,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 8U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                >> 7U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 7U))) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+998,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 8U) | (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 7U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                  >> 7U)) 
                                              & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+999,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 7U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                 >> 6U))))));
    bufp->fullBit(oldp+1000,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 7U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                 >> 6U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 6U))) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 7U))))));
    bufp->fullBit(oldp+1001,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 7U) | (((~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 6U)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 6U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 7U))))));
    bufp->fullBit(oldp+1002,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 6U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 5U))))));
    bufp->fullBit(oldp+1003,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 6U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                 >> 5U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 5U))) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 6U))))));
    bufp->fullBit(oldp+1004,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 6U) | (((~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 5U)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 5U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 6U))))));
    bufp->fullBit(oldp+1005,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 5U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 4U))))));
    bufp->fullBit(oldp+1006,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 5U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                 >> 4U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 4U))) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 5U))))));
    bufp->fullBit(oldp+1007,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 5U) | (((~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 4U)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 4U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 5U))))));
    bufp->fullBit(oldp+1008,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 4U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 3U))))));
    bufp->fullBit(oldp+1009,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 4U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                 >> 3U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 3U))) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 4U))))));
    bufp->fullBit(oldp+1010,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 4U) | (((~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 3U)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 3U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 4U))))));
    bufp->fullBit(oldp+1011,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 3U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 2U))))));
    bufp->fullBit(oldp+1012,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 3U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                 >> 2U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 2U))) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 3U))))));
    bufp->fullBit(oldp+1013,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 3U) | (((~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 2U)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 2U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 3U))))));
    bufp->fullBit(oldp+1014,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 2U) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 1U))))));
    bufp->fullBit(oldp+1015,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 2U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                 >> 1U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                    >> 1U))) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 2U))))));
    bufp->fullBit(oldp+1016,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 2U) | (((~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  >> 1U)) 
                                                & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 1U)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 2U))))));
    bufp->fullBit(oldp+1017,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 0x1dU) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0x1cU))))));
    bufp->fullBit(oldp+1018,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 0x1dU) | ((
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x1cU) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0x1cU))) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x1dU))))));
    bufp->fullBit(oldp+1019,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 0x1dU) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0x1cU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x1cU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x1dU))))));
    bufp->fullBit(oldp+1020,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 1U) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b))))));
    bufp->fullBit(oldp+1021,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 1U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                & (~ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b)) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 1U))))));
    bufp->fullBit(oldp+1022,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 1U) | (((~ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a) 
                                                & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                               & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 1U))))));
    bufp->fullBit(oldp+1023,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 0x1cU) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0x1bU))))));
    bufp->fullBit(oldp+1024,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 0x1cU) | ((
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x1bU) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0x1bU))) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x1cU))))));
    bufp->fullBit(oldp+1025,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 0x1cU) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0x1bU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x1bU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x1cU))))));
    bufp->fullBit(oldp+1026,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 0x1bU) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0x1aU))))));
    bufp->fullBit(oldp+1027,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 0x1bU) | ((
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x1aU) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0x1aU))) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x1bU))))));
    bufp->fullBit(oldp+1028,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 0x1bU) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0x1aU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x1aU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x1bU))))));
    bufp->fullBit(oldp+1029,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 0x1aU) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0x19U))))));
    bufp->fullBit(oldp+1030,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 0x1aU) | ((
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x19U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0x19U))) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+1031,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 0x1aU) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0x19U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x19U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+1032,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 0x19U) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0x18U))))));
    bufp->fullBit(oldp+1033,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 0x19U) | ((
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x18U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0x18U))) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x19U))))));
    bufp->fullBit(oldp+1034,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 0x19U) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0x18U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x18U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x19U))))));
    bufp->fullBit(oldp+1035,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 0x18U) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0x17U))))));
    bufp->fullBit(oldp+1036,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 0x18U) | ((
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x17U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0x17U))) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x18U))))));
    bufp->fullBit(oldp+1037,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 0x18U) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0x17U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x17U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x18U))))));
    bufp->fullBit(oldp+1038,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 0x17U) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0x16U))))));
    bufp->fullBit(oldp+1039,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 0x17U) | ((
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x16U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0x16U))) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x17U))))));
    bufp->fullBit(oldp+1040,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 0x17U) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0x16U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x16U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x17U))))));
    bufp->fullBit(oldp+1041,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 0x16U) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 0x15U))))));
    bufp->fullBit(oldp+1042,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 0x16U) | ((
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 0x15U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0x15U))) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x16U))))));
    bufp->fullBit(oldp+1043,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 0x16U) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0x15U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 0x15U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x16U))))));
    bufp->fullBit(oldp+1044,(vlSelf->top__DOT__dut__DOT__MEM_pc_br));
    bufp->fullBit(oldp+1045,((1U & (~ (IData)(vlSelf->top__DOT__dut__DOT__MEM_pc_br)))));
    bufp->fullIData(oldp+1046,(vlSelf->top__DOT__dut__DOT__ID_inst),32);
    bufp->fullIData(oldp+1047,(vlSelf->top__DOT__dut__DOT__ID_pc),32);
    bufp->fullIData(oldp+1048,(vlSelf->top__DOT__dut__DOT__ID_pc_four),32);
    bufp->fullIData(oldp+1049,(vlSelf->top__DOT__dut__DOT__EX_rs1_data),32);
    bufp->fullIData(oldp+1050,(vlSelf->top__DOT__dut__DOT__EX_rs2_data),32);
    bufp->fullIData(oldp+1051,(vlSelf->top__DOT__dut__DOT__EX_pc),32);
    bufp->fullIData(oldp+1052,(vlSelf->top__DOT__dut__DOT__EX_pc_four),32);
    bufp->fullIData(oldp+1053,(vlSelf->top__DOT__dut__DOT__EX_imm_value),32);
    bufp->fullCData(oldp+1054,(vlSelf->top__DOT__dut__DOT__EX_rs1_addr),5);
    bufp->fullCData(oldp+1055,(vlSelf->top__DOT__dut__DOT__EX_rs2_addr),5);
    bufp->fullCData(oldp+1056,(vlSelf->top__DOT__dut__DOT__EX_rd_addr),5);
    bufp->fullCData(oldp+1057,((0x1fU & (vlSelf->top__DOT__dut__DOT__ID_inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1058,((0x1fU & (vlSelf->top__DOT__dut__DOT__ID_inst 
                                         >> 0x14U))),5);
    bufp->fullBit(oldp+1059,(vlSelf->top__DOT__dut__DOT__EX_rd_wren));
    bufp->fullSData(oldp+1060,(vlSelf->top__DOT__dut__DOT__EX_ex_en),16);
    bufp->fullSData(oldp+1061,(vlSelf->top__DOT__dut__DOT__EX_mem_en),9);
    bufp->fullCData(oldp+1062,(vlSelf->top__DOT__dut__DOT__EX_wb_en),2);
    bufp->fullBit(oldp+1063,(vlSelf->top__DOT__dut__DOT__EX_rd_rs2_en));
    bufp->fullBit(oldp+1064,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__rd_rs2_en));
    bufp->fullBit(oldp+1065,(vlSelf->top__DOT__dut__DOT__EX_ld_en));
    bufp->fullIData(oldp+1066,(vlSelf->top__DOT__dut__DOT__MEM_rs2_data),32);
    bufp->fullIData(oldp+1067,(vlSelf->top__DOT__dut__DOT__MEM_pc_four),32);
    bufp->fullCData(oldp+1068,(vlSelf->top__DOT__dut__DOT__MEM_wb_en),2);
    bufp->fullBit(oldp+1069,(vlSelf->top__DOT__dut__DOT__MEM_ld_en));
    bufp->fullIData(oldp+1070,(vlSelf->top__DOT__dut__DOT__WB_alu_data),32);
    bufp->fullIData(oldp+1071,(vlSelf->top__DOT__dut__DOT__WB_ld_data),32);
    bufp->fullIData(oldp+1072,(vlSelf->top__DOT__dut__DOT__WB_pc_four),32);
    bufp->fullCData(oldp+1073,(vlSelf->top__DOT__dut__DOT__WB_wb_en),2);
    bufp->fullBit(oldp+1074,(vlSelf->top__DOT__dut__DOT__WB_ld_en));
    bufp->fullBit(oldp+1075,(vlSelf->top__DOT__dut__DOT__WB_mem_wren));
    bufp->fullCData(oldp+1076,((0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                        >> 5U))),4);
    bufp->fullBit(oldp+1077,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                    >> 1U))));
    bufp->fullCData(oldp+1078,((3U & ((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1079,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                    >> 4U))));
    bufp->fullCData(oldp+1080,((0x1fU & (vlSelf->top__DOT__dut__DOT__ID_inst 
                                         >> 7U))),5);
    bufp->fullIData(oldp+1081,((vlSelf->top__DOT__dut__DOT__ID_inst 
                                >> 7U)),25);
    bufp->fullIData(oldp+1082,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_value),32);
    bufp->fullSData(oldp+1083,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i),11);
    bufp->fullCData(oldp+1084,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__immsel),5);
    bufp->fullBit(oldp+1085,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__rd_wren));
    bufp->fullSData(oldp+1086,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ex_en),16);
    bufp->fullSData(oldp+1087,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__mem_en),9);
    bufp->fullCData(oldp+1088,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__wb_en),2);
    bufp->fullBit(oldp+1089,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__l_type));
    bufp->fullBit(oldp+1090,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__pc_sel));
    bufp->fullBit(oldp+1091,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__br_unsigned));
    bufp->fullCData(oldp+1092,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__op_a_sel),2);
    bufp->fullBit(oldp+1093,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__op_b_sel));
    bufp->fullCData(oldp+1094,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__alu_op),4);
    bufp->fullBit(oldp+1095,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__mem_wren));
    bufp->fullBit(oldp+1096,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__sb_en));
    bufp->fullBit(oldp+1097,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__sh_en));
    bufp->fullBit(oldp+1098,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__sw_en));
    bufp->fullBit(oldp+1099,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__lb_en));
    bufp->fullBit(oldp+1100,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__lh_en));
    bufp->fullBit(oldp+1101,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__lbu_en));
    bufp->fullBit(oldp+1102,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__lhu_en));
    bufp->fullBit(oldp+1103,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__lw_en));
    bufp->fullBit(oldp+1104,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__jalr_en) 
                              | (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__jal_en))));
    bufp->fullCData(oldp+1105,((((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__bgeu_en) 
                                 << 5U) | (((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__bltu_en) 
                                            << 4U) 
                                           | (((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__bge_en) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__blt_en) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__bne_en) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__beq_en))))))),6);
    bufp->fullCData(oldp+1106,((0x1fU & ((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i) 
                                         >> 2U))),5);
    bufp->fullCData(oldp+1107,((7U & ((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i) 
                                      >> 7U))),3);
    bufp->fullBit(oldp+1108,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1109,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__rv32i));
    bufp->fullBit(oldp+1110,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type));
    bufp->fullBit(oldp+1111,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type));
    bufp->fullBit(oldp+1112,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__s_type));
    bufp->fullBit(oldp+1113,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__b_type));
    bufp->fullBit(oldp+1114,((((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                               & (~ (IData)((0U != 
                                             (0x380U 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))) 
                              & (~ ((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i) 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+1115,((((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                               & (~ (IData)((0U != 
                                             (0x380U 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))) 
                              & ((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i) 
                                 >> 0xaU))));
    bufp->fullBit(oldp+1116,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                              & (IData)((0x80U == (0x380U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
    bufp->fullBit(oldp+1117,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                              & (IData)((0x100U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
    bufp->fullBit(oldp+1118,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                              & (IData)((0x180U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
    bufp->fullBit(oldp+1119,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                              & (IData)((0x200U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
    bufp->fullBit(oldp+1120,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                              & (0x280U == (0x780U 
                                            & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i))))));
    bufp->fullBit(oldp+1121,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                              & (0x680U == (0x780U 
                                            & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i))))));
    bufp->fullBit(oldp+1122,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                              & (IData)((0x300U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
    bufp->fullBit(oldp+1123,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                              & (IData)((0x380U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
    bufp->fullBit(oldp+1124,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                              & (~ (IData)((0U != (0x380U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i))))))));
    bufp->fullBit(oldp+1125,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                              & (IData)((0x80U == (0x380U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
    bufp->fullBit(oldp+1126,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                              & (IData)((0x100U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
    bufp->fullBit(oldp+1127,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                              & (IData)((0x180U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
    bufp->fullBit(oldp+1128,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                              & (IData)((0x200U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
    bufp->fullBit(oldp+1129,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                              & (0x280U == (0x780U 
                                            & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i))))));
    bufp->fullBit(oldp+1130,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                              & (0x680U == (0x780U 
                                            & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i))))));
    bufp->fullBit(oldp+1131,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                              & (IData)((0x300U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
    bufp->fullBit(oldp+1132,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                              & (IData)((0x380U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
    bufp->fullBit(oldp+1133,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__beq_en));
    bufp->fullBit(oldp+1134,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__bne_en));
    bufp->fullBit(oldp+1135,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__blt_en));
    bufp->fullBit(oldp+1136,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__bge_en));
    bufp->fullBit(oldp+1137,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__bltu_en));
    bufp->fullBit(oldp+1138,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__bgeu_en));
    bufp->fullBit(oldp+1139,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__jal_en));
    bufp->fullBit(oldp+1140,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__jalr_en));
    bufp->fullBit(oldp+1141,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__lui_en));
    bufp->fullBit(oldp+1142,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__auipc_en));
    bufp->fullBit(oldp+1143,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__w1));
    bufp->fullSData(oldp+1144,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__inst_i),10);
    bufp->fullBit(oldp+1145,((vlSelf->top__DOT__dut__DOT__ID_inst 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1146,((1U & (vlSelf->top__DOT__dut__DOT__ID_inst 
                                    >> 7U))));
    bufp->fullBit(oldp+1147,((1U & (vlSelf->top__DOT__dut__DOT__ID_inst 
                                    >> 0x14U))));
    bufp->fullCData(oldp+1148,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT____Vcellout__Comp2__imm),5);
    bufp->fullBit(oldp+1149,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__inst_i) 
                                    >> 5U))));
    bufp->fullBit(oldp+1150,((1U & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__inst_i))));
    bufp->fullBit(oldp+1151,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__Comp2__DOT____Vcellout__IMM0__imm));
    bufp->fullIData(oldp+1152,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+1153,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1154,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__unnamedblk3__DOT__j),32);
    bufp->fullIData(oldp+1155,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__unnamedblk4__DOT__k),32);
    bufp->fullIData(oldp+1156,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[0]),32);
    bufp->fullIData(oldp+1157,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[1]),32);
    bufp->fullIData(oldp+1158,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[2]),32);
    bufp->fullIData(oldp+1159,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[3]),32);
    bufp->fullIData(oldp+1160,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[4]),32);
    bufp->fullIData(oldp+1161,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[5]),32);
    bufp->fullIData(oldp+1162,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[6]),32);
    bufp->fullIData(oldp+1163,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[7]),32);
    bufp->fullIData(oldp+1164,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[8]),32);
    bufp->fullIData(oldp+1165,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[9]),32);
    bufp->fullIData(oldp+1166,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[10]),32);
    bufp->fullIData(oldp+1167,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[11]),32);
    bufp->fullIData(oldp+1168,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[12]),32);
    bufp->fullIData(oldp+1169,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[13]),32);
    bufp->fullIData(oldp+1170,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[14]),32);
    bufp->fullIData(oldp+1171,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[15]),32);
    bufp->fullIData(oldp+1172,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[16]),32);
    bufp->fullIData(oldp+1173,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[17]),32);
    bufp->fullIData(oldp+1174,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[18]),32);
    bufp->fullIData(oldp+1175,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[19]),32);
    bufp->fullIData(oldp+1176,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[20]),32);
    bufp->fullIData(oldp+1177,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[21]),32);
    bufp->fullIData(oldp+1178,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[22]),32);
    bufp->fullIData(oldp+1179,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[23]),32);
    bufp->fullIData(oldp+1180,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[24]),32);
    bufp->fullIData(oldp+1181,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[25]),32);
    bufp->fullIData(oldp+1182,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[26]),32);
    bufp->fullIData(oldp+1183,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[27]),32);
    bufp->fullIData(oldp+1184,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[28]),32);
    bufp->fullIData(oldp+1185,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[29]),32);
    bufp->fullIData(oldp+1186,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[30]),32);
    bufp->fullIData(oldp+1187,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[31]),32);
    bufp->fullIData(oldp+1188,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+1189,(vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc),32);
    bufp->fullBit(oldp+1190,((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1191,((1U & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc)));
    bufp->fullBit(oldp+1192,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1193,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1194,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1195,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1196,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1197,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1198,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1199,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1200,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1201,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1202,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 1U))));
    bufp->fullBit(oldp+1203,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1204,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1205,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1206,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1207,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1208,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1209,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1210,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1211,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1212,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1213,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 2U))));
    bufp->fullBit(oldp+1214,((1U & (~ (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 2U)))));
    bufp->fullBit(oldp+1215,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1216,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 3U))));
    bufp->fullBit(oldp+1217,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 4U))));
    bufp->fullBit(oldp+1218,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 5U))));
    bufp->fullBit(oldp+1219,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 6U))));
    bufp->fullBit(oldp+1220,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 7U))));
    bufp->fullBit(oldp+1221,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 8U))));
    bufp->fullBit(oldp+1222,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                    >> 9U))));
    bufp->fullCData(oldp+1223,((3U & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc)),2);
    bufp->fullSData(oldp+1224,((0x7ffU & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                          >> 2U))),11);
    bufp->fullIData(oldp+1225,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__unnamedblk1__DOT__h),32);
    bufp->fullIData(oldp+1226,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+1227,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__unnamedblk2__DOT__k),32);
    bufp->fullIData(oldp+1228,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__unnamedblk3__DOT__k),32);
    bufp->fullIData(oldp+1229,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__unnamedblk4__DOT__k),32);
    bufp->fullBit(oldp+1230,(vlSelf->top__DOT__dut__DOT__IF_stall_en));
    bufp->fullIData(oldp+1231,(vlSelf->top__DOT__dut__DOT__MEM_alu_data),32);
    bufp->fullBit(oldp+1232,(vlSelf->top__DOT__dut__DOT__ID_stall_en));
    bufp->fullBit(oldp+1233,(vlSelf->top__DOT__dut__DOT__EX_stall_en));
    bufp->fullBit(oldp+1234,(vlSelf->top__DOT__dut__DOT__EX_rst_n));
    bufp->fullCData(oldp+1235,(vlSelf->top__DOT__dut__DOT__MEM_rd_addr),5);
    bufp->fullBit(oldp+1236,(vlSelf->top__DOT__dut__DOT__MEM_rd_wren));
    bufp->fullSData(oldp+1237,(vlSelf->top__DOT__dut__DOT__MEM_mem_en),9);
    bufp->fullCData(oldp+1238,(vlSelf->top__DOT__dut__DOT__WB_rd_addr),5);
    bufp->fullBit(oldp+1239,(vlSelf->top__DOT__dut__DOT__WB_rd_wren));
    bufp->fullIData(oldp+1240,(vlSelf->top__DOT__dut__DOT__wb_data),32);
    bufp->fullCData(oldp+1241,(vlSelf->top__DOT__dut__DOT__forwardA_en),2);
    bufp->fullCData(oldp+1242,(vlSelf->top__DOT__dut__DOT__forwardB_en),2);
    bufp->fullBit(oldp+1243,(vlSelf->top__DOT__dut__DOT__pc_en));
    bufp->fullBit(oldp+1244,(vlSelf->top__DOT__dut__DOT__sel_rs1_wb));
    bufp->fullBit(oldp+1245,(vlSelf->top__DOT__dut__DOT__sel_rs2_wb));
    bufp->fullIData(oldp+1246,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a),32);
    bufp->fullIData(oldp+1247,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b),32);
    bufp->fullIData(oldp+1248,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b),32);
    bufp->fullIData(oldp+1249,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a),32);
    bufp->fullIData(oldp+1250,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b)),32);
    bufp->fullIData(oldp+1251,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b)),32);
    bufp->fullIData(oldp+1252,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b)),32);
    bufp->fullBit(oldp+1253,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1254,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1255,(((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1256,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a)));
    bufp->fullBit(oldp+1257,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b)));
    bufp->fullBit(oldp+1258,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b))));
    bufp->fullBit(oldp+1259,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b))));
    bufp->fullBit(oldp+1260,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1261,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1262,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1263,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1264,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1265,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1266,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1267,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1268,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1269,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1270,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1271,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1272,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1273,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1274,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1275,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1276,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1277,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1278,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1279,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1280,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1281,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1282,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1283,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1284,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1285,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1286,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1287,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1288,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1289,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1290,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1291,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1292,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1293,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1294,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1295,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1296,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1297,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1298,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1299,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1300,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 1U))));
    bufp->fullBit(oldp+1301,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 1U))));
    bufp->fullBit(oldp+1302,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 1U))));
    bufp->fullBit(oldp+1303,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 1U))));
    bufp->fullBit(oldp+1304,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1305,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1306,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1307,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1308,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1309,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1310,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1311,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1312,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1313,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1314,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1315,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1316,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1317,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1318,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1319,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1320,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1321,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1322,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1323,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1324,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1325,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1326,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1327,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1328,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1329,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1330,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1331,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1332,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1333,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1334,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1335,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1336,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1337,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1338,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1339,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1340,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1341,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1342,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1343,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1344,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 2U))));
    bufp->fullBit(oldp+1345,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 2U))));
    bufp->fullBit(oldp+1346,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 2U))));
    bufp->fullBit(oldp+1347,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 2U))));
    bufp->fullBit(oldp+1348,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1349,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1350,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1351,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1352,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 3U))));
    bufp->fullBit(oldp+1353,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 3U))));
    bufp->fullBit(oldp+1354,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 3U))));
    bufp->fullBit(oldp+1355,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 3U))));
    bufp->fullBit(oldp+1356,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 4U))));
    bufp->fullBit(oldp+1357,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 4U))));
    bufp->fullBit(oldp+1358,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 4U))));
    bufp->fullBit(oldp+1359,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 4U))));
    bufp->fullBit(oldp+1360,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 5U))));
    bufp->fullBit(oldp+1361,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 5U))));
    bufp->fullBit(oldp+1362,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 5U))));
    bufp->fullBit(oldp+1363,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 5U))));
    bufp->fullBit(oldp+1364,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 6U))));
    bufp->fullBit(oldp+1365,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 6U))));
    bufp->fullBit(oldp+1366,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 6U))));
    bufp->fullBit(oldp+1367,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 6U))));
    bufp->fullBit(oldp+1368,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 7U))));
    bufp->fullBit(oldp+1369,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 7U))));
    bufp->fullBit(oldp+1370,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 7U))));
    bufp->fullBit(oldp+1371,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 7U))));
    bufp->fullBit(oldp+1372,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 8U))));
    bufp->fullBit(oldp+1373,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 8U))));
    bufp->fullBit(oldp+1374,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 8U))));
    bufp->fullBit(oldp+1375,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 8U))));
    bufp->fullBit(oldp+1376,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    >> 9U))));
    bufp->fullBit(oldp+1377,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                    >> 9U))));
    bufp->fullBit(oldp+1378,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 9U))));
    bufp->fullBit(oldp+1379,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                    >> 9U))));
    bufp->fullIData(oldp+1380,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift16_out),32);
    bufp->fullIData(oldp+1381,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift16_out),32);
    bufp->fullIData(oldp+1382,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift16_out),32);
    bufp->fullIData(oldp+1383,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__overflow_value),32);
    bufp->fullBit(oldp+1384,((1U & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1385,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                << 1U)),32);
    bufp->fullIData(oldp+1386,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift1_out 
                                << 2U)),32);
    bufp->fullIData(oldp+1387,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift2_out 
                                << 4U)),32);
    bufp->fullIData(oldp+1388,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift4_out 
                                << 8U)),32);
    bufp->fullIData(oldp+1389,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift8_out 
                                << 0x10U)),32);
    bufp->fullIData(oldp+1390,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift1_out),32);
    bufp->fullIData(oldp+1391,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift2_out),32);
    bufp->fullIData(oldp+1392,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift4_out),32);
    bufp->fullIData(oldp+1393,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift8_out),32);
    bufp->fullIData(oldp+1394,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift_1),32);
    bufp->fullIData(oldp+1395,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                >> 1U)),32);
    bufp->fullIData(oldp+1396,((0x80000000U | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                               >> 1U))),32);
    bufp->fullIData(oldp+1397,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift_2),32);
    bufp->fullIData(oldp+1398,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift1_out 
                                >> 2U)),32);
    bufp->fullIData(oldp+1399,((0xc0000000U | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift1_out 
                                               >> 2U))),32);
    bufp->fullIData(oldp+1400,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift_4),32);
    bufp->fullIData(oldp+1401,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift2_out 
                                >> 4U)),32);
    bufp->fullIData(oldp+1402,((0xf0000000U | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift2_out 
                                               >> 4U))),32);
    bufp->fullIData(oldp+1403,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift_8),32);
    bufp->fullIData(oldp+1404,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift4_out 
                                >> 8U)),32);
    bufp->fullIData(oldp+1405,((0xff000000U | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift4_out 
                                               >> 8U))),32);
    bufp->fullIData(oldp+1406,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift_16),32);
    bufp->fullIData(oldp+1407,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift8_out 
                                >> 0x10U)),32);
    bufp->fullIData(oldp+1408,((0xffff0000U | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift8_out 
                                               >> 0x10U))),32);
    bufp->fullIData(oldp+1409,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift1_out),32);
    bufp->fullIData(oldp+1410,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift2_out),32);
    bufp->fullIData(oldp+1411,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift4_out),32);
    bufp->fullIData(oldp+1412,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift8_out),32);
    bufp->fullIData(oldp+1413,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift1_out 
                                >> 2U)),32);
    bufp->fullIData(oldp+1414,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift2_out 
                                >> 4U)),32);
    bufp->fullIData(oldp+1415,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift4_out 
                                >> 8U)),32);
    bufp->fullIData(oldp+1416,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift8_out 
                                >> 0x10U)),32);
    bufp->fullIData(oldp+1417,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift1_out),32);
    bufp->fullIData(oldp+1418,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift2_out),32);
    bufp->fullIData(oldp+1419,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift4_out),32);
    bufp->fullIData(oldp+1420,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift8_out),32);
    bufp->fullBit(oldp+1421,((1U & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1422,(((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                               >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+1423,(((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                  >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                >> 0x1fU))));
    bufp->fullIData(oldp+1424,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg),32);
    bufp->fullBit(oldp+1425,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1426,(((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1427,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg)));
    bufp->fullBit(oldp+1428,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg))));
    bufp->fullBit(oldp+1429,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                    & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg))));
    bufp->fullBit(oldp+1430,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1431,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1432,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1433,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1434,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1435,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1436,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1437,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1438,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1439,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1440,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1441,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1442,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1443,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1444,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1445,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1446,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1447,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1448,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1449,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1450,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1451,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1452,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1453,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1454,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1455,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1456,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1457,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1458,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1459,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1460,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 1U))));
    bufp->fullBit(oldp+1461,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 1U))));
    bufp->fullBit(oldp+1462,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 1U))));
    bufp->fullBit(oldp+1463,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1464,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1465,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1466,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1467,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1468,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1469,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1470,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1471,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1472,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1473,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1474,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1475,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1476,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1477,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1478,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1479,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1480,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1481,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1482,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1483,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1484,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1485,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1486,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1487,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1488,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1489,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1490,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1491,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1492,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1493,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 2U))));
    bufp->fullBit(oldp+1494,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 2U))));
    bufp->fullBit(oldp+1495,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 2U))));
    bufp->fullBit(oldp+1496,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1497,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1498,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1499,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 3U))));
    bufp->fullBit(oldp+1500,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 3U))));
    bufp->fullBit(oldp+1501,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 3U))));
    bufp->fullBit(oldp+1502,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 4U))));
    bufp->fullBit(oldp+1503,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 4U))));
    bufp->fullBit(oldp+1504,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 4U))));
    bufp->fullBit(oldp+1505,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 5U))));
    bufp->fullBit(oldp+1506,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 5U))));
    bufp->fullBit(oldp+1507,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 5U))));
    bufp->fullBit(oldp+1508,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 6U))));
    bufp->fullBit(oldp+1509,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 6U))));
    bufp->fullBit(oldp+1510,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 6U))));
    bufp->fullBit(oldp+1511,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 7U))));
    bufp->fullBit(oldp+1512,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 7U))));
    bufp->fullBit(oldp+1513,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 7U))));
    bufp->fullBit(oldp+1514,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 8U))));
    bufp->fullBit(oldp+1515,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 8U))));
    bufp->fullBit(oldp+1516,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 8U))));
    bufp->fullBit(oldp+1517,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 9U))));
    bufp->fullBit(oldp+1518,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 9U))));
    bufp->fullBit(oldp+1519,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 9U))));
    bufp->fullBit(oldp+1520,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__diff_sign));
    bufp->fullBit(oldp+1521,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                              >> 0x1fU)));
    bufp->fullIData(oldp+1522,((0x7fffffffU & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a)),31);
    bufp->fullIData(oldp+1523,((0x7fffffffU & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b)),31);
    bufp->fullBit(oldp+1524,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1525,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1526,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1527,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1528,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1529,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1530,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1531,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1532,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1533,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1534,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1535,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1536,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1537,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1538,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1539,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1540,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1541,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1542,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1543,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1544,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1545,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1546,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1547,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1548,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 9U))));
    bufp->fullBit(oldp+1549,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 9U))));
    bufp->fullBit(oldp+1550,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 8U))));
    bufp->fullBit(oldp+1551,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 8U))));
    bufp->fullBit(oldp+1552,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 7U))));
    bufp->fullBit(oldp+1553,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 7U))));
    bufp->fullBit(oldp+1554,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 6U))));
    bufp->fullBit(oldp+1555,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 6U))));
    bufp->fullBit(oldp+1556,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 5U))));
    bufp->fullBit(oldp+1557,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 5U))));
    bufp->fullBit(oldp+1558,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 4U))));
    bufp->fullBit(oldp+1559,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 4U))));
    bufp->fullBit(oldp+1560,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 3U))));
    bufp->fullBit(oldp+1561,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 3U))));
    bufp->fullBit(oldp+1562,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 2U))));
    bufp->fullBit(oldp+1563,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 2U))));
    bufp->fullBit(oldp+1564,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 1U))));
    bufp->fullBit(oldp+1565,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 1U))));
    bufp->fullBit(oldp+1566,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a)));
    bufp->fullBit(oldp+1567,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b)));
    bufp->fullBit(oldp+1568,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1569,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1570,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1571,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1572,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1573,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1574,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1575,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1576,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1577,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1578,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1579,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1580,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1581,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1582,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1583,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1584,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1585,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1586,((1U & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                       >> 0x1eU)))));
    bufp->fullBit(oldp+1587,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                     >> 0x1eU) & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 0x1eU))))));
    bufp->fullBit(oldp+1588,((1U & ((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                        >> 0x1eU)) 
                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x1eU)))));
    bufp->fullBit(oldp+1589,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1590,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1591,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1592,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1593,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1594,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1595,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1596,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1597,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1598,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1599,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1600,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1601,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1602,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1603,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1604,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1605,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1606,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1607,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1608,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1609,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1610,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1611,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1612,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1613,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1614,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1615,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 9U))));
    bufp->fullBit(oldp+1616,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 9U))));
    bufp->fullBit(oldp+1617,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 8U))));
    bufp->fullBit(oldp+1618,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 8U))));
    bufp->fullBit(oldp+1619,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 7U))));
    bufp->fullBit(oldp+1620,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 7U))));
    bufp->fullBit(oldp+1621,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 6U))));
    bufp->fullBit(oldp+1622,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 6U))));
    bufp->fullBit(oldp+1623,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 5U))));
    bufp->fullBit(oldp+1624,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 5U))));
    bufp->fullBit(oldp+1625,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 4U))));
    bufp->fullBit(oldp+1626,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 4U))));
    bufp->fullBit(oldp+1627,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 3U))));
    bufp->fullBit(oldp+1628,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 3U))));
    bufp->fullBit(oldp+1629,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 2U))));
    bufp->fullBit(oldp+1630,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 2U))));
    bufp->fullBit(oldp+1631,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 1U))));
    bufp->fullBit(oldp+1632,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 1U))));
    bufp->fullBit(oldp+1633,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1634,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1635,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a)));
    bufp->fullBit(oldp+1636,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b)));
    bufp->fullBit(oldp+1637,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1638,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1639,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1640,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1641,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1642,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1643,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1644,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1645,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1646,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1647,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1648,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1649,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1650,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1651,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1652,((1U & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1653,(((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                               >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+1654,(((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                  >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                >> 0x1fU))));
    bufp->fullBit(oldp+1655,((1U & (IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en))));
    bufp->fullBit(oldp+1656,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en) 
                                    >> 1U))));
    bufp->fullBit(oldp+1657,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en) 
                                    >> 2U))));
    bufp->fullBit(oldp+1658,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en) 
                                    >> 3U))));
    bufp->fullBit(oldp+1659,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en) 
                                    >> 4U))));
    bufp->fullBit(oldp+1660,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en) 
                                    >> 5U))));
    bufp->fullBit(oldp+1661,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en) 
                                    >> 6U))));
    bufp->fullBit(oldp+1662,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en) 
                                    >> 7U))));
    bufp->fullBit(oldp+1663,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en) 
                                    >> 8U))));
    bufp->fullCData(oldp+1664,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__addr_sel),2);
    bufp->fullIData(oldp+1665,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__st_data_mem),32);
    bufp->fullCData(oldp+1666,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__temp_st[0]),8);
    bufp->fullCData(oldp+1667,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__temp_st[1]),8);
    bufp->fullCData(oldp+1668,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__temp_st[2]),8);
    bufp->fullCData(oldp+1669,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__temp_st[3]),8);
    bufp->fullCData(oldp+1670,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__LOAD_DAT__DOT__sel),5);
    bufp->fullIData(oldp+1671,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__LOAD_DAT__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+1672,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__LOAD_DAT__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1673,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__LOAD_DAT__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+1674,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__LOAD_DAT__DOT__unnamedblk4__DOT__i),32);
    bufp->fullCData(oldp+1675,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__STORE_DAT__DOT__sel),3);
    bufp->fullIData(oldp+1676,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__STORE_DAT__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+1677,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__STORE_DAT__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1678,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__unnamedblk5__DOT__k),32);
    bufp->fullIData(oldp+1679,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__unnamedblk6__DOT__k),32);
    bufp->fullIData(oldp+1680,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__unnamedblk7__DOT__k),32);
    bufp->fullBit(oldp+1681,(vlSelf->clk_i));
    bufp->fullBit(oldp+1682,(vlSelf->rst_ni));
    bufp->fullIData(oldp+1683,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+1684,(vlSelf->pc_debug_o),32);
    bufp->fullIData(oldp+1685,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+1686,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+1687,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+1688,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+1689,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+1690,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+1691,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+1692,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+1693,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+1694,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+1695,(vlSelf->io_hex7_o),32);
    bufp->fullBit(oldp+1696,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                      >> 0xfU) & (~ (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt))) 
                                    | (((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                        >> 0xeU) & (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt))))));
    bufp->fullBit(oldp+1697,((1U & ((((((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                        >> 0xdU) & 
                                       ((IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_eq) 
                                        | (~ (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt)))) 
                                      | (((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt))) 
                                     | (((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                         >> 0xbU) & 
                                        (~ (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_eq)))) 
                                    | (((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                        >> 0xaU) & (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_eq))))));
    bufp->fullBit(oldp+1698,((1U & ((((((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                        >> 0xfU) & 
                                       (~ (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt))) 
                                      | (((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt))) 
                                     & ((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                        >> 1U)) | (
                                                   ((((((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                                        >> 0xdU) 
                                                       & ((IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_eq) 
                                                          | (~ (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt)))) 
                                                      | (((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                                          >> 0xcU) 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt))) 
                                                     | (((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                                         >> 0xbU) 
                                                        & (~ (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_eq)))) 
                                                    | (((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                                        >> 0xaU) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_eq))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                                       >> 1U)))))));
    bufp->fullBit(oldp+1699,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                      >> 9U) | ((((
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                                    >> 0xfU) 
                                                   & (~ (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt))) 
                                                  | (((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                                      >> 0xeU) 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt))) 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                                    >> 1U)) 
                                                | (((((((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                                        >> 0xdU) 
                                                       & ((IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_eq) 
                                                          | (~ (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt)))) 
                                                      | (((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                                          >> 0xcU) 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt))) 
                                                     | (((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                                         >> 0xbU) 
                                                        & (~ (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_eq)))) 
                                                    | (((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                                        >> 0xaU) 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_eq))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                                       >> 1U))))) 
                                    | (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en)))));
    bufp->fullIData(oldp+1700,(((0x100U & (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en))
                                 ? ((0x80U & (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en))
                                     ? 0U : ((0x40U 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en))
                                              ? 0U : 
                                             ((0x20U 
                                               & (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en))
                                               ? vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sra
                                               : vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__srl)))
                                 : ((0x80U & (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en))
                                     ? ((0x40U & (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en))
                                         ? ((0x20U 
                                             & (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en))
                                             ? vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sll
                                             : (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b))
                                         : ((0x20U 
                                             & (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en))
                                             ? (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b)
                                             : (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b)))
                                     : ((0x40U & (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en))
                                         ? ((0x20U 
                                             & (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en))
                                             ? vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sltu
                                             : vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__slt)
                                         : ((0x20U 
                                             & (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en))
                                             ? vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub
                                             : vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add))))),32);
    bufp->fullIData(oldp+1701,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem
                               [(0x1fU & (vlSelf->top__DOT__dut__DOT__ID_inst 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1702,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem
                               [(0x1fU & (vlSelf->top__DOT__dut__DOT__ID_inst 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1703,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__rs1_data),32);
    bufp->fullIData(oldp+1704,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__rs2_data),32);
    bufp->fullBit(oldp+1705,(1U));
    bufp->fullBit(oldp+1706,(0U));
    bufp->fullIData(oldp+1707,(0x20U),32);
    bufp->fullIData(oldp+1708,(0U),32);
    bufp->fullIData(oldp+1709,(0xffffffffU),32);
    bufp->fullIData(oldp+1710,(4U),32);
    bufp->fullIData(oldp+1711,(0U),32);
    bufp->fullIData(oldp+1712,(4U),32);
    bufp->fullIData(oldp+1713,(8U),32);
    bufp->fullIData(oldp+1714,(0xcU),32);
    bufp->fullIData(oldp+1715,(0x10U),32);
    bufp->fullIData(oldp+1716,(0x14U),32);
    bufp->fullIData(oldp+1717,(0x18U),32);
    bufp->fullIData(oldp+1718,(0x1cU),32);
    bufp->fullIData(oldp+1719,(0x20U),32);
    bufp->fullIData(oldp+1720,(0x24U),32);
    bufp->fullIData(oldp+1721,(0x28U),32);
    bufp->fullIData(oldp+1722,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__unnamedblk8__DOT__k),32);
}
