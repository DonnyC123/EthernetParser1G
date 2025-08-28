// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_GMII_IF_H_
#define VERILATED_VTOP_GMII_IF_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_gmii_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ data;
    CData/*0:0*/ error;
    CData/*0:0*/ valid;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_gmii_if(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_gmii_if();
    VL_UNCOPYABLE(Vtop_gmii_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_gmii_if* obj);

#endif  // guard
