// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_eq));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__rst_n));
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__slt),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sltu),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sll),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__srl),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sra),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c),32);
        bufp->chgBit(oldp+11,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                               >> 0x1fU)));
        bufp->chgBit(oldp+12,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)));
        bufp->chgBit(oldp+13,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0xaU))));
        bufp->chgBit(oldp+14,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0xbU))));
        bufp->chgBit(oldp+15,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0xcU))));
        bufp->chgBit(oldp+16,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0xdU))));
        bufp->chgBit(oldp+17,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0xeU))));
        bufp->chgBit(oldp+18,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0xfU))));
        bufp->chgBit(oldp+19,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0x10U))));
        bufp->chgBit(oldp+20,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0x11U))));
        bufp->chgBit(oldp+21,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0x12U))));
        bufp->chgBit(oldp+22,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0x13U))));
        bufp->chgBit(oldp+23,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 1U))));
        bufp->chgBit(oldp+24,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0x14U))));
        bufp->chgBit(oldp+25,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0x15U))));
        bufp->chgBit(oldp+26,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0x16U))));
        bufp->chgBit(oldp+27,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0x17U))));
        bufp->chgBit(oldp+28,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0x18U))));
        bufp->chgBit(oldp+29,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0x19U))));
        bufp->chgBit(oldp+30,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+31,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+32,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+33,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+34,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 2U))));
        bufp->chgBit(oldp+35,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+36,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 3U))));
        bufp->chgBit(oldp+37,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 4U))));
        bufp->chgBit(oldp+38,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 5U))));
        bufp->chgBit(oldp+39,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 6U))));
        bufp->chgBit(oldp+40,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 7U))));
        bufp->chgBit(oldp+41,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 8U))));
        bufp->chgBit(oldp+42,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                     >> 9U))));
        bufp->chgBit(oldp+43,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b)));
        bufp->chgBit(oldp+44,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b)));
        bufp->chgBit(oldp+45,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b)));
        bufp->chgBit(oldp+46,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__overflow_signal));
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b),32);
        bufp->chgBit(oldp+50,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                               >> 0x1fU)));
        bufp->chgBit(oldp+51,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                               >> 0x1fU)));
        bufp->chgBit(oldp+52,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                               >> 0x1fU)));
        bufp->chgBit(oldp+53,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                     >> 0x15U))));
        bufp->chgBit(oldp+54,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                     >> 0x15U))));
        bufp->chgBit(oldp+55,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                     >> 0x15U))));
        bufp->chgBit(oldp+56,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                     >> 0x14U))));
        bufp->chgBit(oldp+57,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                     >> 0x14U))));
        bufp->chgBit(oldp+58,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                     >> 0x14U))));
        bufp->chgBit(oldp+59,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                     >> 0x13U))));
        bufp->chgBit(oldp+60,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                     >> 0x13U))));
        bufp->chgBit(oldp+61,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                     >> 0x13U))));
        bufp->chgBit(oldp+62,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                     >> 0x12U))));
        bufp->chgBit(oldp+63,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                     >> 0x12U))));
        bufp->chgBit(oldp+64,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                     >> 0x12U))));
        bufp->chgBit(oldp+65,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                     >> 0x11U))));
        bufp->chgBit(oldp+66,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                     >> 0x11U))));
        bufp->chgBit(oldp+67,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                     >> 0x11U))));
        bufp->chgBit(oldp+68,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                     >> 0x10U))));
        bufp->chgBit(oldp+69,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                     >> 0x10U))));
        bufp->chgBit(oldp+70,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                     >> 0x10U))));
        bufp->chgBit(oldp+71,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                     >> 0xfU))));
        bufp->chgBit(oldp+72,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                     >> 0xfU))));
        bufp->chgBit(oldp+73,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                     >> 0xfU))));
        bufp->chgBit(oldp+74,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                     >> 0xeU))));
        bufp->chgBit(oldp+75,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                     >> 0xeU))));
        bufp->chgBit(oldp+76,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                     >> 0xeU))));
        bufp->chgBit(oldp+77,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                     >> 0xdU))));
        bufp->chgBit(oldp+78,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                     >> 0xdU))));
        bufp->chgBit(oldp+79,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                     >> 0xdU))));
        bufp->chgBit(oldp+80,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                     >> 0xcU))));
        bufp->chgBit(oldp+81,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                     >> 0xcU))));
        bufp->chgBit(oldp+82,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                     >> 0xcU))));
        bufp->chgBit(oldp+83,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+84,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+85,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+86,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                     >> 0xbU))));
        bufp->chgBit(oldp+87,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                     >> 0xbU))));
        bufp->chgBit(oldp+88,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                     >> 0xbU))));
        bufp->chgBit(oldp+89,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                     >> 0xaU))));
        bufp->chgBit(oldp+90,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                     >> 0xaU))));
        bufp->chgBit(oldp+91,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                     >> 0xaU))));
        bufp->chgBit(oldp+92,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                     >> 9U))));
        bufp->chgBit(oldp+93,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                     >> 9U))));
        bufp->chgBit(oldp+94,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                     >> 9U))));
        bufp->chgBit(oldp+95,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                     >> 8U))));
        bufp->chgBit(oldp+96,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                     >> 8U))));
        bufp->chgBit(oldp+97,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                     >> 8U))));
        bufp->chgBit(oldp+98,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                     >> 7U))));
        bufp->chgBit(oldp+99,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                     >> 7U))));
        bufp->chgBit(oldp+100,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                      >> 7U))));
        bufp->chgBit(oldp+101,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                      >> 6U))));
        bufp->chgBit(oldp+102,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                      >> 6U))));
        bufp->chgBit(oldp+103,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                      >> 6U))));
        bufp->chgBit(oldp+104,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                      >> 5U))));
        bufp->chgBit(oldp+105,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                      >> 5U))));
        bufp->chgBit(oldp+106,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                      >> 5U))));
        bufp->chgBit(oldp+107,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                      >> 4U))));
        bufp->chgBit(oldp+108,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                      >> 4U))));
        bufp->chgBit(oldp+109,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                      >> 4U))));
        bufp->chgBit(oldp+110,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                      >> 3U))));
        bufp->chgBit(oldp+111,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                      >> 3U))));
        bufp->chgBit(oldp+112,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                      >> 3U))));
        bufp->chgBit(oldp+113,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                      >> 2U))));
        bufp->chgBit(oldp+114,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                      >> 2U))));
        bufp->chgBit(oldp+115,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                      >> 2U))));
        bufp->chgBit(oldp+116,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+117,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+118,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+119,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                      >> 1U))));
        bufp->chgBit(oldp+120,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                      >> 1U))));
        bufp->chgBit(oldp+121,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                      >> 1U))));
        bufp->chgBit(oldp+122,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+123,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+124,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+125,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+126,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+127,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+128,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+129,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+130,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+131,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+132,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+133,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+134,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+135,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+136,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+137,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+138,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+139,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+140,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+141,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+142,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+143,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b)));
        bufp->chgBit(oldp+144,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b)));
        bufp->chgBit(oldp+145,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b)));
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b),32);
        bufp->chgBit(oldp+149,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                >> 0x1fU)));
        bufp->chgBit(oldp+150,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                >> 0x1fU)));
        bufp->chgBit(oldp+151,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                >> 0x1fU)));
        bufp->chgBit(oldp+152,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0x15U))));
        bufp->chgBit(oldp+153,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0x15U))));
        bufp->chgBit(oldp+154,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0x15U))));
        bufp->chgBit(oldp+155,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+156,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+157,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+158,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0x13U))));
        bufp->chgBit(oldp+159,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0x13U))));
        bufp->chgBit(oldp+160,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0x13U))));
        bufp->chgBit(oldp+161,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0x12U))));
        bufp->chgBit(oldp+162,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0x12U))));
        bufp->chgBit(oldp+163,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0x12U))));
        bufp->chgBit(oldp+164,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0x11U))));
        bufp->chgBit(oldp+165,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0x11U))));
        bufp->chgBit(oldp+166,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0x11U))));
        bufp->chgBit(oldp+167,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0x10U))));
        bufp->chgBit(oldp+168,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0x10U))));
        bufp->chgBit(oldp+169,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0x10U))));
        bufp->chgBit(oldp+170,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0xfU))));
        bufp->chgBit(oldp+171,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0xfU))));
        bufp->chgBit(oldp+172,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0xfU))));
        bufp->chgBit(oldp+173,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0xeU))));
        bufp->chgBit(oldp+174,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0xeU))));
        bufp->chgBit(oldp+175,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0xeU))));
        bufp->chgBit(oldp+176,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0xdU))));
        bufp->chgBit(oldp+177,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0xdU))));
        bufp->chgBit(oldp+178,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0xdU))));
        bufp->chgBit(oldp+179,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0xcU))));
        bufp->chgBit(oldp+180,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0xcU))));
        bufp->chgBit(oldp+181,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0xcU))));
        bufp->chgBit(oldp+182,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+183,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+184,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+185,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0xbU))));
        bufp->chgBit(oldp+186,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0xbU))));
        bufp->chgBit(oldp+187,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0xbU))));
        bufp->chgBit(oldp+188,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0xaU))));
        bufp->chgBit(oldp+189,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0xaU))));
        bufp->chgBit(oldp+190,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0xaU))));
        bufp->chgBit(oldp+191,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 9U))));
        bufp->chgBit(oldp+192,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 9U))));
        bufp->chgBit(oldp+193,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 9U))));
        bufp->chgBit(oldp+194,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 8U))));
        bufp->chgBit(oldp+195,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 8U))));
        bufp->chgBit(oldp+196,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 8U))));
        bufp->chgBit(oldp+197,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 7U))));
        bufp->chgBit(oldp+198,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 7U))));
        bufp->chgBit(oldp+199,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 7U))));
        bufp->chgBit(oldp+200,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 6U))));
        bufp->chgBit(oldp+201,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 6U))));
        bufp->chgBit(oldp+202,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 6U))));
        bufp->chgBit(oldp+203,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 5U))));
        bufp->chgBit(oldp+204,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 5U))));
        bufp->chgBit(oldp+205,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 5U))));
        bufp->chgBit(oldp+206,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 4U))));
        bufp->chgBit(oldp+207,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 4U))));
        bufp->chgBit(oldp+208,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 4U))));
        bufp->chgBit(oldp+209,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 3U))));
        bufp->chgBit(oldp+210,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 3U))));
        bufp->chgBit(oldp+211,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 3U))));
        bufp->chgBit(oldp+212,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 2U))));
        bufp->chgBit(oldp+213,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 2U))));
        bufp->chgBit(oldp+214,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 2U))));
        bufp->chgBit(oldp+215,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+216,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+217,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+218,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 1U))));
        bufp->chgBit(oldp+219,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 1U))));
        bufp->chgBit(oldp+220,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 1U))));
        bufp->chgBit(oldp+221,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+222,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+223,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+224,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+225,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+226,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+227,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+228,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+229,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+230,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+231,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+232,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+233,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+234,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+235,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+236,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+237,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+238,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+239,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+240,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+241,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                      >> 0x16U))));
        bufp->chgIData(oldp+242,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c),32);
        bufp->chgBit(oldp+243,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                >> 0x1fU)));
        bufp->chgBit(oldp+244,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)));
        bufp->chgBit(oldp+245,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0xaU))));
        bufp->chgBit(oldp+246,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0xbU))));
        bufp->chgBit(oldp+247,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0xcU))));
        bufp->chgBit(oldp+248,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0xdU))));
        bufp->chgBit(oldp+249,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0xeU))));
        bufp->chgBit(oldp+250,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0xfU))));
        bufp->chgBit(oldp+251,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0x10U))));
        bufp->chgBit(oldp+252,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0x11U))));
        bufp->chgBit(oldp+253,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0x12U))));
        bufp->chgBit(oldp+254,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0x13U))));
        bufp->chgBit(oldp+255,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 1U))));
        bufp->chgBit(oldp+256,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0x14U))));
        bufp->chgBit(oldp+257,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0x15U))));
        bufp->chgBit(oldp+258,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0x16U))));
        bufp->chgBit(oldp+259,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0x17U))));
        bufp->chgBit(oldp+260,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0x18U))));
        bufp->chgBit(oldp+261,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0x19U))));
        bufp->chgBit(oldp+262,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+263,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+264,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+265,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+266,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 2U))));
        bufp->chgBit(oldp+267,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+268,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 3U))));
        bufp->chgBit(oldp+269,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 4U))));
        bufp->chgBit(oldp+270,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 5U))));
        bufp->chgBit(oldp+271,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 6U))));
        bufp->chgBit(oldp+272,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 7U))));
        bufp->chgBit(oldp+273,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 8U))));
        bufp->chgBit(oldp+274,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                      >> 9U))));
        bufp->chgBit(oldp+275,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b)));
        bufp->chgBit(oldp+276,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b)));
        bufp->chgBit(oldp+277,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b)));
        bufp->chgBit(oldp+278,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b)));
        bufp->chgIData(oldp+279,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b),31);
        bufp->chgIData(oldp+280,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b),31);
        bufp->chgIData(oldp+281,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b),31);
        bufp->chgBit(oldp+282,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+283,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+284,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+285,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+286,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+287,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+288,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0x13U))));
        bufp->chgBit(oldp+289,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0x13U))));
        bufp->chgBit(oldp+290,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0x13U))));
        bufp->chgBit(oldp+291,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0x12U))));
        bufp->chgBit(oldp+292,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0x12U))));
        bufp->chgBit(oldp+293,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0x12U))));
        bufp->chgBit(oldp+294,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0x11U))));
        bufp->chgBit(oldp+295,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0x11U))));
        bufp->chgBit(oldp+296,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0x11U))));
        bufp->chgBit(oldp+297,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0x10U))));
        bufp->chgBit(oldp+298,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0x10U))));
        bufp->chgBit(oldp+299,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0x10U))));
        bufp->chgBit(oldp+300,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0xfU))));
        bufp->chgBit(oldp+301,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0xfU))));
        bufp->chgBit(oldp+302,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0xfU))));
        bufp->chgBit(oldp+303,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0xeU))));
        bufp->chgBit(oldp+304,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0xeU))));
        bufp->chgBit(oldp+305,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0xeU))));
        bufp->chgBit(oldp+306,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0xdU))));
        bufp->chgBit(oldp+307,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0xdU))));
        bufp->chgBit(oldp+308,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0xdU))));
        bufp->chgBit(oldp+309,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0xcU))));
        bufp->chgBit(oldp+310,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0xcU))));
        bufp->chgBit(oldp+311,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0xcU))));
        bufp->chgBit(oldp+312,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0xbU))));
        bufp->chgBit(oldp+313,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0xbU))));
        bufp->chgBit(oldp+314,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0xbU))));
        bufp->chgBit(oldp+315,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+316,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+317,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+318,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0xaU))));
        bufp->chgBit(oldp+319,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0xaU))));
        bufp->chgBit(oldp+320,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0xaU))));
        bufp->chgBit(oldp+321,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 9U))));
        bufp->chgBit(oldp+322,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 9U))));
        bufp->chgBit(oldp+323,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 9U))));
        bufp->chgBit(oldp+324,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 8U))));
        bufp->chgBit(oldp+325,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 8U))));
        bufp->chgBit(oldp+326,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 8U))));
        bufp->chgBit(oldp+327,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 7U))));
        bufp->chgBit(oldp+328,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 7U))));
        bufp->chgBit(oldp+329,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 7U))));
        bufp->chgBit(oldp+330,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 6U))));
        bufp->chgBit(oldp+331,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 6U))));
        bufp->chgBit(oldp+332,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 6U))));
        bufp->chgBit(oldp+333,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 5U))));
        bufp->chgBit(oldp+334,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 5U))));
        bufp->chgBit(oldp+335,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 5U))));
        bufp->chgBit(oldp+336,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 4U))));
        bufp->chgBit(oldp+337,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 4U))));
        bufp->chgBit(oldp+338,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 4U))));
        bufp->chgBit(oldp+339,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 3U))));
        bufp->chgBit(oldp+340,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 3U))));
        bufp->chgBit(oldp+341,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 3U))));
        bufp->chgBit(oldp+342,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 2U))));
        bufp->chgBit(oldp+343,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 2U))));
        bufp->chgBit(oldp+344,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 2U))));
        bufp->chgBit(oldp+345,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 1U))));
        bufp->chgBit(oldp+346,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 1U))));
        bufp->chgBit(oldp+347,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 1U))));
        bufp->chgBit(oldp+348,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+349,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+350,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+351,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+352,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+353,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+354,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+355,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+356,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+357,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+358,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+359,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+360,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+361,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+362,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+363,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+364,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+365,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+366,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+367,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+368,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+369,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0x15U))));
        bufp->chgBit(oldp+370,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                      >> 0x15U))));
        bufp->chgBit(oldp+371,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                      >> 0x15U))));
        bufp->chgIData(oldp+372,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b),32);
        bufp->chgIData(oldp+373,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b),32);
        bufp->chgIData(oldp+374,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b),32);
        bufp->chgBit(oldp+375,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                >> 0x1fU)));
        bufp->chgBit(oldp+376,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                >> 0x1fU)));
        bufp->chgBit(oldp+377,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                >> 0x1fU)));
        bufp->chgBit(oldp+378,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0x15U))));
        bufp->chgBit(oldp+379,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0x15U))));
        bufp->chgBit(oldp+380,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0x15U))));
        bufp->chgBit(oldp+381,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+382,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+383,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+384,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0x13U))));
        bufp->chgBit(oldp+385,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0x13U))));
        bufp->chgBit(oldp+386,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0x13U))));
        bufp->chgBit(oldp+387,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0x12U))));
        bufp->chgBit(oldp+388,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0x12U))));
        bufp->chgBit(oldp+389,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0x12U))));
        bufp->chgBit(oldp+390,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0x11U))));
        bufp->chgBit(oldp+391,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0x11U))));
        bufp->chgBit(oldp+392,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0x11U))));
        bufp->chgBit(oldp+393,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0x10U))));
        bufp->chgBit(oldp+394,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0x10U))));
        bufp->chgBit(oldp+395,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0x10U))));
        bufp->chgBit(oldp+396,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0xfU))));
        bufp->chgBit(oldp+397,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0xfU))));
        bufp->chgBit(oldp+398,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0xfU))));
        bufp->chgBit(oldp+399,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0xeU))));
        bufp->chgBit(oldp+400,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0xeU))));
        bufp->chgBit(oldp+401,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0xeU))));
        bufp->chgBit(oldp+402,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0xdU))));
        bufp->chgBit(oldp+403,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0xdU))));
        bufp->chgBit(oldp+404,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0xdU))));
        bufp->chgBit(oldp+405,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0xcU))));
        bufp->chgBit(oldp+406,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0xcU))));
        bufp->chgBit(oldp+407,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0xcU))));
        bufp->chgBit(oldp+408,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+409,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+410,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+411,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0xbU))));
        bufp->chgBit(oldp+412,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0xbU))));
        bufp->chgBit(oldp+413,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0xbU))));
        bufp->chgBit(oldp+414,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0xaU))));
        bufp->chgBit(oldp+415,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0xaU))));
        bufp->chgBit(oldp+416,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0xaU))));
        bufp->chgBit(oldp+417,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 9U))));
        bufp->chgBit(oldp+418,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 9U))));
        bufp->chgBit(oldp+419,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 9U))));
        bufp->chgBit(oldp+420,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 8U))));
        bufp->chgBit(oldp+421,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 8U))));
        bufp->chgBit(oldp+422,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 8U))));
        bufp->chgBit(oldp+423,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 7U))));
        bufp->chgBit(oldp+424,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 7U))));
        bufp->chgBit(oldp+425,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 7U))));
        bufp->chgBit(oldp+426,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 6U))));
        bufp->chgBit(oldp+427,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 6U))));
        bufp->chgBit(oldp+428,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 6U))));
        bufp->chgBit(oldp+429,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 5U))));
        bufp->chgBit(oldp+430,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 5U))));
        bufp->chgBit(oldp+431,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 5U))));
        bufp->chgBit(oldp+432,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 4U))));
        bufp->chgBit(oldp+433,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 4U))));
        bufp->chgBit(oldp+434,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 4U))));
        bufp->chgBit(oldp+435,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 3U))));
        bufp->chgBit(oldp+436,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 3U))));
        bufp->chgBit(oldp+437,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 3U))));
        bufp->chgBit(oldp+438,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 2U))));
        bufp->chgBit(oldp+439,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 2U))));
        bufp->chgBit(oldp+440,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 2U))));
        bufp->chgBit(oldp+441,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+442,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+443,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+444,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 1U))));
        bufp->chgBit(oldp+445,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 1U))));
        bufp->chgBit(oldp+446,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 1U))));
        bufp->chgBit(oldp+447,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+448,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+449,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+450,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+451,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+452,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+453,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+454,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+455,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+456,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+457,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+458,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+459,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+460,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+461,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+462,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+463,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+464,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+465,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+466,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+467,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+468,(vlSelf->top__DOT__dut__DOT__IF_instance__DOT__rst_n));
        bufp->chgIData(oldp+469,(vlSelf->top__DOT__dut__DOT__IF_instance__DOT__nxt_pc),32);
        bufp->chgIData(oldp+470,(vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc_four),32);
        bufp->chgIData(oldp+471,(vlSelf->top__DOT__dut__DOT__IF_instance__DOT__inst),32);
        bufp->chgIData(oldp+472,(vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c),32);
        bufp->chgBit(oldp+473,((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                >> 0x1fU)));
        bufp->chgBit(oldp+474,((1U & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c)));
        bufp->chgBit(oldp+475,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0xaU))));
        bufp->chgBit(oldp+476,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0xbU))));
        bufp->chgBit(oldp+477,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0xcU))));
        bufp->chgBit(oldp+478,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0xdU))));
        bufp->chgBit(oldp+479,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0xeU))));
        bufp->chgBit(oldp+480,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0xfU))));
        bufp->chgBit(oldp+481,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0x10U))));
        bufp->chgBit(oldp+482,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0x11U))));
        bufp->chgBit(oldp+483,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0x12U))));
        bufp->chgBit(oldp+484,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0x13U))));
        bufp->chgBit(oldp+485,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 1U))));
        bufp->chgBit(oldp+486,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0x14U))));
        bufp->chgBit(oldp+487,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0x15U))));
        bufp->chgBit(oldp+488,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0x16U))));
        bufp->chgBit(oldp+489,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0x17U))));
        bufp->chgBit(oldp+490,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0x18U))));
        bufp->chgBit(oldp+491,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0x19U))));
        bufp->chgBit(oldp+492,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+493,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+494,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+495,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+496,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 2U))));
        bufp->chgBit(oldp+497,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+498,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 3U))));
        bufp->chgBit(oldp+499,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 4U))));
        bufp->chgBit(oldp+500,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 5U))));
        bufp->chgBit(oldp+501,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 6U))));
        bufp->chgBit(oldp+502,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 7U))));
        bufp->chgBit(oldp+503,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 8U))));
        bufp->chgBit(oldp+504,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                      >> 9U))));
        bufp->chgIData(oldp+505,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__MEM_ld_data),32);
        bufp->chgIData(oldp+506,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__ld_data_mem),32);
        bufp->chgCData(oldp+507,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__data_input[0]),8);
        bufp->chgCData(oldp+508,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__data_input[1]),8);
        bufp->chgCData(oldp+509,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__data_input[2]),8);
        bufp->chgCData(oldp+510,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__data_input[3]),8);
        bufp->chgCData(oldp+511,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__temp_ld[0]),8);
        bufp->chgCData(oldp+512,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__temp_ld[1]),8);
        bufp->chgCData(oldp+513,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__temp_ld[2]),8);
        bufp->chgCData(oldp+514,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__temp_ld[3]),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+515,(((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                 ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+516,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                      ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c))));
        bufp->chgBit(oldp+517,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                      & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c))));
        bufp->chgBit(oldp+518,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+519,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+520,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+521,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+522,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+523,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+524,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+525,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+526,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+527,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+528,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+529,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+530,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+531,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+532,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+533,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+534,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+535,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+536,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+537,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+538,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 1U))));
        bufp->chgBit(oldp+539,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 1U))));
        bufp->chgBit(oldp+540,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+541,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+542,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+543,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+544,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+545,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+546,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+547,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+548,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+549,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+550,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+551,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+552,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+553,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+554,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+555,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+556,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+557,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+558,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+559,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+560,((1U & ((~ (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                          >> 2U)) ^ 
                                      (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c 
                                       >> 2U)))));
        bufp->chgBit(oldp+561,((1U & (((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                        | (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                           & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c)) 
                                       | vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 2U))));
        bufp->chgBit(oldp+562,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+563,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+564,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 3U))));
        bufp->chgBit(oldp+565,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 3U))));
        bufp->chgBit(oldp+566,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 4U))));
        bufp->chgBit(oldp+567,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 4U))));
        bufp->chgBit(oldp+568,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 5U))));
        bufp->chgBit(oldp+569,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 5U))));
        bufp->chgBit(oldp+570,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 6U))));
        bufp->chgBit(oldp+571,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 6U))));
        bufp->chgBit(oldp+572,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 7U))));
        bufp->chgBit(oldp+573,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 7U))));
        bufp->chgBit(oldp+574,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 8U))));
        bufp->chgBit(oldp+575,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 8U))));
        bufp->chgBit(oldp+576,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       ^ vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 9U))));
        bufp->chgBit(oldp+577,((1U & ((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__FA_inst__DOT__c) 
                                      >> 9U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+578,((((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                 ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+579,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                      ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c))));
        bufp->chgBit(oldp+580,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                         & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)))));
        bufp->chgBit(oldp+581,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+582,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+583,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+584,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+585,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+586,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+587,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+588,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+589,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+590,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+591,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+592,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+593,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+594,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+595,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+596,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+597,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+598,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+599,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+600,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+601,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 1U))));
        bufp->chgBit(oldp+602,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 1U))));
        bufp->chgBit(oldp+603,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+604,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+605,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+606,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+607,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+608,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+609,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+610,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+611,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+612,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+613,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+614,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+615,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+616,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+617,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+618,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+619,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+620,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+621,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+622,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+623,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 2U))));
        bufp->chgBit(oldp+624,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 2U))));
        bufp->chgBit(oldp+625,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+626,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+627,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 3U))));
        bufp->chgBit(oldp+628,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 3U))));
        bufp->chgBit(oldp+629,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 4U))));
        bufp->chgBit(oldp+630,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 4U))));
        bufp->chgBit(oldp+631,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 5U))));
        bufp->chgBit(oldp+632,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 5U))));
        bufp->chgBit(oldp+633,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 6U))));
        bufp->chgBit(oldp+634,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 6U))));
        bufp->chgBit(oldp+635,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 7U))));
        bufp->chgBit(oldp+636,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 7U))));
        bufp->chgBit(oldp+637,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 8U))));
        bufp->chgBit(oldp+638,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 8U))));
        bufp->chgBit(oldp+639,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                      >> 9U))));
        bufp->chgBit(oldp+640,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                      >> 9U))));
        bufp->chgBit(oldp+641,(((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                 >> 0x1eU)))));
        bufp->chgBit(oldp+642,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0x1fU) | 
                                      ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        >> 0x1eU) & 
                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                        >> 0x1fU))))));
        bufp->chgBit(oldp+643,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0x15U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+644,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0x15U) | 
                                      ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        >> 0x14U) & 
                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                        >> 0x15U))))));
        bufp->chgBit(oldp+645,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0x14U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+646,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0x14U) | 
                                      ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        >> 0x13U) & 
                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                        >> 0x14U))))));
        bufp->chgBit(oldp+647,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0x13U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+648,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0x13U) | 
                                      ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        >> 0x12U) & 
                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                        >> 0x13U))))));
        bufp->chgBit(oldp+649,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0x12U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+650,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0x12U) | 
                                      ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        >> 0x11U) & 
                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                        >> 0x12U))))));
        bufp->chgBit(oldp+651,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0x11U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+652,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0x11U) | 
                                      ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        >> 0x10U) & 
                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                        >> 0x11U))))));
        bufp->chgBit(oldp+653,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0x10U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          >> 0xfU))))));
        bufp->chgBit(oldp+654,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0x10U) | 
                                      ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        >> 0xfU) & 
                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                        >> 0x10U))))));
        bufp->chgBit(oldp+655,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0xfU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+656,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0xfU) | (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 0xeU) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                      >> 0xfU))))));
        bufp->chgBit(oldp+657,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0xeU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+658,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0xeU) | (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 0xdU) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                      >> 0xeU))))));
        bufp->chgBit(oldp+659,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0xdU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+660,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0xdU) | (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 0xcU) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                      >> 0xdU))))));
        bufp->chgBit(oldp+661,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0xcU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+662,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0xcU) | (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 0xbU) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                      >> 0xcU))))));
        bufp->chgBit(oldp+663,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0x1eU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+664,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0x1eU) | 
                                      ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        >> 0x1dU) & 
                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                        >> 0x1eU))))));
        bufp->chgBit(oldp+665,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0xbU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+666,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0xbU) | (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 0xaU) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                      >> 0xbU))))));
        bufp->chgBit(oldp+667,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0xaU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 9U))))));
        bufp->chgBit(oldp+668,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0xaU) | (
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                    >> 9U) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                      >> 0xaU))))));
        bufp->chgBit(oldp+669,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 9U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 8U))))));
        bufp->chgBit(oldp+670,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 9U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 8U) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 9U))))));
        bufp->chgBit(oldp+671,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 8U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 7U))))));
        bufp->chgBit(oldp+672,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 8U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 7U) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 8U))))));
        bufp->chgBit(oldp+673,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 7U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 6U))))));
        bufp->chgBit(oldp+674,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 7U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 6U) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 7U))))));
        bufp->chgBit(oldp+675,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 6U) & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                 >> 5U)))));
        bufp->chgBit(oldp+676,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                       >> 6U) | ((~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                   >> 5U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 6U))))));
        bufp->chgBit(oldp+677,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 5U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 4U))))));
        bufp->chgBit(oldp+678,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 5U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 4U) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 5U))))));
        bufp->chgBit(oldp+679,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 4U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 3U))))));
        bufp->chgBit(oldp+680,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 4U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 3U) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 4U))))));
        bufp->chgBit(oldp+681,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 2U))))));
        bufp->chgBit(oldp+682,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 3U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 2U) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 3U))))));
        bufp->chgBit(oldp+683,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 2U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 1U))))));
        bufp->chgBit(oldp+684,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 2U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 1U) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 2U))))));
        bufp->chgBit(oldp+685,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0x1dU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+686,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0x1dU) | 
                                      ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        >> 0x1cU) & 
                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                        >> 0x1dU))))));
        bufp->chgBit(oldp+687,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 1U) & (~ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b)))));
        bufp->chgBit(oldp+688,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 1U) | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 1U))))));
        bufp->chgBit(oldp+689,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0x1cU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+690,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0x1cU) | 
                                      ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        >> 0x1bU) & 
                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                        >> 0x1cU))))));
        bufp->chgBit(oldp+691,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0x1bU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+692,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0x1bU) | 
                                      ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        >> 0x1aU) & 
                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                        >> 0x1bU))))));
        bufp->chgBit(oldp+693,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0x1aU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+694,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0x1aU) | 
                                      ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        >> 0x19U) & 
                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                        >> 0x1aU))))));
        bufp->chgBit(oldp+695,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0x19U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+696,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0x19U) | 
                                      ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        >> 0x18U) & 
                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                        >> 0x19U))))));
        bufp->chgBit(oldp+697,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0x18U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+698,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0x18U) | 
                                      ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        >> 0x17U) & 
                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                        >> 0x18U))))));
        bufp->chgBit(oldp+699,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0x17U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+700,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0x17U) | 
                                      ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        >> 0x16U) & 
                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                        >> 0x17U))))));
        bufp->chgBit(oldp+701,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                       >> 0x16U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+702,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                       >> 0x16U) | 
                                      ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                        >> 0x15U) & 
                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                        >> 0x16U))))));
        bufp->chgBit(oldp+703,((1U & ((((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                            >> 0x1fU)) 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b) 
                                       | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                           >> 0x1fU) 
                                          & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                >> 0x1fU)))) 
                                      | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                          >> 0x1fU) 
                                         & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b)))));
        bufp->chgBit(oldp+704,(((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                 >> 0x1fU) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                 >> 0x1eU)))));
        bufp->chgBit(oldp+705,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0x1fU) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                         >> 0x1eU) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              >> 0x1eU))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x1fU))))));
        bufp->chgBit(oldp+706,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0x1fU) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                            >> 0x1eU)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           >> 0x1eU)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x1fU))))));
        bufp->chgBit(oldp+707,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0x15U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+708,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0x15U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                         >> 0x14U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              >> 0x14U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+709,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0x15U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                            >> 0x14U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           >> 0x14U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+710,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0x14U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+711,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0x14U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                         >> 0x13U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              >> 0x13U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+712,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0x14U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                            >> 0x13U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           >> 0x13U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+713,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0x13U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+714,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0x13U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                         >> 0x12U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              >> 0x12U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+715,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0x13U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                            >> 0x12U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           >> 0x12U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+716,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0x12U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+717,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0x12U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                         >> 0x11U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              >> 0x11U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+718,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0x12U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                            >> 0x11U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           >> 0x11U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+719,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0x11U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+720,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0x11U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                         >> 0x10U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              >> 0x10U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+721,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0x11U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                            >> 0x10U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           >> 0x10U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+722,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0x10U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                          >> 0xfU))))));
        bufp->chgBit(oldp+723,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0x10U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                         >> 0xfU) & 
                                        (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                            >> 0xfU))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+724,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0x10U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                            >> 0xfU)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           >> 0xfU)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+725,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0xfU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+726,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0xfU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                     >> 0xeU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                        >> 0xeU))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                      >> 0xfU))))));
        bufp->chgBit(oldp+727,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0xfU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                      >> 0xeU)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                       >> 0xeU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                      >> 0xfU))))));
        bufp->chgBit(oldp+728,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0xeU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+729,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0xeU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                     >> 0xdU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                        >> 0xdU))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                      >> 0xeU))))));
        bufp->chgBit(oldp+730,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0xeU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                      >> 0xdU)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                       >> 0xdU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                      >> 0xeU))))));
        bufp->chgBit(oldp+731,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0xdU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+732,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0xdU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                     >> 0xcU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                        >> 0xcU))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                      >> 0xdU))))));
        bufp->chgBit(oldp+733,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0xdU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                      >> 0xcU)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                       >> 0xcU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                      >> 0xdU))))));
        bufp->chgBit(oldp+734,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0xcU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+735,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0xcU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                     >> 0xbU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                        >> 0xbU))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                      >> 0xcU))))));
        bufp->chgBit(oldp+736,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0xcU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                      >> 0xbU)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                       >> 0xbU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                      >> 0xcU))))));
        bufp->chgBit(oldp+737,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0x1eU) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+738,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0x1eU) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                         >> 0x1dU) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              >> 0x1dU))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+739,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0x1eU) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                            >> 0x1dU)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           >> 0x1dU)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+740,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0xbU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+741,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0xbU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                     >> 0xaU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                        >> 0xaU))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                      >> 0xbU))))));
        bufp->chgBit(oldp+742,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0xbU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                      >> 0xaU)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                       >> 0xaU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                      >> 0xbU))))));
        bufp->chgBit(oldp+743,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0xaU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                    >> 9U))))));
        bufp->chgBit(oldp+744,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0xaU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                     >> 9U) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                        >> 9U))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                      >> 0xaU))))));
        bufp->chgBit(oldp+745,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0xaU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                      >> 9U)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                       >> 9U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                      >> 0xaU))))));
        bufp->chgBit(oldp+746,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 9U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 8U))))));
        bufp->chgBit(oldp+747,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 9U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 8U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 8U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 9U))))));
        bufp->chgBit(oldp+748,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 9U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 8U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 8U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 9U))))));
        bufp->chgBit(oldp+749,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 8U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 7U))))));
        bufp->chgBit(oldp+750,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 8U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 7U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 7U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 8U))))));
        bufp->chgBit(oldp+751,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 8U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 7U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 7U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 8U))))));
        bufp->chgBit(oldp+752,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 7U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 6U))))));
        bufp->chgBit(oldp+753,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 7U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 6U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 6U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 7U))))));
        bufp->chgBit(oldp+754,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 7U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 6U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 6U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 7U))))));
        bufp->chgBit(oldp+755,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 6U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 5U))))));
        bufp->chgBit(oldp+756,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 6U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 5U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 6U))))));
        bufp->chgBit(oldp+757,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 6U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 5U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 5U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 6U))))));
        bufp->chgBit(oldp+758,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 5U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 4U))))));
        bufp->chgBit(oldp+759,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 5U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 4U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 4U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 5U))))));
        bufp->chgBit(oldp+760,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 5U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 4U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 4U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 5U))))));
        bufp->chgBit(oldp+761,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 4U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 3U))))));
        bufp->chgBit(oldp+762,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 4U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 3U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 3U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 4U))))));
        bufp->chgBit(oldp+763,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 4U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 3U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 3U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 4U))))));
        bufp->chgBit(oldp+764,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 3U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 2U))))));
        bufp->chgBit(oldp+765,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 3U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 2U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 2U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 3U))))));
        bufp->chgBit(oldp+766,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 3U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 2U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 2U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 3U))))));
        bufp->chgBit(oldp+767,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 2U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                  >> 1U))))));
        bufp->chgBit(oldp+768,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 2U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                   >> 1U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                      >> 1U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 2U))))));
        bufp->chgBit(oldp+769,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 2U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                    >> 1U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                     >> 1U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 2U))))));
        bufp->chgBit(oldp+770,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0x1dU) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+771,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0x1dU) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                         >> 0x1cU) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              >> 0x1cU))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+772,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0x1dU) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                            >> 0x1cU)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           >> 0x1cU)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+773,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b))))));
        bufp->chgBit(oldp+774,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 1U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  & (~ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 1U))))));
        bufp->chgBit(oldp+775,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 1U) | (((~ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a) 
                                                  & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 1U))))));
        bufp->chgBit(oldp+776,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0x1cU) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+777,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0x1cU) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                         >> 0x1bU) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              >> 0x1bU))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+778,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0x1cU) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                            >> 0x1bU)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           >> 0x1bU)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+779,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0x1bU) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+780,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0x1bU) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                         >> 0x1aU) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              >> 0x1aU))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+781,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0x1bU) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                            >> 0x1aU)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           >> 0x1aU)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+782,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0x1aU) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+783,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0x1aU) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                         >> 0x19U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              >> 0x19U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+784,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0x1aU) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                            >> 0x19U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           >> 0x19U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+785,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0x19U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+786,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0x19U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                         >> 0x18U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              >> 0x18U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+787,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0x19U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                            >> 0x18U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           >> 0x18U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+788,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0x18U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+789,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0x18U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                         >> 0x17U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              >> 0x17U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+790,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0x18U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                            >> 0x17U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           >> 0x17U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+791,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0x17U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+792,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0x17U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                         >> 0x16U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              >> 0x16U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+793,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0x17U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                            >> 0x16U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           >> 0x16U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+794,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                       >> 0x16U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+795,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                       >> 0x16U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                         >> 0x15U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                              >> 0x15U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+796,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                       >> 0x16U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                            >> 0x15U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                           >> 0x15U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+797,((((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                 ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+798,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                      ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c))));
        bufp->chgBit(oldp+799,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                         & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)))));
        bufp->chgBit(oldp+800,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+801,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+802,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+803,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+804,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+805,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+806,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+807,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+808,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+809,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+810,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+811,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+812,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+813,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+814,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+815,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+816,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+817,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+818,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+819,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+820,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 1U))));
        bufp->chgBit(oldp+821,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 1U))));
        bufp->chgBit(oldp+822,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+823,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+824,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+825,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+826,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+827,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+828,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+829,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+830,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+831,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+832,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+833,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+834,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+835,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+836,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+837,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+838,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+839,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+840,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+841,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+842,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 2U))));
        bufp->chgBit(oldp+843,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 2U))));
        bufp->chgBit(oldp+844,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+845,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+846,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 3U))));
        bufp->chgBit(oldp+847,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 3U))));
        bufp->chgBit(oldp+848,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 4U))));
        bufp->chgBit(oldp+849,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 4U))));
        bufp->chgBit(oldp+850,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 5U))));
        bufp->chgBit(oldp+851,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 5U))));
        bufp->chgBit(oldp+852,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 6U))));
        bufp->chgBit(oldp+853,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 6U))));
        bufp->chgBit(oldp+854,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 7U))));
        bufp->chgBit(oldp+855,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 7U))));
        bufp->chgBit(oldp+856,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 8U))));
        bufp->chgBit(oldp+857,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 8U))));
        bufp->chgBit(oldp+858,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                      >> 9U))));
        bufp->chgBit(oldp+859,((1U & (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                           | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                       | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                          & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                      >> 9U))));
        bufp->chgBit(oldp+860,((IData)(((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                         >> 0x1eU) 
                                        & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                               ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                              >> 0x1dU))))));
        bufp->chgBit(oldp+861,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0x1eU) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x1dU) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x1dU))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+862,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0x1eU) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x1dU)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x1dU)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+863,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0x14U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+864,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0x14U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x13U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x13U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+865,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0x14U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x13U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x13U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+866,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0x13U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+867,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0x13U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x12U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x12U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+868,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0x13U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x12U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x12U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+869,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0x12U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+870,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0x12U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x11U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x11U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+871,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0x12U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x11U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x11U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+872,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0x11U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+873,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0x11U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x10U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x10U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+874,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0x11U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x10U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x10U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+875,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0x10U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0xfU))))));
        bufp->chgBit(oldp+876,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0x10U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0xfU) & 
                                        (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                            >> 0xfU))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+877,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0x10U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0xfU)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0xfU)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+878,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0xfU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+879,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0xfU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0xeU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                        >> 0xeU))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                      >> 0xfU))))));
        bufp->chgBit(oldp+880,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0xfU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                      >> 0xeU)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0xeU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                      >> 0xfU))))));
        bufp->chgBit(oldp+881,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0xeU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+882,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0xeU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0xdU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                        >> 0xdU))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                      >> 0xeU))))));
        bufp->chgBit(oldp+883,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0xeU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                      >> 0xdU)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0xdU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                      >> 0xeU))))));
        bufp->chgBit(oldp+884,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0xdU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+885,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0xdU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0xcU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                        >> 0xcU))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                      >> 0xdU))))));
        bufp->chgBit(oldp+886,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0xdU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                      >> 0xcU)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0xcU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                      >> 0xdU))))));
        bufp->chgBit(oldp+887,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0xcU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+888,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0xcU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0xbU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                        >> 0xbU))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                      >> 0xcU))))));
        bufp->chgBit(oldp+889,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0xcU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                      >> 0xbU)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0xbU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                      >> 0xcU))))));
        bufp->chgBit(oldp+890,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0xbU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+891,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0xbU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0xaU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                        >> 0xaU))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                      >> 0xbU))))));
        bufp->chgBit(oldp+892,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0xbU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                      >> 0xaU)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0xaU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                      >> 0xbU))))));
        bufp->chgBit(oldp+893,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0x1dU) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+894,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0x1dU) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x1cU) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x1cU))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+895,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0x1dU) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x1cU)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x1cU)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+896,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0xaU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                    >> 9U))))));
        bufp->chgBit(oldp+897,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0xaU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 9U) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                        >> 9U))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                      >> 0xaU))))));
        bufp->chgBit(oldp+898,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0xaU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                      >> 9U)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 9U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                      >> 0xaU))))));
        bufp->chgBit(oldp+899,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 9U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 8U))))));
        bufp->chgBit(oldp+900,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 9U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 8U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 8U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 9U))))));
        bufp->chgBit(oldp+901,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 9U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 8U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 8U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 9U))))));
        bufp->chgBit(oldp+902,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 8U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 7U))))));
        bufp->chgBit(oldp+903,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 8U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 7U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 7U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 8U))))));
        bufp->chgBit(oldp+904,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 8U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 7U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 7U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 8U))))));
        bufp->chgBit(oldp+905,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 7U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 6U))))));
        bufp->chgBit(oldp+906,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 7U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 6U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 6U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 7U))))));
        bufp->chgBit(oldp+907,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 7U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 6U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 6U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 7U))))));
        bufp->chgBit(oldp+908,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 6U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 5U))))));
        bufp->chgBit(oldp+909,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 6U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 5U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 6U))))));
        bufp->chgBit(oldp+910,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 6U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 5U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 5U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 6U))))));
        bufp->chgBit(oldp+911,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 5U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 4U))))));
        bufp->chgBit(oldp+912,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 5U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 4U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 4U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 5U))))));
        bufp->chgBit(oldp+913,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 5U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 4U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 4U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 5U))))));
        bufp->chgBit(oldp+914,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 4U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 3U))))));
        bufp->chgBit(oldp+915,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 4U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 3U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 3U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 4U))))));
        bufp->chgBit(oldp+916,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 4U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 3U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 3U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 4U))))));
        bufp->chgBit(oldp+917,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 3U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 2U))))));
        bufp->chgBit(oldp+918,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 3U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 2U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 2U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 3U))))));
        bufp->chgBit(oldp+919,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 3U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 2U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 2U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 3U))))));
        bufp->chgBit(oldp+920,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 2U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 1U))))));
        bufp->chgBit(oldp+921,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 2U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 1U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 1U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 2U))))));
        bufp->chgBit(oldp+922,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 2U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 1U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 1U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 2U))))));
        bufp->chgBit(oldp+923,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b))))));
        bufp->chgBit(oldp+924,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 1U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  & (~ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 1U))))));
        bufp->chgBit(oldp+925,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 1U) | (((~ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a) 
                                                  & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 1U))))));
        bufp->chgBit(oldp+926,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0x1cU) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+927,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0x1cU) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x1bU) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x1bU))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+928,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0x1cU) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x1bU)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x1bU)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+929,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0x1bU) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+930,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0x1bU) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x1aU) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x1aU))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+931,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0x1bU) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x1aU)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x1aU)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+932,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0x1aU) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+933,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0x1aU) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x19U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x19U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+934,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0x1aU) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x19U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x19U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+935,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0x19U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+936,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0x19U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x18U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x18U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+937,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0x19U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x18U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x18U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+938,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0x18U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+939,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0x18U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x17U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x17U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+940,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0x18U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x17U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x17U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+941,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0x17U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+942,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0x17U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x16U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x16U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+943,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0x17U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x16U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x16U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+944,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0x16U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+945,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0x16U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x15U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x15U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+946,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0x16U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x15U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x15U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+947,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                       >> 0x15U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+948,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                       >> 0x15U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x14U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x14U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+949,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                       >> 0x15U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x14U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x14U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+950,(((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                 >> 0x1fU) & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                 >> 0x1eU)))));
        bufp->chgBit(oldp+951,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                       >> 0x1fU) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x1eU) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x1eU))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                          >> 0x1fU))))));
        bufp->chgBit(oldp+952,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                       >> 0x1fU) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x1eU)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x1eU)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                          >> 0x1fU))))));
        bufp->chgBit(oldp+953,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                       >> 0x15U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+954,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                       >> 0x15U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x14U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x14U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+955,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                       >> 0x15U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x14U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x14U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+956,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                       >> 0x14U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+957,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                       >> 0x14U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x13U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x13U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+958,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                       >> 0x14U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x13U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x13U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+959,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                       >> 0x13U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+960,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                       >> 0x13U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x12U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x12U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+961,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                       >> 0x13U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x12U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x12U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+962,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                       >> 0x12U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+963,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                       >> 0x12U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x11U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x11U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+964,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                       >> 0x12U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x11U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x11U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+965,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                       >> 0x11U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+966,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                       >> 0x11U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x10U) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x10U))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+967,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                       >> 0x11U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x10U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x10U)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+968,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                       >> 0x10U) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0xfU))))));
        bufp->chgBit(oldp+969,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                       >> 0x10U) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0xfU) & 
                                        (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                            >> 0xfU))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+970,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                       >> 0x10U) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0xfU)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0xfU)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+971,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                       >> 0xfU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+972,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                       >> 0xfU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0xeU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                        >> 0xeU))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                      >> 0xfU))))));
        bufp->chgBit(oldp+973,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                       >> 0xfU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                      >> 0xeU)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0xeU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                      >> 0xfU))))));
        bufp->chgBit(oldp+974,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                       >> 0xeU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+975,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                       >> 0xeU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0xdU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                        >> 0xdU))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                      >> 0xeU))))));
        bufp->chgBit(oldp+976,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                       >> 0xeU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                      >> 0xdU)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0xdU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                      >> 0xeU))))));
        bufp->chgBit(oldp+977,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                       >> 0xdU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+978,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                       >> 0xdU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0xcU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                        >> 0xcU))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                      >> 0xdU))))));
        bufp->chgBit(oldp+979,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                       >> 0xdU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                      >> 0xcU)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0xcU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                      >> 0xdU))))));
        bufp->chgBit(oldp+980,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                       >> 0xcU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+981,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                       >> 0xcU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0xbU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                        >> 0xbU))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                      >> 0xcU))))));
        bufp->chgBit(oldp+982,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                       >> 0xcU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                      >> 0xbU)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0xbU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                      >> 0xcU))))));
        bufp->chgBit(oldp+983,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                       >> 0x1eU) & 
                                      (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+984,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                       >> 0x1eU) | 
                                      (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                         >> 0x1dU) 
                                        & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                              >> 0x1dU))) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+985,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                       >> 0x1eU) | 
                                      (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            >> 0x1dU)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x1dU)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+986,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                       >> 0xbU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+987,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                       >> 0xbU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 0xaU) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                        >> 0xaU))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                      >> 0xbU))))));
        bufp->chgBit(oldp+988,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                       >> 0xbU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                      >> 0xaU)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 0xaU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                      >> 0xbU))))));
        bufp->chgBit(oldp+989,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                       >> 0xaU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                    >> 9U))))));
        bufp->chgBit(oldp+990,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                       >> 0xaU) | (
                                                   ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 9U) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                        >> 9U))) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                      >> 0xaU))))));
        bufp->chgBit(oldp+991,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                       >> 0xaU) | (
                                                   ((~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                      >> 9U)) 
                                                    & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 9U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                      >> 0xaU))))));
        bufp->chgBit(oldp+992,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                       >> 9U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 8U))))));
        bufp->chgBit(oldp+993,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                       >> 9U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 8U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 8U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 9U))))));
        bufp->chgBit(oldp+994,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                       >> 9U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 8U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 8U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 9U))))));
        bufp->chgBit(oldp+995,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                       >> 8U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 7U))))));
        bufp->chgBit(oldp+996,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                       >> 8U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 7U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 7U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 8U))))));
        bufp->chgBit(oldp+997,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                       >> 8U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 7U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                     >> 7U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 8U))))));
        bufp->chgBit(oldp+998,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                       >> 7U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  >> 6U))))));
        bufp->chgBit(oldp+999,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                       >> 7U) | (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   >> 6U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 6U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 7U))))));
        bufp->chgBit(oldp+1000,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                        >> 7U) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 6U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 6U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 7U))))));
        bufp->chgBit(oldp+1001,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                        >> 6U) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 5U))))));
        bufp->chgBit(oldp+1002,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                        >> 6U) | ((
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 5U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 5U))) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 6U))))));
        bufp->chgBit(oldp+1003,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                        >> 6U) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 5U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 5U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 6U))))));
        bufp->chgBit(oldp+1004,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                        >> 5U) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 4U))))));
        bufp->chgBit(oldp+1005,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                        >> 5U) | ((
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 4U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 4U))) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 5U))))));
        bufp->chgBit(oldp+1006,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                        >> 5U) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 4U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 4U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 5U))))));
        bufp->chgBit(oldp+1007,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                        >> 4U) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 3U))))));
        bufp->chgBit(oldp+1008,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                        >> 4U) | ((
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 3U))) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 4U))))));
        bufp->chgBit(oldp+1009,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                        >> 4U) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 3U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 3U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 4U))))));
        bufp->chgBit(oldp+1010,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                        >> 3U) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 2U))))));
        bufp->chgBit(oldp+1011,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                        >> 3U) | ((
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 2U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 2U))) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 3U))))));
        bufp->chgBit(oldp+1012,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                        >> 3U) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 2U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 2U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 3U))))));
        bufp->chgBit(oldp+1013,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                        >> 2U) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                   >> 1U))))));
        bufp->chgBit(oldp+1014,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                        >> 2U) | ((
                                                   (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                    >> 1U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                       >> 1U))) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 2U))))));
        bufp->chgBit(oldp+1015,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                        >> 2U) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                     >> 1U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                      >> 1U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 2U))))));
        bufp->chgBit(oldp+1016,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                        >> 0x1dU) & 
                                       (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                           >> 0x1cU))))));
        bufp->chgBit(oldp+1017,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                        >> 0x1dU) | 
                                       (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                          >> 0x1cU) 
                                         & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                               >> 0x1cU))) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                           >> 0x1dU))))));
        bufp->chgBit(oldp+1018,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                        >> 0x1dU) | 
                                       (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                             >> 0x1cU)) 
                                         & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                            >> 0x1cU)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                           >> 0x1dU))))));
        bufp->chgBit(oldp+1019,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b))))));
        bufp->chgBit(oldp+1020,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                        >> 1U) | ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                                   & (~ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b)) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 1U))))));
        bufp->chgBit(oldp+1021,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                        >> 1U) | ((
                                                   (~ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a) 
                                                   & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                                  & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 1U))))));
        bufp->chgBit(oldp+1022,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                        >> 0x1cU) & 
                                       (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                           >> 0x1bU))))));
        bufp->chgBit(oldp+1023,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                        >> 0x1cU) | 
                                       (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                          >> 0x1bU) 
                                         & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                               >> 0x1bU))) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                           >> 0x1cU))))));
        bufp->chgBit(oldp+1024,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                        >> 0x1cU) | 
                                       (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                             >> 0x1bU)) 
                                         & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                            >> 0x1bU)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                           >> 0x1cU))))));
        bufp->chgBit(oldp+1025,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                        >> 0x1bU) & 
                                       (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                           >> 0x1aU))))));
        bufp->chgBit(oldp+1026,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                        >> 0x1bU) | 
                                       (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                          >> 0x1aU) 
                                         & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                               >> 0x1aU))) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                           >> 0x1bU))))));
        bufp->chgBit(oldp+1027,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                        >> 0x1bU) | 
                                       (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                             >> 0x1aU)) 
                                         & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                            >> 0x1aU)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                           >> 0x1bU))))));
        bufp->chgBit(oldp+1028,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                        >> 0x1aU) & 
                                       (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                           >> 0x19U))))));
        bufp->chgBit(oldp+1029,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                        >> 0x1aU) | 
                                       (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                          >> 0x19U) 
                                         & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                               >> 0x19U))) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                           >> 0x1aU))))));
        bufp->chgBit(oldp+1030,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                        >> 0x1aU) | 
                                       (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                             >> 0x19U)) 
                                         & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                            >> 0x19U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                           >> 0x1aU))))));
        bufp->chgBit(oldp+1031,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                        >> 0x19U) & 
                                       (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                           >> 0x18U))))));
        bufp->chgBit(oldp+1032,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                        >> 0x19U) | 
                                       (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                          >> 0x18U) 
                                         & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                               >> 0x18U))) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                           >> 0x19U))))));
        bufp->chgBit(oldp+1033,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                        >> 0x19U) | 
                                       (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                             >> 0x18U)) 
                                         & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                            >> 0x18U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                           >> 0x19U))))));
        bufp->chgBit(oldp+1034,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                        >> 0x18U) & 
                                       (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                           >> 0x17U))))));
        bufp->chgBit(oldp+1035,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                        >> 0x18U) | 
                                       (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                          >> 0x17U) 
                                         & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                               >> 0x17U))) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                           >> 0x18U))))));
        bufp->chgBit(oldp+1036,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                        >> 0x18U) | 
                                       (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                             >> 0x17U)) 
                                         & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                            >> 0x17U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                           >> 0x18U))))));
        bufp->chgBit(oldp+1037,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                        >> 0x17U) & 
                                       (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                           >> 0x16U))))));
        bufp->chgBit(oldp+1038,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                        >> 0x17U) | 
                                       (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                          >> 0x16U) 
                                         & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                               >> 0x16U))) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                           >> 0x17U))))));
        bufp->chgBit(oldp+1039,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                        >> 0x17U) | 
                                       (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                             >> 0x16U)) 
                                         & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                            >> 0x16U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                           >> 0x17U))))));
        bufp->chgBit(oldp+1040,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                        >> 0x16U) & 
                                       (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                            ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                           >> 0x15U))))));
        bufp->chgBit(oldp+1041,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                        >> 0x16U) | 
                                       (((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                          >> 0x15U) 
                                         & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                               >> 0x15U))) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                           >> 0x16U))))));
        bufp->chgBit(oldp+1042,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                        >> 0x16U) | 
                                       (((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                             >> 0x15U)) 
                                         & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                            >> 0x15U)) 
                                        & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                           >> 0x16U))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+1043,(vlSelf->top__DOT__dut__DOT__MEM_pc_br));
        bufp->chgBit(oldp+1044,((1U & (~ (IData)(vlSelf->top__DOT__dut__DOT__MEM_pc_br)))));
        bufp->chgIData(oldp+1045,(vlSelf->top__DOT__dut__DOT__ID_inst),32);
        bufp->chgIData(oldp+1046,(vlSelf->top__DOT__dut__DOT__ID_pc),32);
        bufp->chgIData(oldp+1047,(vlSelf->top__DOT__dut__DOT__ID_pc_four),32);
        bufp->chgIData(oldp+1048,(vlSelf->top__DOT__dut__DOT__EX_rs1_data),32);
        bufp->chgIData(oldp+1049,(vlSelf->top__DOT__dut__DOT__EX_rs2_data),32);
        bufp->chgIData(oldp+1050,(vlSelf->top__DOT__dut__DOT__EX_pc),32);
        bufp->chgIData(oldp+1051,(vlSelf->top__DOT__dut__DOT__EX_pc_four),32);
        bufp->chgIData(oldp+1052,(vlSelf->top__DOT__dut__DOT__EX_imm_value),32);
        bufp->chgCData(oldp+1053,(vlSelf->top__DOT__dut__DOT__EX_rs1_addr),5);
        bufp->chgCData(oldp+1054,(vlSelf->top__DOT__dut__DOT__EX_rs2_addr),5);
        bufp->chgCData(oldp+1055,(vlSelf->top__DOT__dut__DOT__EX_rd_addr),5);
        bufp->chgCData(oldp+1056,((0x1fU & (vlSelf->top__DOT__dut__DOT__ID_inst 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1057,((0x1fU & (vlSelf->top__DOT__dut__DOT__ID_inst 
                                            >> 0x14U))),5);
        bufp->chgBit(oldp+1058,(vlSelf->top__DOT__dut__DOT__EX_rd_wren));
        bufp->chgSData(oldp+1059,(vlSelf->top__DOT__dut__DOT__EX_ex_en),16);
        bufp->chgSData(oldp+1060,(vlSelf->top__DOT__dut__DOT__EX_mem_en),9);
        bufp->chgCData(oldp+1061,(vlSelf->top__DOT__dut__DOT__EX_wb_en),2);
        bufp->chgBit(oldp+1062,(vlSelf->top__DOT__dut__DOT__EX_rd_rs2_en));
        bufp->chgBit(oldp+1063,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__rd_rs2_en));
        bufp->chgBit(oldp+1064,(vlSelf->top__DOT__dut__DOT__EX_ld_en));
        bufp->chgIData(oldp+1065,(vlSelf->top__DOT__dut__DOT__MEM_rs2_data),32);
        bufp->chgIData(oldp+1066,(vlSelf->top__DOT__dut__DOT__MEM_pc_four),32);
        bufp->chgCData(oldp+1067,(vlSelf->top__DOT__dut__DOT__MEM_wb_en),2);
        bufp->chgBit(oldp+1068,(vlSelf->top__DOT__dut__DOT__MEM_ld_en));
        bufp->chgIData(oldp+1069,(vlSelf->top__DOT__dut__DOT__WB_alu_data),32);
        bufp->chgIData(oldp+1070,(vlSelf->top__DOT__dut__DOT__WB_ld_data),32);
        bufp->chgIData(oldp+1071,(vlSelf->top__DOT__dut__DOT__WB_pc_four),32);
        bufp->chgCData(oldp+1072,(vlSelf->top__DOT__dut__DOT__WB_wb_en),2);
        bufp->chgBit(oldp+1073,(vlSelf->top__DOT__dut__DOT__WB_ld_en));
        bufp->chgBit(oldp+1074,(vlSelf->top__DOT__dut__DOT__WB_mem_wren));
        bufp->chgCData(oldp+1075,((0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                           >> 5U))),4);
        bufp->chgBit(oldp+1076,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                       >> 1U))));
        bufp->chgCData(oldp+1077,((3U & ((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                         >> 2U))),2);
        bufp->chgBit(oldp+1078,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                       >> 4U))));
        bufp->chgCData(oldp+1079,((0x1fU & (vlSelf->top__DOT__dut__DOT__ID_inst 
                                            >> 7U))),5);
        bufp->chgIData(oldp+1080,((vlSelf->top__DOT__dut__DOT__ID_inst 
                                   >> 7U)),25);
        bufp->chgIData(oldp+1081,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_value),32);
        bufp->chgSData(oldp+1082,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i),11);
        bufp->chgCData(oldp+1083,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__immsel),5);
        bufp->chgBit(oldp+1084,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__rd_wren));
        bufp->chgSData(oldp+1085,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ex_en),16);
        bufp->chgSData(oldp+1086,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__mem_en),9);
        bufp->chgCData(oldp+1087,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__wb_en),2);
        bufp->chgBit(oldp+1088,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__l_type));
        bufp->chgBit(oldp+1089,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__pc_sel));
        bufp->chgBit(oldp+1090,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__br_unsigned));
        bufp->chgCData(oldp+1091,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__op_a_sel),2);
        bufp->chgBit(oldp+1092,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__op_b_sel));
        bufp->chgCData(oldp+1093,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__alu_op),4);
        bufp->chgBit(oldp+1094,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__mem_wren));
        bufp->chgBit(oldp+1095,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__sb_en));
        bufp->chgBit(oldp+1096,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__sh_en));
        bufp->chgBit(oldp+1097,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__sw_en));
        bufp->chgBit(oldp+1098,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__lb_en));
        bufp->chgBit(oldp+1099,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__lh_en));
        bufp->chgBit(oldp+1100,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__lbu_en));
        bufp->chgBit(oldp+1101,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__lhu_en));
        bufp->chgBit(oldp+1102,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT____Vcellout__ctr_inst__lw_en));
        bufp->chgBit(oldp+1103,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__jalr_en) 
                                 | (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__jal_en))));
        bufp->chgCData(oldp+1104,((((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__bgeu_en) 
                                    << 5U) | (((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__bltu_en) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__bge_en) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__blt_en) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__bne_en) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__beq_en))))))),6);
        bufp->chgCData(oldp+1105,((0x1fU & ((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i) 
                                            >> 2U))),5);
        bufp->chgCData(oldp+1106,((7U & ((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i) 
                                         >> 7U))),3);
        bufp->chgBit(oldp+1107,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1108,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__rv32i));
        bufp->chgBit(oldp+1109,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type));
        bufp->chgBit(oldp+1110,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type));
        bufp->chgBit(oldp+1111,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__s_type));
        bufp->chgBit(oldp+1112,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__b_type));
        bufp->chgBit(oldp+1113,((((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                                  & (~ (IData)((0U 
                                                != 
                                                (0x380U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))) 
                                 & (~ ((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i) 
                                       >> 0xaU)))));
        bufp->chgBit(oldp+1114,((((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                                  & (~ (IData)((0U 
                                                != 
                                                (0x380U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))) 
                                 & ((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+1115,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                                 & (IData)((0x80U == 
                                            (0x380U 
                                             & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
        bufp->chgBit(oldp+1116,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                                 & (IData)((0x100U 
                                            == (0x380U 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
        bufp->chgBit(oldp+1117,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                                 & (IData)((0x180U 
                                            == (0x380U 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
        bufp->chgBit(oldp+1118,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                                 & (IData)((0x200U 
                                            == (0x380U 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
        bufp->chgBit(oldp+1119,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                                 & (0x280U == (0x780U 
                                               & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i))))));
        bufp->chgBit(oldp+1120,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                                 & (0x680U == (0x780U 
                                               & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i))))));
        bufp->chgBit(oldp+1121,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                                 & (IData)((0x300U 
                                            == (0x380U 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
        bufp->chgBit(oldp+1122,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__r_type) 
                                 & (IData)((0x380U 
                                            == (0x380U 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
        bufp->chgBit(oldp+1123,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                                 & (~ (IData)((0U != 
                                               (0x380U 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i))))))));
        bufp->chgBit(oldp+1124,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                                 & (IData)((0x80U == 
                                            (0x380U 
                                             & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
        bufp->chgBit(oldp+1125,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                                 & (IData)((0x100U 
                                            == (0x380U 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
        bufp->chgBit(oldp+1126,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                                 & (IData)((0x180U 
                                            == (0x380U 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
        bufp->chgBit(oldp+1127,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                                 & (IData)((0x200U 
                                            == (0x380U 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
        bufp->chgBit(oldp+1128,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                                 & (0x280U == (0x780U 
                                               & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i))))));
        bufp->chgBit(oldp+1129,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                                 & (0x680U == (0x780U 
                                               & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i))))));
        bufp->chgBit(oldp+1130,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                                 & (IData)((0x300U 
                                            == (0x380U 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
        bufp->chgBit(oldp+1131,(((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__i_type) 
                                 & (IData)((0x380U 
                                            == (0x380U 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__inst_i)))))));
        bufp->chgBit(oldp+1132,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__beq_en));
        bufp->chgBit(oldp+1133,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__bne_en));
        bufp->chgBit(oldp+1134,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__blt_en));
        bufp->chgBit(oldp+1135,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__bge_en));
        bufp->chgBit(oldp+1136,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__bltu_en));
        bufp->chgBit(oldp+1137,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__bgeu_en));
        bufp->chgBit(oldp+1138,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__jal_en));
        bufp->chgBit(oldp+1139,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__jalr_en));
        bufp->chgBit(oldp+1140,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__lui_en));
        bufp->chgBit(oldp+1141,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__ctr_inst__DOT__auipc_en));
        bufp->chgBit(oldp+1142,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__w1));
        bufp->chgSData(oldp+1143,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__inst_i),10);
        bufp->chgBit(oldp+1144,((vlSelf->top__DOT__dut__DOT__ID_inst 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1145,((1U & (vlSelf->top__DOT__dut__DOT__ID_inst 
                                       >> 7U))));
        bufp->chgBit(oldp+1146,((1U & (vlSelf->top__DOT__dut__DOT__ID_inst 
                                       >> 0x14U))));
        bufp->chgCData(oldp+1147,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT____Vcellout__Comp2__imm),5);
        bufp->chgBit(oldp+1148,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__inst_i) 
                                       >> 5U))));
        bufp->chgBit(oldp+1149,((1U & (IData)(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__inst_i))));
        bufp->chgBit(oldp+1150,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__Comp2__DOT____Vcellout__IMM0__imm));
        bufp->chgIData(oldp+1151,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1152,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+1153,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__unnamedblk3__DOT__j),32);
        bufp->chgIData(oldp+1154,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__imm_inst__DOT__unnamedblk4__DOT__k),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+1155,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[0]),32);
        bufp->chgIData(oldp+1156,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[1]),32);
        bufp->chgIData(oldp+1157,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[2]),32);
        bufp->chgIData(oldp+1158,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[3]),32);
        bufp->chgIData(oldp+1159,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[4]),32);
        bufp->chgIData(oldp+1160,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[5]),32);
        bufp->chgIData(oldp+1161,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[6]),32);
        bufp->chgIData(oldp+1162,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[7]),32);
        bufp->chgIData(oldp+1163,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[8]),32);
        bufp->chgIData(oldp+1164,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[9]),32);
        bufp->chgIData(oldp+1165,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[10]),32);
        bufp->chgIData(oldp+1166,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[11]),32);
        bufp->chgIData(oldp+1167,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[12]),32);
        bufp->chgIData(oldp+1168,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[13]),32);
        bufp->chgIData(oldp+1169,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[14]),32);
        bufp->chgIData(oldp+1170,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[15]),32);
        bufp->chgIData(oldp+1171,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[16]),32);
        bufp->chgIData(oldp+1172,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[17]),32);
        bufp->chgIData(oldp+1173,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[18]),32);
        bufp->chgIData(oldp+1174,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[19]),32);
        bufp->chgIData(oldp+1175,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[20]),32);
        bufp->chgIData(oldp+1176,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[21]),32);
        bufp->chgIData(oldp+1177,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[22]),32);
        bufp->chgIData(oldp+1178,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[23]),32);
        bufp->chgIData(oldp+1179,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[24]),32);
        bufp->chgIData(oldp+1180,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[25]),32);
        bufp->chgIData(oldp+1181,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[26]),32);
        bufp->chgIData(oldp+1182,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[27]),32);
        bufp->chgIData(oldp+1183,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[28]),32);
        bufp->chgIData(oldp+1184,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[29]),32);
        bufp->chgIData(oldp+1185,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[30]),32);
        bufp->chgIData(oldp+1186,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem[31]),32);
        bufp->chgIData(oldp+1187,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+1188,(vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc),32);
        bufp->chgBit(oldp+1189,((vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1190,((1U & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc)));
        bufp->chgBit(oldp+1191,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1192,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1193,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1194,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1195,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1196,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1197,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1198,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1199,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1200,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1201,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 1U))));
        bufp->chgBit(oldp+1202,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1203,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1204,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1205,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1206,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1207,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1208,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1209,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1210,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1211,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1212,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 2U))));
        bufp->chgBit(oldp+1213,((1U & (~ (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                          >> 2U)))));
        bufp->chgBit(oldp+1214,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1215,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 3U))));
        bufp->chgBit(oldp+1216,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 4U))));
        bufp->chgBit(oldp+1217,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 5U))));
        bufp->chgBit(oldp+1218,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 6U))));
        bufp->chgBit(oldp+1219,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 7U))));
        bufp->chgBit(oldp+1220,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 8U))));
        bufp->chgBit(oldp+1221,((1U & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                       >> 9U))));
        bufp->chgCData(oldp+1222,((3U & vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc)),2);
        bufp->chgSData(oldp+1223,((0x7ffU & (vlSelf->top__DOT__dut__DOT__IF_instance__DOT__pc 
                                             >> 2U))),11);
        bufp->chgIData(oldp+1224,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__unnamedblk1__DOT__h),32);
        bufp->chgIData(oldp+1225,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+1226,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__unnamedblk2__DOT__k),32);
        bufp->chgIData(oldp+1227,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__unnamedblk3__DOT__k),32);
        bufp->chgIData(oldp+1228,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__unnamedblk4__DOT__k),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+1229,(vlSelf->top__DOT__dut__DOT__IF_stall_en));
        bufp->chgIData(oldp+1230,(vlSelf->top__DOT__dut__DOT__MEM_alu_data),32);
        bufp->chgBit(oldp+1231,(vlSelf->top__DOT__dut__DOT__ID_stall_en));
        bufp->chgBit(oldp+1232,(vlSelf->top__DOT__dut__DOT__EX_stall_en));
        bufp->chgBit(oldp+1233,(vlSelf->top__DOT__dut__DOT__EX_rst_n));
        bufp->chgCData(oldp+1234,(vlSelf->top__DOT__dut__DOT__MEM_rd_addr),5);
        bufp->chgBit(oldp+1235,(vlSelf->top__DOT__dut__DOT__MEM_rd_wren));
        bufp->chgSData(oldp+1236,(vlSelf->top__DOT__dut__DOT__MEM_mem_en),9);
        bufp->chgCData(oldp+1237,(vlSelf->top__DOT__dut__DOT__WB_rd_addr),5);
        bufp->chgBit(oldp+1238,(vlSelf->top__DOT__dut__DOT__WB_rd_wren));
        bufp->chgIData(oldp+1239,(vlSelf->top__DOT__dut__DOT__wb_data),32);
        bufp->chgCData(oldp+1240,(vlSelf->top__DOT__dut__DOT__forwardA_en),2);
        bufp->chgCData(oldp+1241,(vlSelf->top__DOT__dut__DOT__forwardB_en),2);
        bufp->chgBit(oldp+1242,(vlSelf->top__DOT__dut__DOT__pc_en));
        bufp->chgBit(oldp+1243,(vlSelf->top__DOT__dut__DOT__sel_rs1_wb));
        bufp->chgBit(oldp+1244,(vlSelf->top__DOT__dut__DOT__sel_rs2_wb));
        bufp->chgIData(oldp+1245,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a),32);
        bufp->chgIData(oldp+1246,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b),32);
        bufp->chgIData(oldp+1247,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b),32);
        bufp->chgIData(oldp+1248,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a),32);
        bufp->chgIData(oldp+1249,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                   ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b)),32);
        bufp->chgIData(oldp+1250,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                   & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b)),32);
        bufp->chgIData(oldp+1251,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                   | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b)),32);
        bufp->chgBit(oldp+1252,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1253,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1254,(((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1255,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a)));
        bufp->chgBit(oldp+1256,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b)));
        bufp->chgBit(oldp+1257,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b))));
        bufp->chgBit(oldp+1258,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b))));
        bufp->chgBit(oldp+1259,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1260,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1261,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1262,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1263,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1264,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1265,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1266,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1267,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1268,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1269,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1270,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1271,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1272,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1273,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1274,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1275,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1276,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1277,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1278,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1279,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1280,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1281,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1282,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1283,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1284,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1285,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1286,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1287,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1288,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1289,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1290,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1291,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1292,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1293,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1294,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1295,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1296,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1297,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1298,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1299,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 1U))));
        bufp->chgBit(oldp+1300,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 1U))));
        bufp->chgBit(oldp+1301,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 1U))));
        bufp->chgBit(oldp+1302,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 1U))));
        bufp->chgBit(oldp+1303,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1304,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1305,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1306,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1307,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1308,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1309,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1310,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1311,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1312,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1313,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1314,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1315,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1316,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1317,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1318,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1319,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1320,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1321,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1322,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1323,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1324,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1325,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1326,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1327,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1328,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1329,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1330,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1331,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1332,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1333,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1334,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1335,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1336,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1337,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1338,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1339,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1340,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1341,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1342,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1343,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 2U))));
        bufp->chgBit(oldp+1344,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 2U))));
        bufp->chgBit(oldp+1345,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 2U))));
        bufp->chgBit(oldp+1346,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 2U))));
        bufp->chgBit(oldp+1347,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1348,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1349,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1350,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1351,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 3U))));
        bufp->chgBit(oldp+1352,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 3U))));
        bufp->chgBit(oldp+1353,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 3U))));
        bufp->chgBit(oldp+1354,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 3U))));
        bufp->chgBit(oldp+1355,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 4U))));
        bufp->chgBit(oldp+1356,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 4U))));
        bufp->chgBit(oldp+1357,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 4U))));
        bufp->chgBit(oldp+1358,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 4U))));
        bufp->chgBit(oldp+1359,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 5U))));
        bufp->chgBit(oldp+1360,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 5U))));
        bufp->chgBit(oldp+1361,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 5U))));
        bufp->chgBit(oldp+1362,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 5U))));
        bufp->chgBit(oldp+1363,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 6U))));
        bufp->chgBit(oldp+1364,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 6U))));
        bufp->chgBit(oldp+1365,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 6U))));
        bufp->chgBit(oldp+1366,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 6U))));
        bufp->chgBit(oldp+1367,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 7U))));
        bufp->chgBit(oldp+1368,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 7U))));
        bufp->chgBit(oldp+1369,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 7U))));
        bufp->chgBit(oldp+1370,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 7U))));
        bufp->chgBit(oldp+1371,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 8U))));
        bufp->chgBit(oldp+1372,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 8U))));
        bufp->chgBit(oldp+1373,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 8U))));
        bufp->chgBit(oldp+1374,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 8U))));
        bufp->chgBit(oldp+1375,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       >> 9U))));
        bufp->chgBit(oldp+1376,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                       >> 9U))));
        bufp->chgBit(oldp+1377,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 9U))));
        bufp->chgBit(oldp+1378,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                       >> 9U))));
        bufp->chgIData(oldp+1379,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift16_out),32);
        bufp->chgIData(oldp+1380,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift16_out),32);
        bufp->chgIData(oldp+1381,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift16_out),32);
        bufp->chgIData(oldp+1382,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__overflow_value),32);
        bufp->chgBit(oldp+1383,((1U & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                          >> 0x1fU)))));
        bufp->chgIData(oldp+1384,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                   << 1U)),32);
        bufp->chgIData(oldp+1385,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift1_out 
                                   << 2U)),32);
        bufp->chgIData(oldp+1386,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift2_out 
                                   << 4U)),32);
        bufp->chgIData(oldp+1387,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift4_out 
                                   << 8U)),32);
        bufp->chgIData(oldp+1388,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift8_out 
                                   << 0x10U)),32);
        bufp->chgIData(oldp+1389,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift1_out),32);
        bufp->chgIData(oldp+1390,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift2_out),32);
        bufp->chgIData(oldp+1391,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift4_out),32);
        bufp->chgIData(oldp+1392,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift8_out),32);
        bufp->chgIData(oldp+1393,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift_1),32);
        bufp->chgIData(oldp+1394,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                   >> 1U)),32);
        bufp->chgIData(oldp+1395,((0x80000000U | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                                  >> 1U))),32);
        bufp->chgIData(oldp+1396,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift_2),32);
        bufp->chgIData(oldp+1397,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift1_out 
                                   >> 2U)),32);
        bufp->chgIData(oldp+1398,((0xc0000000U | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift1_out 
                                                  >> 2U))),32);
        bufp->chgIData(oldp+1399,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift_4),32);
        bufp->chgIData(oldp+1400,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift2_out 
                                   >> 4U)),32);
        bufp->chgIData(oldp+1401,((0xf0000000U | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift2_out 
                                                  >> 4U))),32);
        bufp->chgIData(oldp+1402,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift_8),32);
        bufp->chgIData(oldp+1403,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift4_out 
                                   >> 8U)),32);
        bufp->chgIData(oldp+1404,((0xff000000U | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift4_out 
                                                  >> 8U))),32);
        bufp->chgIData(oldp+1405,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift_16),32);
        bufp->chgIData(oldp+1406,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift8_out 
                                   >> 0x10U)),32);
        bufp->chgIData(oldp+1407,((0xffff0000U | (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift8_out 
                                                  >> 0x10U))),32);
        bufp->chgIData(oldp+1408,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift1_out),32);
        bufp->chgIData(oldp+1409,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift2_out),32);
        bufp->chgIData(oldp+1410,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift4_out),32);
        bufp->chgIData(oldp+1411,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift8_out),32);
        bufp->chgIData(oldp+1412,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift1_out 
                                   >> 2U)),32);
        bufp->chgIData(oldp+1413,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift2_out 
                                   >> 4U)),32);
        bufp->chgIData(oldp+1414,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift4_out 
                                   >> 8U)),32);
        bufp->chgIData(oldp+1415,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift8_out 
                                   >> 0x10U)),32);
        bufp->chgIData(oldp+1416,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift1_out),32);
        bufp->chgIData(oldp+1417,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift2_out),32);
        bufp->chgIData(oldp+1418,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift4_out),32);
        bufp->chgIData(oldp+1419,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift8_out),32);
        bufp->chgBit(oldp+1420,((1U & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b) 
                                          >> 0x1fU)))));
        bufp->chgBit(oldp+1421,(((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                  >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                  >> 0x1fU)))));
        bufp->chgBit(oldp+1422,(((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                     >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b 
                                                   >> 0x1fU))));
        bufp->chgIData(oldp+1423,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg),32);
        bufp->chgBit(oldp+1424,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1425,(((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                  ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1426,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg)));
        bufp->chgBit(oldp+1427,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg))));
        bufp->chgBit(oldp+1428,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                       & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg))));
        bufp->chgBit(oldp+1429,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1430,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1431,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1432,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1433,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1434,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1435,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1436,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1437,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1438,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1439,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1440,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1441,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1442,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1443,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1444,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1445,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1446,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1447,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1448,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1449,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1450,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1451,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1452,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1453,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1454,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1455,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1456,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1457,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1458,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1459,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 1U))));
        bufp->chgBit(oldp+1460,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 1U))));
        bufp->chgBit(oldp+1461,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 1U))));
        bufp->chgBit(oldp+1462,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1463,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1464,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1465,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1466,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1467,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1468,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1469,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1470,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1471,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1472,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1473,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1474,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1475,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1476,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1477,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1478,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1479,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1480,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1481,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1482,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1483,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1484,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1485,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1486,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1487,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1488,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1489,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1490,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1491,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1492,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 2U))));
        bufp->chgBit(oldp+1493,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 2U))));
        bufp->chgBit(oldp+1494,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 2U))));
        bufp->chgBit(oldp+1495,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1496,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1497,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1498,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 3U))));
        bufp->chgBit(oldp+1499,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 3U))));
        bufp->chgBit(oldp+1500,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 3U))));
        bufp->chgBit(oldp+1501,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 4U))));
        bufp->chgBit(oldp+1502,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 4U))));
        bufp->chgBit(oldp+1503,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 4U))));
        bufp->chgBit(oldp+1504,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 5U))));
        bufp->chgBit(oldp+1505,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 5U))));
        bufp->chgBit(oldp+1506,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 5U))));
        bufp->chgBit(oldp+1507,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 6U))));
        bufp->chgBit(oldp+1508,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 6U))));
        bufp->chgBit(oldp+1509,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 6U))));
        bufp->chgBit(oldp+1510,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 7U))));
        bufp->chgBit(oldp+1511,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 7U))));
        bufp->chgBit(oldp+1512,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 7U))));
        bufp->chgBit(oldp+1513,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 8U))));
        bufp->chgBit(oldp+1514,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 8U))));
        bufp->chgBit(oldp+1515,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 8U))));
        bufp->chgBit(oldp+1516,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       >> 9U))));
        bufp->chgBit(oldp+1517,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 9U))));
        bufp->chgBit(oldp+1518,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                        & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                       >> 9U))));
        bufp->chgBit(oldp+1519,(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__brc_inst__DOT__diff_sign));
        bufp->chgBit(oldp+1520,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                 >> 0x1fU)));
        bufp->chgIData(oldp+1521,((0x7fffffffU & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a)),31);
        bufp->chgIData(oldp+1522,((0x7fffffffU & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b)),31);
        bufp->chgBit(oldp+1523,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1524,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1525,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1526,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1527,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1528,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1529,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1530,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1531,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1532,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1533,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1534,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1535,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1536,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1537,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1538,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1539,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1540,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1541,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1542,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1543,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1544,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1545,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1546,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1547,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 9U))));
        bufp->chgBit(oldp+1548,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 9U))));
        bufp->chgBit(oldp+1549,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 8U))));
        bufp->chgBit(oldp+1550,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 8U))));
        bufp->chgBit(oldp+1551,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 7U))));
        bufp->chgBit(oldp+1552,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 7U))));
        bufp->chgBit(oldp+1553,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 6U))));
        bufp->chgBit(oldp+1554,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 6U))));
        bufp->chgBit(oldp+1555,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 5U))));
        bufp->chgBit(oldp+1556,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 5U))));
        bufp->chgBit(oldp+1557,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 4U))));
        bufp->chgBit(oldp+1558,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 4U))));
        bufp->chgBit(oldp+1559,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 3U))));
        bufp->chgBit(oldp+1560,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 3U))));
        bufp->chgBit(oldp+1561,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 2U))));
        bufp->chgBit(oldp+1562,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 2U))));
        bufp->chgBit(oldp+1563,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 1U))));
        bufp->chgBit(oldp+1564,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 1U))));
        bufp->chgBit(oldp+1565,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a)));
        bufp->chgBit(oldp+1566,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b)));
        bufp->chgBit(oldp+1567,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1568,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1569,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1570,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1571,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1572,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1573,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1574,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1575,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1576,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1577,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1578,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1579,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1580,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1581,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1582,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1583,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1584,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1585,((1U & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x1eU)))));
        bufp->chgBit(oldp+1586,((1U & ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                        >> 0x1eU) & 
                                       (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                           >> 0x1eU))))));
        bufp->chgBit(oldp+1587,((1U & ((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           >> 0x1eU)) 
                                       & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                          >> 0x1eU)))));
        bufp->chgBit(oldp+1588,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1589,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1590,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1591,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1592,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1593,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1594,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1595,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1596,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1597,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1598,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1599,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1600,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1601,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1602,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1603,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1604,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1605,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1606,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1607,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1608,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1609,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1610,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1611,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1612,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1613,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1614,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 9U))));
        bufp->chgBit(oldp+1615,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 9U))));
        bufp->chgBit(oldp+1616,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 8U))));
        bufp->chgBit(oldp+1617,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 8U))));
        bufp->chgBit(oldp+1618,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 7U))));
        bufp->chgBit(oldp+1619,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 7U))));
        bufp->chgBit(oldp+1620,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 6U))));
        bufp->chgBit(oldp+1621,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 6U))));
        bufp->chgBit(oldp+1622,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 5U))));
        bufp->chgBit(oldp+1623,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 5U))));
        bufp->chgBit(oldp+1624,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 4U))));
        bufp->chgBit(oldp+1625,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 4U))));
        bufp->chgBit(oldp+1626,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 3U))));
        bufp->chgBit(oldp+1627,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 3U))));
        bufp->chgBit(oldp+1628,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 2U))));
        bufp->chgBit(oldp+1629,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 2U))));
        bufp->chgBit(oldp+1630,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 1U))));
        bufp->chgBit(oldp+1631,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 1U))));
        bufp->chgBit(oldp+1632,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1633,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1634,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a)));
        bufp->chgBit(oldp+1635,((1U & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b)));
        bufp->chgBit(oldp+1636,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1637,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1638,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1639,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1640,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1641,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1642,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1643,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1644,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1645,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1646,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1647,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1648,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1649,((1U & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1650,((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1651,((1U & (~ ((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                           ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b) 
                                          >> 0x1fU)))));
        bufp->chgBit(oldp+1652,(((vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                  >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                  >> 0x1fU)))));
        bufp->chgBit(oldp+1653,(((~ (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_a 
                                     >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__forward_operand_b 
                                                   >> 0x1fU))));
        bufp->chgBit(oldp+1654,((1U & (IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en))));
        bufp->chgBit(oldp+1655,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en) 
                                       >> 1U))));
        bufp->chgBit(oldp+1656,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en) 
                                       >> 2U))));
        bufp->chgBit(oldp+1657,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en) 
                                       >> 3U))));
        bufp->chgBit(oldp+1658,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en) 
                                       >> 4U))));
        bufp->chgBit(oldp+1659,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en) 
                                       >> 5U))));
        bufp->chgBit(oldp+1660,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en) 
                                       >> 6U))));
        bufp->chgBit(oldp+1661,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en) 
                                       >> 7U))));
        bufp->chgBit(oldp+1662,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__MEM_mem_en) 
                                       >> 8U))));
        bufp->chgCData(oldp+1663,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__addr_sel),2);
        bufp->chgIData(oldp+1664,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__st_data_mem),32);
        bufp->chgCData(oldp+1665,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__temp_st[0]),8);
        bufp->chgCData(oldp+1666,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__temp_st[1]),8);
        bufp->chgCData(oldp+1667,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__temp_st[2]),8);
        bufp->chgCData(oldp+1668,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__temp_st[3]),8);
        bufp->chgCData(oldp+1669,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__LOAD_DAT__DOT__sel),5);
        bufp->chgIData(oldp+1670,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__LOAD_DAT__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1671,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__LOAD_DAT__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+1672,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__LOAD_DAT__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+1673,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__LOAD_DAT__DOT__unnamedblk4__DOT__i),32);
        bufp->chgCData(oldp+1674,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__STORE_DAT__DOT__sel),3);
        bufp->chgIData(oldp+1675,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__STORE_DAT__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1676,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__STORE_DAT__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+1677,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__unnamedblk5__DOT__k),32);
        bufp->chgIData(oldp+1678,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__unnamedblk6__DOT__k),32);
        bufp->chgIData(oldp+1679,(vlSelf->top__DOT__dut__DOT__MEM_instance__DOT__dmem_inst__DOT__unnamedblk7__DOT__k),32);
    }
    bufp->chgBit(oldp+1680,(vlSelf->clk_i));
    bufp->chgBit(oldp+1681,(vlSelf->rst_ni));
    bufp->chgIData(oldp+1682,(vlSelf->io_sw_i),32);
    bufp->chgIData(oldp+1683,(vlSelf->pc_debug_o),32);
    bufp->chgIData(oldp+1684,(vlSelf->io_lcd_o),32);
    bufp->chgIData(oldp+1685,(vlSelf->io_ledg_o),32);
    bufp->chgIData(oldp+1686,(vlSelf->io_ledr_o),32);
    bufp->chgIData(oldp+1687,(vlSelf->io_hex0_o),32);
    bufp->chgIData(oldp+1688,(vlSelf->io_hex1_o),32);
    bufp->chgIData(oldp+1689,(vlSelf->io_hex2_o),32);
    bufp->chgIData(oldp+1690,(vlSelf->io_hex3_o),32);
    bufp->chgIData(oldp+1691,(vlSelf->io_hex4_o),32);
    bufp->chgIData(oldp+1692,(vlSelf->io_hex5_o),32);
    bufp->chgIData(oldp+1693,(vlSelf->io_hex6_o),32);
    bufp->chgIData(oldp+1694,(vlSelf->io_hex7_o),32);
    bufp->chgBit(oldp+1695,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                     >> 0xfU) & (~ (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt))) 
                                   | (((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                       >> 0xeU) & (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt))))));
    bufp->chgBit(oldp+1696,((1U & ((((((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                       >> 0xdU) & ((IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_eq) 
                                                   | (~ (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt)))) 
                                     | (((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                         >> 0xcU) & (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt))) 
                                    | (((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                        >> 0xbU) & 
                                       (~ (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_eq)))) 
                                   | (((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                       >> 0xaU) & (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_eq))))));
    bufp->chgBit(oldp+1697,((1U & ((((((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                       >> 0xfU) & (~ (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt))) 
                                     | (((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                         >> 0xeU) & (IData)(vlSelf->top__DOT__dut__DOT__EX_instance__DOT__br_lt))) 
                                    & ((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                       >> 1U)) | ((
                                                   (((((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
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
    bufp->chgBit(oldp+1698,((1U & ((((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
                                     >> 9U) | ((((((IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en) 
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
    bufp->chgIData(oldp+1699,(((0x100U & (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en))
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
                                        ? ((0x20U & (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en))
                                            ? vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sll
                                            : (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                               & vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b))
                                        : ((0x20U & (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en))
                                            ? (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                               | vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b)
                                            : (vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_a 
                                               ^ vlSelf->top__DOT__dut__DOT__EX_instance__DOT__operand_b)))
                                    : ((0x40U & (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en))
                                        ? ((0x20U & (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en))
                                            ? vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sltu
                                            : vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__slt)
                                        : ((0x20U & (IData)(vlSelf->top__DOT__dut__DOT__EX_ex_en))
                                            ? vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__sub
                                            : vlSelf->top__DOT__dut__DOT__EX_instance__DOT__alu_inst__DOT__add))))),32);
    bufp->chgIData(oldp+1700,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem
                              [(0x1fU & (vlSelf->top__DOT__dut__DOT__ID_inst 
                                         >> 0xfU))]),32);
    bufp->chgIData(oldp+1701,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__regfile_inst__DOT__mem
                              [(0x1fU & (vlSelf->top__DOT__dut__DOT__ID_inst 
                                         >> 0x14U))]),32);
    bufp->chgIData(oldp+1702,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__rs1_data),32);
    bufp->chgIData(oldp+1703,(vlSelf->top__DOT__dut__DOT__ID_instance__DOT__rs2_data),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
