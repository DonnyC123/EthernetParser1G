// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_RGMII_IF_H_
#define VERILATED_VTOP_RGMII_IF_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_rgmii_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ data;
    CData/*0:0*/ ctrl;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_rgmii_if(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_rgmii_if();
    VL_UNCOPYABLE(Vtop_rgmii_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_rgmii_if* obj);

#endif  // guard
