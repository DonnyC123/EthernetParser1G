// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ VL_ONEHOT_I((((1U == vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff) 
                               << 1U) | (0U == vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff)))))) {
        if ((0U == (((1U == vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff) 
                     << 1U) | (0U == vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: rx_crc_checker.sv:29: Assertion failed in %Nrx_mac_top_test.rx_mac_top_inst.rx_crc_checker_inst: unique case, but none matched for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff);
                VL_STOP_MT("rtl/rx/mac/rx_crc_checker.sv", 29, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: rx_crc_checker.sv:29: Assertion failed in %Nrx_mac_top_test.rx_mac_top_inst.rx_crc_checker_inst: unique case, but multiple matches found for '32'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff);
            VL_STOP_MT("rtl/rx/mac/rx_crc_checker.sv", 29, "");
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff)))))))) {
        if ((0U == (((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: invalidate_packet.sv:24: Assertion failed in %Nrx_mac_top_test.rx_mac_top_inst.invalidate_packet_inst: unique case, but none matched for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),1,(IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff));
                VL_STOP_MT("rtl/rx/mac/invalidate_packet.sv", 24, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: invalidate_packet.sv:24: Assertion failed in %Nrx_mac_top_test.rx_mac_top_inst.invalidate_packet_inst: unique case, but multiple matches found for '1'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),1,(IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff));
            VL_STOP_MT("rtl/rx/mac/invalidate_packet.sv", 24, "");
        }
    }
    vlSelfRef.rx_mac_top_test__DOT__rgmii_rx_data_i 
        = vlSelfRef.rgmii_rx_data_i;
    vlSelfRef.rx_mac_top_test__DOT__rgmii_rx_ctrl_i 
        = vlSelfRef.rgmii_rx_ctrl_i;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__Q2 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q2_2ff;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__Q1 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q1_2ff;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__Q2 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q2_2ff;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__Q1 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q1_2ff;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__Q2 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q2_2ff;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__Q1 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q1_2ff;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__Q2 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q2_2ff;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__Q1 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q1_2ff;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__Q2 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q2_2ff;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__Q1 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q1_2ff;
    vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.ctrl 
        = vlSelfRef.rgmii_rx_ctrl_i;
    vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.data 
        = vlSelfRef.rgmii_rx_data_i;
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.error 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q2_2ff;
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data 
        = ((0xefU & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)) 
           | ((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q2_2ff) 
              << 4U));
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data 
        = ((0xfeU & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)) 
           | (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q1_2ff));
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data 
        = ((0xdfU & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)) 
           | ((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q2_2ff) 
              << 5U));
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data 
        = ((0xfdU & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)) 
           | ((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q1_2ff) 
              << 1U));
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data 
        = ((0xbfU & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)) 
           | ((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q2_2ff) 
              << 6U));
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data 
        = ((0xfbU & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)) 
           | ((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q1_2ff) 
              << 2U));
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data 
        = ((0x7fU & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)) 
           | ((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q2_2ff) 
              << 7U));
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data 
        = ((0xf7U & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)) 
           | ((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q1_2ff) 
              << 3U));
    vlSelfRef.rx_mac_top_test__DOT__clk = vlSelfRef.clk;
    vlSelfRef.rx_mac_top_test__DOT__rst = vlSelfRef.rst;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_o 
        = (0U == vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_ff);
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.valid 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q1_2ff;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__D 
        = vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.ctrl;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__D 
        = (1U & ((IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.data) 
                 >> 0U));
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__D 
        = (1U & ((IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.data) 
                 >> 1U));
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__D 
        = (1U & ((IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.data) 
                 >> 2U));
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__D 
        = (1U & ((IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.data) 
                 >> 3U));
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_o 
        = vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__clk 
        = vlSelfRef.rx_mac_top_test__DOT__clk;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rst 
        = vlSelfRef.rx_mac_top_test__DOT__rst;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_o 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_o;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_o 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_o;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_o;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_o;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_b 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_b 
        = (0x77968ccU ^ ((0xffffff00U & vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_ff) 
                         | (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)));
    if ((0U == vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff)) {
        if (vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.valid) {
            vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_b = 1U;
        }
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_b = 0xffffffffU;
    } else if ((1U == vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff)) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.valid)))) {
            vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_b = 0U;
            vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_b = 0xffffffffU;
        }
    }
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_valid_o 
        = vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.valid;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid = 0U;
    if ((0U != vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff)) {
        if ((1U == vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff)) {
            if ((1U & (~ (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.valid)))) {
                vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid = 1U;
            }
        }
    }
    vlSelfRef.gmii_data_o = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_o;
    vlSelfRef.rx_mac_top_test__DOT__gmii_data_o = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_o;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__clk 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__clk;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__clk 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__clk;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__clk 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__clk;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__rst 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rst;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__rst 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rst;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__rst 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rst;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_i 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__crc_error 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error;
    vlSelfRef.gmii_data_valid_o = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_valid_o;
    vlSelfRef.rx_mac_top_test__DOT__gmii_data_valid_o 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_valid_o;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid_o 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_o 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__data_o 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_i 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error_valid 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__clk 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__clk;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__C 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__clk;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__C 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__clk;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__C 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__clk;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__C 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__clk;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__C 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__clk;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__rst 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__rst;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__R 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__rst;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__R 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__rst;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__R 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__rst;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__R 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__rst;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__R 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__rst;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_i 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_i;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__data_i 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_i;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__crc_error_valid 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error_valid;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_b 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_pulse = 0U;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error 
        = (((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error_valid) 
            & (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error)) 
           | ((IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.valid) 
              & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.error)));
    if (vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff) {
        if (vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff) {
            if ((1U & (~ (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.valid)))) {
                vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_b = 0U;
            }
        }
    } else if (vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error) {
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_b = 1U;
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_pulse = 1U;
    }
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__clk 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__clk;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__clk 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__clk;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__rst 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__rst;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__rst 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__rst;
    vlSelfRef.invalid_frame_o = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_pulse;
    vlSelfRef.rx_mac_top_test__DOT__invalid_frame_o 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_pulse;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalid_frame_o 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_pulse;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          ^ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_b));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff)))))))) {
        if ((0U == (((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: invalidate_packet.sv:24: Assertion failed in %Nrx_mac_top_test.rx_mac_top_inst.invalidate_packet_inst: unique case, but none matched for '1'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),1,(IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff));
                VL_STOP_MT("rtl/rx/mac/invalidate_packet.sv", 24, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: invalidate_packet.sv:24: Assertion failed in %Nrx_mac_top_test.rx_mac_top_inst.invalidate_packet_inst: unique case, but multiple matches found for '1'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),1,(IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff));
            VL_STOP_MT("rtl/rx/mac/invalidate_packet.sv", 24, "");
        }
    }
    if (vlSelfRef.rst) {
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_ff = 0xffffffffU;
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff = 0U;
    } else {
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_ff 
            = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_b;
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff 
            = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_b;
    }
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_o 
        = (0U == vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_ff);
    if ((1U & (~ VL_ONEHOT_I((((1U == vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff) 
                               << 1U) | (0U == vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff)))))) {
        if ((0U == (((1U == vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff) 
                     << 1U) | (0U == vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: rx_crc_checker.sv:29: Assertion failed in %Nrx_mac_top_test.rx_mac_top_inst.rx_crc_checker_inst: unique case, but none matched for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff);
                VL_STOP_MT("rtl/rx/mac/rx_crc_checker.sv", 29, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: rx_crc_checker.sv:29: Assertion failed in %Nrx_mac_top_test.rx_mac_top_inst.rx_crc_checker_inst: unique case, but multiple matches found for '32'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff);
            VL_STOP_MT("rtl/rx/mac/rx_crc_checker.sv", 29, "");
        }
    }
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_o 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_o;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_o 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_o;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_o;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_o;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_i 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__crc_error 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_i 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_i;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.clk) {
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q2_2ff 
            = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q2_ff));
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q1_2ff 
            = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q1_ff));
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q2_2ff 
            = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q2_ff));
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q1_2ff 
            = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q1_ff));
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q2_2ff 
            = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q2_ff));
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q1_2ff 
            = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q1_ff));
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q2_2ff 
            = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q2_ff));
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q1_2ff 
            = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q1_ff));
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q2_2ff 
            = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q2_ff));
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q1_2ff 
            = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q1_ff));
        if (vlSelfRef.rst) {
            vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q2_ff = 0U;
            vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q2_ff = 0U;
            vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q2_ff = 0U;
            vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q2_ff = 0U;
            vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q2_ff = 0U;
        }
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q1_ff 
            = ((1U & (~ (IData)(vlSelfRef.rst))) && 
               (1U & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.data)));
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q1_ff 
            = ((1U & (~ (IData)(vlSelfRef.rst))) && 
               (1U & ((IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.data) 
                      >> 1U)));
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q1_ff 
            = ((1U & (~ (IData)(vlSelfRef.rst))) && 
               (1U & ((IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.data) 
                      >> 2U)));
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q1_ff 
            = ((1U & (~ (IData)(vlSelfRef.rst))) && 
               (1U & ((IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.data) 
                      >> 3U)));
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q1_ff 
            = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.ctrl));
    } else {
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q2_ff 
            = vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.ctrl;
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q2_ff 
            = (1U & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.data));
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q2_ff 
            = (1U & ((IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.data) 
                     >> 1U));
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q2_ff 
            = (1U & ((IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.data) 
                     >> 2U));
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q2_ff 
            = (1U & ((IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rgmii_if_internal.data) 
                     >> 3U));
    }
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__Q2 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q2_2ff;
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.error 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q2_2ff;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__Q1 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q1_2ff;
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data 
        = ((0xfeU & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)) 
           | (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q1_2ff));
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__Q2 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q2_2ff;
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data 
        = ((0xefU & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)) 
           | ((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q2_2ff) 
              << 4U));
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__Q1 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q1_2ff;
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data 
        = ((0xfdU & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)) 
           | ((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q1_2ff) 
              << 1U));
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__Q2 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q2_2ff;
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data 
        = ((0xdfU & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)) 
           | ((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q2_2ff) 
              << 5U));
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__Q1 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q1_2ff;
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data 
        = ((0xfbU & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)) 
           | ((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q1_2ff) 
              << 2U));
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__Q2 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q2_2ff;
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data 
        = ((0xbfU & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)) 
           | ((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q2_2ff) 
              << 6U));
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__Q1 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q1_2ff;
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data 
        = ((0xf7U & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)) 
           | ((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q1_2ff) 
              << 3U));
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__Q2 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q2_2ff;
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data 
        = ((0x7fU & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)) 
           | ((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q2_2ff) 
              << 7U));
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__Q1 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q1_2ff;
    vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.valid 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q1_2ff;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_o 
        = vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_valid_o 
        = vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.valid;
    vlSelfRef.gmii_data_o = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_o;
    vlSelfRef.rx_mac_top_test__DOT__gmii_data_o = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_o;
    vlSelfRef.gmii_data_valid_o = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_valid_o;
    vlSelfRef.rx_mac_top_test__DOT__gmii_data_valid_o 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_valid_o;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_b 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_b 
        = (0x77968ccU ^ ((0xffffff00U & vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_ff) 
                         | (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.data)));
    if ((0U == vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff)) {
        if (vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.valid) {
            vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_b = 1U;
        }
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_b = 0xffffffffU;
    } else if ((1U == vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff)) {
        if ((1U & (~ (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.valid)))) {
            vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_b = 0U;
            vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_b = 0xffffffffU;
        }
    }
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid = 0U;
    if ((0U != vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff)) {
        if ((1U == vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff)) {
            if ((1U & (~ (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.valid)))) {
                vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid = 1U;
            }
        }
    }
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid_o 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_o 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__data_o 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_i 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error_valid 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__data_i 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_i;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__crc_error_valid 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error_valid;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_b 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_pulse = 0U;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error 
        = (((IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error_valid) 
            & (IData)(vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error)) 
           | ((IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.valid) 
              & (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.error)));
    if (vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff) {
        if (vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff) {
            if ((1U & (~ (IData)(vlSymsp->TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if.valid)))) {
                vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_b = 0U;
            }
        }
    } else if (vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error) {
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_b = 1U;
        vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_pulse = 1U;
    }
    vlSelfRef.invalid_frame_o = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_pulse;
    vlSelfRef.rx_mac_top_test__DOT__invalid_frame_o 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_pulse;
    vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalid_frame_o 
        = vlSelfRef.rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_pulse;
}
