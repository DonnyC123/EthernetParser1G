// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__crc_pkg__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__mac_if_pkg__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__rx_mac_top_test__DOT__rgmii_if_internal__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if__0(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"rgmii_rx_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"rgmii_rx_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"gmii_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+6,0,"gmii_data_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"invalid_frame_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("crc_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__crc_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("mac_if_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__mac_if_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("rx_mac_top_test", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+8,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"rgmii_rx_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"rgmii_rx_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"gmii_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+13,0,"gmii_data_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"invalid_frame_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rgmii_if_internal", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtop___024root__trace_init_sub__TOP__rx_mac_top_test__DOT__rgmii_if_internal__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("rx_mac_top_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+15,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rgmii_if_rx_i", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtop___024root__trace_init_sub__TOP__rx_mac_top_test__DOT__rgmii_if_internal__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+17,0,"gmii_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+18,0,"gmii_data_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"invalid_frame_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gmii_rx_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtop___024root__trace_init_sub__TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+20,0,"crc_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"crc_error_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ddr_sdr_converter_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+22,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rgmii_if_rx_i", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtop___024root__trace_init_sub__TOP__rx_mac_top_test__DOT__rgmii_if_internal__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("gmii_if_rx_o", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtop___024root__trace_init_sub__TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("iddr_sim_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+120,0,"INIT_Q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"INIT_Q2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"CE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"Q1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"Q2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"q1_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"q2_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"q1_2ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"q2_2ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("iddr_sim_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+120,0,"INIT_Q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"INIT_Q2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"CE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"Q1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"Q2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"q1_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"q2_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"q1_2ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"q2_2ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("iddr_sim_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+120,0,"INIT_Q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"INIT_Q2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"CE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"Q1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"Q2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"q1_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"q2_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"q1_2ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"q2_2ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("iddr_sim_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+120,0,"INIT_Q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"INIT_Q2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"CE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"Q1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"Q2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"q1_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"q2_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"q1_2ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"q2_2ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("iddr_sim_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+120,0,"INIT_Q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"INIT_Q2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"CE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"Q1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"Q2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"q1_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"q2_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"q1_2ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"q2_2ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("invalidate_packet_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+79,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"crc_error_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"crc_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gmii_rx_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtop___024root__trace_init_sub__TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+83,0,"error_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"error_state_b",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"error_state_ff",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("rx_crc_checker_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+121,0,"PARALLEL_CRC_POLY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+122,0,"PIPELINE_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+87,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gmii_rx_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtop___024root__trace_init_sub__TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+89,0,"crc_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"crc_error_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"crc_checker_state_b",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+92,0,"crc_checker_state_ff",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+93,0,"crc_shift_reg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"crc_shift_reg_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"crc_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"crc_error_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("data_status_pipeline_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+123,0,"DATA_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+123,0,"STATUS_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+122,0,"PIPE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+97,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+100,0,"status_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+101,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+102,0,"status_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("data_pipeline_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+123,0,"DATA_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+122,0,"PIPE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+124,0,"RESET_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+122,0,"RESET_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+103,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+106,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("data_shift_reg_ff", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+107+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+-1), 0,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("status_pipeline_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+123,0,"DATA_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+122,0,"PIPE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+125,0,"RESET_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+122,0,"RESET_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+109,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+112,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("data_shift_reg_ff", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+113+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+-1), 0,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__crc_pkg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__crc_pkg__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+126,0,"CRC_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"CRC_POLY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"PARALLEL_CRC_POLY_8BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"CRC_REG_INITIAL_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__rx_mac_top_test__DOT__rgmii_if_internal__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__rx_mac_top_test__DOT__rgmii_if_internal__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+115,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::UNION_PACKED);
    tracep->declBus(c+116,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+116,0,"error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+117,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+118,0,"error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__mac_if_pkg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__mac_if_pkg__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+130,0,"RGMII_DATA_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"GMII_DATA_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+120,(0U));
    bufp->fullIData(oldp+121,(0x77968ccU),32);
    bufp->fullIData(oldp+122,(0U),32);
    bufp->fullIData(oldp+123,(1U),32);
    bufp->fullBit(oldp+124,(0U));
    bufp->fullBit(oldp+125,(1U));
    bufp->fullIData(oldp+126,(0x20U),32);
    bufp->fullIData(oldp+127,(0x4c11db7U),32);
    bufp->fullIData(oldp+128,(0x77968ccU),32);
    bufp->fullIData(oldp+129,(0xffffffffU),32);
    bufp->fullIData(oldp+130,(4U),32);
    bufp->fullIData(oldp+131,(8U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst));
    bufp->fullCData(oldp+3,(vlSelfRef.rgmii_rx_data_i),4);
    bufp->fullBit(oldp+4,(vlSelfRef.rgmii_rx_ctrl_i));
    bufp->fullCData(oldp+5,(vlSelfRef.gmii_data_o),8);
    bufp->fullBit(oldp+6,(vlSelfRef.gmii_data_valid_o));
    bufp->fullBit(oldp+7,(vlSelfRef.invalid_frame_o));
    bufp->fullBit(oldp+8,(vlSelfRef.rx_mac_top_test__DOT__clk));
    bufp->fullBit(oldp+9,(vlSelfRef.rx_mac_top_test__DOT__rst));
    bufp->fullCData(oldp+10,(vlSelfRef.rx_mac_top_test__DOT__rgmii_rx_data_i),4);
    bufp->fullBit(oldp+11,(vlSelfRef.rx_mac_top_test__DOT__rgmii_rx_ctrl_i));
    bufp->fullCData(oldp+12,(vlSelfRef.rx_mac_top_test__DOT__gmii_data_o),8);
    bufp->fullBit(oldp+13,(vlSelfRef.rx_mac_top_test__DOT__gmii_data_valid_o));
    bufp->fullBit(oldp+14,(vlSelfRef.rx_mac_top_test__DOT__invalid_frame_o));
    bufp->fullBit(oldp+15,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__clk));
    bufp->fullBit(oldp+16,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rst));
    bufp->fullCData(oldp+17,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_o),8);
    bufp->fullBit(oldp+18,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_valid_o));
    bufp->fullBit(oldp+19,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalid_frame_o));
    bufp->fullBit(oldp+20,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error));
    bufp->fullBit(oldp+21,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error_valid));
    bufp->fullBit(oldp+22,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__clk));
    bufp->fullBit(oldp+23,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__rst));
    bufp->fullBit(oldp+24,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__C));
    bufp->fullBit(oldp+25,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__CE));
    bufp->fullBit(oldp+26,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__D));
    bufp->fullBit(oldp+27,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__R));
    bufp->fullBit(oldp+28,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__S));
    bufp->fullBit(oldp+29,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__Q1));
    bufp->fullBit(oldp+30,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__Q2));
    bufp->fullBit(oldp+31,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q1_ff));
    bufp->fullBit(oldp+32,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q2_ff));
    bufp->fullBit(oldp+33,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q1_2ff));
    bufp->fullBit(oldp+34,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q2_2ff));
    bufp->fullBit(oldp+35,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__C));
    bufp->fullBit(oldp+36,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__CE));
    bufp->fullBit(oldp+37,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__D));
    bufp->fullBit(oldp+38,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__R));
    bufp->fullBit(oldp+39,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__S));
    bufp->fullBit(oldp+40,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__Q1));
    bufp->fullBit(oldp+41,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__Q2));
    bufp->fullBit(oldp+42,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q1_ff));
    bufp->fullBit(oldp+43,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q2_ff));
    bufp->fullBit(oldp+44,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q1_2ff));
    bufp->fullBit(oldp+45,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q2_2ff));
    bufp->fullBit(oldp+46,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__C));
    bufp->fullBit(oldp+47,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__CE));
    bufp->fullBit(oldp+48,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__D));
    bufp->fullBit(oldp+49,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__R));
    bufp->fullBit(oldp+50,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__S));
    bufp->fullBit(oldp+51,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__Q1));
    bufp->fullBit(oldp+52,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__Q2));
    bufp->fullBit(oldp+53,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q1_ff));
    bufp->fullBit(oldp+54,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q2_ff));
    bufp->fullBit(oldp+55,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q1_2ff));
    bufp->fullBit(oldp+56,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q2_2ff));
    bufp->fullBit(oldp+57,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__C));
    bufp->fullBit(oldp+58,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__CE));
    bufp->fullBit(oldp+59,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__D));
    bufp->fullBit(oldp+60,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__R));
    bufp->fullBit(oldp+61,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__S));
    bufp->fullBit(oldp+62,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__Q1));
    bufp->fullBit(oldp+63,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__Q2));
    bufp->fullBit(oldp+64,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q1_ff));
    bufp->fullBit(oldp+65,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q2_ff));
    bufp->fullBit(oldp+66,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q1_2ff));
    bufp->fullBit(oldp+67,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q2_2ff));
    bufp->fullBit(oldp+68,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__C));
    bufp->fullBit(oldp+69,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__CE));
    bufp->fullBit(oldp+70,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__D));
    bufp->fullBit(oldp+71,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__R));
    bufp->fullBit(oldp+72,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__S));
    bufp->fullBit(oldp+73,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__Q1));
    bufp->fullBit(oldp+74,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__Q2));
    bufp->fullBit(oldp+75,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q1_ff));
    bufp->fullBit(oldp+76,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q2_ff));
    bufp->fullBit(oldp+77,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q1_2ff));
    bufp->fullBit(oldp+78,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q2_2ff));
    bufp->fullBit(oldp+79,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__clk));
    bufp->fullBit(oldp+80,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__rst));
    bufp->fullBit(oldp+81,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__crc_error_valid));
    bufp->fullBit(oldp+82,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__crc_error));
    bufp->fullBit(oldp+83,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_pulse));
    bufp->fullBit(oldp+84,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_b));
    bufp->fullBit(oldp+85,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff));
    bufp->fullBit(oldp+86,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error));
    bufp->fullBit(oldp+87,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__clk));
    bufp->fullBit(oldp+88,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__rst));
    bufp->fullBit(oldp+89,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_o));
    bufp->fullBit(oldp+90,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid_o));
    bufp->fullIData(oldp+91,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_b),32);
    bufp->fullIData(oldp+92,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff),32);
    bufp->fullIData(oldp+93,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_b),32);
    bufp->fullIData(oldp+94,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_ff),32);
    bufp->fullBit(oldp+95,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error));
    bufp->fullBit(oldp+96,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid));
    bufp->fullBit(oldp+97,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__clk));
    bufp->fullBit(oldp+98,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__rst));
    bufp->fullBit(oldp+99,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_i));
    bufp->fullBit(oldp+100,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_i));
    bufp->fullBit(oldp+101,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_o));
    bufp->fullBit(oldp+102,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_o));
    bufp->fullBit(oldp+103,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__clk));
    bufp->fullBit(oldp+104,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__rst));
    bufp->fullBit(oldp+105,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_i));
    bufp->fullBit(oldp+106,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_o));
    bufp->fullBit(oldp+107,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_shift_reg_ff[0]));
    bufp->fullBit(oldp+108,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_shift_reg_ff[1]));
    bufp->fullBit(oldp+109,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__clk));
    bufp->fullBit(oldp+110,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__rst));
    bufp->fullBit(oldp+111,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__data_i));
    bufp->fullBit(oldp+112,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__data_o));
    bufp->fullBit(oldp+113,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__data_shift_reg_ff[0]));
    bufp->fullBit(oldp+114,(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__data_shift_reg_ff[1]));
    bufp->fullCData(oldp+115,(vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.data),4);
    bufp->fullBit(oldp+116,(vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.ctrl));
    bufp->fullCData(oldp+117,(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data),8);
    bufp->fullBit(oldp+118,(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.error));
    bufp->fullBit(oldp+119,(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.valid));
}
