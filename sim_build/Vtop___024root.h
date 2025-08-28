// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_crc_pkg;
class Vtop_gmii_if;
class Vtop_mac_if_pkg;
class Vtop_rgmii_if;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_crc_pkg* __PVT__crc_pkg;
    Vtop_mac_if_pkg* __PVT__mac_if_pkg;
    Vtop_rgmii_if* __PVT__rx_mac_top_test__DOT__rgmii_if_internal;
    Vtop_gmii_if* __PVT__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(rgmii_rx_data_i,3,0);
        VL_IN8(rgmii_rx_ctrl_i,0,0);
        VL_OUT8(gmii_data_o,7,0);
        VL_OUT8(gmii_data_valid_o,0,0);
        VL_OUT8(invalid_frame_o,0,0);
        CData/*0:0*/ rx_mac_top_test__DOT__clk;
        CData/*0:0*/ rx_mac_top_test__DOT__rst;
        CData/*3:0*/ rx_mac_top_test__DOT__rgmii_rx_data_i;
        CData/*0:0*/ rx_mac_top_test__DOT__rgmii_rx_ctrl_i;
        CData/*7:0*/ rx_mac_top_test__DOT__gmii_data_o;
        CData/*0:0*/ rx_mac_top_test__DOT__gmii_data_valid_o;
        CData/*0:0*/ rx_mac_top_test__DOT__invalid_frame_o;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__clk;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rst;
        CData/*7:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_o;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_data_valid_o;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalid_frame_o;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__crc_error_valid;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__clk;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__rst;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__C;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__CE;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__D;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__R;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__S;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__Q1;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__Q2;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q1_ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q2_ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q1_2ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__q2_2ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__C;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__CE;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__D;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__R;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__S;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__Q1;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__Q2;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q1_ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q2_ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q1_2ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__q2_2ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__C;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__CE;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__D;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__R;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__S;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__Q1;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__Q2;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q1_ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q2_ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q1_2ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__q2_2ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__C;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__CE;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__D;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__R;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__S;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__Q1;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__Q2;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q1_ff;
    };
    struct {
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q2_ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q1_2ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__q2_2ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__C;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__CE;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__D;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__R;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__S;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__Q1;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__Q2;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q1_ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q2_ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q1_2ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__q2_2ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__clk;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__rst;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_o;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid_o;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_error_valid;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__clk;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__rst;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_i;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_i;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_o;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_o;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__clk;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__rst;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_i;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_o;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__clk;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__rst;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__data_i;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__data_o;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__clk;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__rst;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__crc_error_valid;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__crc_error;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_pulse;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_b;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error_state_ff;
        CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__invalidate_packet_inst__DOT__error;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_b;
        IData/*31:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_checker_state_ff;
        IData/*31:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_b;
        IData/*31:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__crc_shift_reg_ff;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 2> rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__data_shift_reg_ff;
        VlUnpacked<CData/*0:0*/, 2> rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__data_shift_reg_ff;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__INIT_Q1 = 0U;
    static constexpr CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__INIT_Q2 = 0U;
    static constexpr CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__INIT_Q1 = 0U;
    static constexpr CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__INIT_Q2 = 0U;
    static constexpr CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__INIT_Q1 = 0U;
    static constexpr CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__INIT_Q2 = 0U;
    static constexpr CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__INIT_Q1 = 0U;
    static constexpr CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__INIT_Q2 = 0U;
    static constexpr CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__INIT_Q1 = 0U;
    static constexpr CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__INIT_Q2 = 0U;
    static constexpr CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__RESET_EN = 0U;
    static constexpr CData/*0:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__RESET_EN = 1U;
    static constexpr IData/*31:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__PARALLEL_CRC_POLY = 0x077968ccU;
    static constexpr IData/*31:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__PIPELINE_DELAY = 0U;
    static constexpr IData/*31:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__DATA_W = 1U;
    static constexpr IData/*31:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__STATUS_W = 1U;
    static constexpr IData/*31:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__PIPE_DEPTH = 0U;
    static constexpr IData/*31:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__DATA_W = 1U;
    static constexpr IData/*31:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__PIPE_DEPTH = 0U;
    static constexpr IData/*31:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__data_pipeline_inst__DOT__RESET_VALUE = 0U;
    static constexpr IData/*31:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__DATA_W = 1U;
    static constexpr IData/*31:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__PIPE_DEPTH = 0U;
    static constexpr IData/*31:0*/ rx_mac_top_test__DOT__rx_mac_top_inst__DOT__rx_crc_checker_inst__DOT__data_status_pipeline_inst__DOT__status_pipeline_inst__DOT__RESET_VALUE = 0U;
    static const std::string rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__TARGET;
    static const std::string rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__DDR_CLK_EDGE;
    static const std::string rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__iddr_sim_inst__DOT__RSTYPE;
    static const std::string rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__DDR_CLK_EDGE;
    static const std::string rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__iddr_sim_inst__DOT__RSTYPE;
    static const std::string rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__DDR_CLK_EDGE;
    static const std::string rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__iddr_sim_inst__DOT__RSTYPE;
    static const std::string rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__DDR_CLK_EDGE;
    static const std::string rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__iddr_sim_inst__DOT__RSTYPE;
    static const std::string rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__DDR_CLK_EDGE;
    static const std::string rx_mac_top_test__DOT__rx_mac_top_inst__DOT__ddr_sdr_converter_inst__DOT__genblk1__DOT__iddr_sim_inst__DOT__RSTYPE;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
