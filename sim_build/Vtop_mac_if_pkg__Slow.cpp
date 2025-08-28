// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_mac_if_pkg.h"

// Parameter definitions for Vtop_mac_if_pkg
constexpr IData/*31:0*/ Vtop_mac_if_pkg::RGMII_DATA_W;
constexpr IData/*31:0*/ Vtop_mac_if_pkg::GMII_DATA_W;


void Vtop_mac_if_pkg___ctor_var_reset(Vtop_mac_if_pkg* vlSelf);

Vtop_mac_if_pkg::Vtop_mac_if_pkg(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_mac_if_pkg___ctor_var_reset(this);
}

void Vtop_mac_if_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_mac_if_pkg::~Vtop_mac_if_pkg() {
}
