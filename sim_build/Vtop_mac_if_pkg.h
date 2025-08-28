// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_MAC_IF_PKG_H_
#define VERILATED_VTOP_MAC_IF_PKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_mac_if_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ RGMII_DATA_W = 4U;
    static constexpr IData/*31:0*/ GMII_DATA_W = 8U;

    // CONSTRUCTORS
    Vtop_mac_if_pkg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_mac_if_pkg();
    VL_UNCOPYABLE(Vtop_mac_if_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
