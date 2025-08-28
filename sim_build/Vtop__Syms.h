// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_crc_pkg.h"
#include "Vtop_rgmii_if.h"
#include "Vtop_gmii_if.h"
#include "Vtop_mac_if_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_crc_pkg                   TOP__crc_pkg;
    Vtop_mac_if_pkg                TOP__mac_if_pkg;
    Vtop_rgmii_if                  TOP__rx_mac_top_test__DOT__rgmii_if_internal;
    Vtop_gmii_if                   TOP__rx_mac_top_test__DOT__rx_mac_top_inst__DOT__gmii_rx_if;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_crc_pkg;
    VerilatedScope __Vscope_mac_if_pkg;
    VerilatedScope __Vscope_rx_mac_top_test;
    VerilatedScope __Vscope_rx_mac_top_test__rgmii_if_internal;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst__ddr_sdr_converter_inst;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst__ddr_sdr_converter_inst__genblk1;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst__ddr_sdr_converter_inst__genblk1__genblk1__BRA__0__KET__;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst__ddr_sdr_converter_inst__genblk1__genblk1__BRA__0__KET____iddr_sim_inst;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst__ddr_sdr_converter_inst__genblk1__genblk1__BRA__1__KET__;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst__ddr_sdr_converter_inst__genblk1__genblk1__BRA__1__KET____iddr_sim_inst;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst__ddr_sdr_converter_inst__genblk1__genblk1__BRA__2__KET__;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst__ddr_sdr_converter_inst__genblk1__genblk1__BRA__2__KET____iddr_sim_inst;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst__ddr_sdr_converter_inst__genblk1__genblk1__BRA__3__KET__;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst__ddr_sdr_converter_inst__genblk1__genblk1__BRA__3__KET____iddr_sim_inst;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst__ddr_sdr_converter_inst__genblk1__iddr_sim_inst;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst__gmii_rx_if;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst__invalidate_packet_inst;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst__rx_crc_checker_inst;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst__rx_crc_checker_inst__data_status_pipeline_inst;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst__rx_crc_checker_inst__data_status_pipeline_inst__data_pipeline_inst;
    VerilatedScope __Vscope_rx_mac_top_test__rx_mac_top_inst__rx_crc_checker_inst__data_status_pipeline_inst__status_pipeline_inst;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
