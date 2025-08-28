// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgCData(oldp+2,(vlSelfRef.rgmii_rx_data_i),4);
    bufp->chgBit(oldp+3,(vlSelfRef.rgmii_rx_ctrl_i));
    bufp->chgCData(oldp+4,(vlSelfRef.gmii_data_o),8);
    bufp->chgBit(oldp+5,(vlSelfRef.gmii_data_valid_o));
    bufp->chgBit(oldp+6,(vlSelfRef.invalid_frame_o));
    bufp->chgBit(oldp+7,(vlSelfRef.rx_mac_top_test__DOT__clk));
    bufp->chgBit(oldp+8,(vlSelfRef.rx_mac_top_test__DOT__rst));
    bufp->chgCData(oldp+9,(vlSelfRef.rx_mac_top_test__DOT__rgmii_rx_data_i),4);
    bufp->chgBit(oldp+10,(vlSelfRef.rx_mac_top_test__DOT__rgmii_rx_ctrl_i));
    bufp->chgCData(oldp+11,(vlSelfRef.rx_mac_top_test__DOT__gmii_data_o),8);
    bufp->chgBit(oldp+12,(vlSelfRef.rx_mac_top_test__DOT__gmii_data_valid_o));
    bufp->chgBit(oldp+13,(vlSelfRef.rx_mac_top_test__DOT__invalid_frame_o));
    bufp->chgBit(oldp+14,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__clk));
    bufp->chgBit(oldp+15,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rst));
    bufp->chgCData(oldp+16,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_o),8);
    bufp->chgBit(oldp+17,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_valid_o));
    bufp->chgBit(oldp+18,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalid_frame_o));
    bufp->chgBit(oldp+19,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error));
    bufp->chgBit(oldp+20,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error_valid));
    bufp->chgBit(oldp+21,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__clk));
    bufp->chgBit(oldp+22,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__rst));
    bufp->chgBit(oldp+23,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__C));
    bufp->chgBit(oldp+24,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__CE));
    bufp->chgBit(oldp+25,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__D));
    bufp->chgBit(oldp+26,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__R));
    bufp->chgBit(oldp+27,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__S));
    bufp->chgBit(oldp+28,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__Q1));
    bufp->chgBit(oldp+29,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__Q2));
    bufp->chgBit(oldp+30,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q1_ff));
    bufp->chgBit(oldp+31,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q2_ff));
    bufp->chgBit(oldp+32,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q1_2ff));
    bufp->chgBit(oldp+33,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q2_2ff));
    bufp->chgBit(oldp+34,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__C));
    bufp->chgBit(oldp+35,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__CE));
    bufp->chgBit(oldp+36,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__D));
    bufp->chgBit(oldp+37,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__R));
    bufp->chgBit(oldp+38,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__S));
    bufp->chgBit(oldp+39,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__Q1));
    bufp->chgBit(oldp+40,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__Q2));
    bufp->chgBit(oldp+41,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q1_ff));
    bufp->chgBit(oldp+42,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q2_ff));
    bufp->chgBit(oldp+43,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q1_2ff));
    bufp->chgBit(oldp+44,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q2_2ff));
    bufp->chgBit(oldp+45,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__C));
    bufp->chgBit(oldp+46,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__CE));
    bufp->chgBit(oldp+47,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__D));
    bufp->chgBit(oldp+48,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__R));
    bufp->chgBit(oldp+49,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__S));
    bufp->chgBit(oldp+50,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__Q1));
    bufp->chgBit(oldp+51,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__Q2));
    bufp->chgBit(oldp+52,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q1_ff));
    bufp->chgBit(oldp+53,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q2_ff));
    bufp->chgBit(oldp+54,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q1_2ff));
    bufp->chgBit(oldp+55,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q2_2ff));
    bufp->chgBit(oldp+56,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__C));
    bufp->chgBit(oldp+57,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__CE));
    bufp->chgBit(oldp+58,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__D));
    bufp->chgBit(oldp+59,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__R));
    bufp->chgBit(oldp+60,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__S));
    bufp->chgBit(oldp+61,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__Q1));
    bufp->chgBit(oldp+62,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__Q2));
    bufp->chgBit(oldp+63,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q1_ff));
    bufp->chgBit(oldp+64,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q2_ff));
    bufp->chgBit(oldp+65,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q1_2ff));
    bufp->chgBit(oldp+66,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q2_2ff));
    bufp->chgBit(oldp+67,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__C));
    bufp->chgBit(oldp+68,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__CE));
    bufp->chgBit(oldp+69,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__D));
    bufp->chgBit(oldp+70,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__R));
    bufp->chgBit(oldp+71,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__S));
    bufp->chgBit(oldp+72,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__Q1));
    bufp->chgBit(oldp+73,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__Q2));
    bufp->chgBit(oldp+74,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q1_ff));
    bufp->chgBit(oldp+75,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q2_ff));
    bufp->chgBit(oldp+76,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q1_2ff));
    bufp->chgBit(oldp+77,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q2_2ff));
    bufp->chgBit(oldp+78,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__clk));
    bufp->chgBit(oldp+79,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__rst));
    bufp->chgBit(oldp+80,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__crc_error_valid));
    bufp->chgBit(oldp+81,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__crc_error));
    bufp->chgBit(oldp+82,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_pulse));
    bufp->chgBit(oldp+83,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_b));
    bufp->chgBit(oldp+84,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff));
    bufp->chgBit(oldp+85,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error));
    bufp->chgBit(oldp+86,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__clk));
    bufp->chgBit(oldp+87,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__rst));
    bufp->chgBit(oldp+88,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_o));
    bufp->chgBit(oldp+89,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid_o));
    bufp->chgIData(oldp+90,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_b),32);
    bufp->chgIData(oldp+91,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff),32);
    bufp->chgIData(oldp+92,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_b),32);
    bufp->chgIData(oldp+93,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_ff),32);
    bufp->chgBit(oldp+94,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error));
    bufp->chgBit(oldp+95,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid));
    bufp->chgBit(oldp+96,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__clk));
    bufp->chgBit(oldp+97,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__rst));
    bufp->chgBit(oldp+98,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_i));
    bufp->chgBit(oldp+99,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_i));
    bufp->chgBit(oldp+100,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_o));
    bufp->chgBit(oldp+101,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_o));
    bufp->chgBit(oldp+102,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__clk));
    bufp->chgBit(oldp+103,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__rst));
    bufp->chgBit(oldp+104,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_i));
    bufp->chgBit(oldp+105,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_o));
    bufp->chgBit(oldp+106,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_shift_reg_ff[0]));
    bufp->chgBit(oldp+107,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_shift_reg_ff[1]));
    bufp->chgBit(oldp+108,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__clk));
    bufp->chgBit(oldp+109,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__rst));
    bufp->chgBit(oldp+110,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__data_i));
    bufp->chgBit(oldp+111,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__data_o));
    bufp->chgBit(oldp+112,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__data_shift_reg_ff[0]));
    bufp->chgBit(oldp+113,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__data_shift_reg_ff[1]));
    bufp->chgCData(oldp+114,(vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.data),4);
    bufp->chgBit(oldp+115,(vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.ctrl));
    bufp->chgCData(oldp+116,(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data),8);
    bufp->chgBit(oldp+117,(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.error));
    bufp->chgBit(oldp+118,(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.valid));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
