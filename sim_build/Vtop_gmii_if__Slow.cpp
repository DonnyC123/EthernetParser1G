// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_gmii_if.h"

void Vtop_gmii_if___ctor_var_reset(Vtop_gmii_if* vlSelf);

Vtop_gmii_if::Vtop_gmii_if(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_gmii_if___ctor_var_reset(this);
}

void Vtop_gmii_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_gmii_if::~Vtop_gmii_if() {
}
