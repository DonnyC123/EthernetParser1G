// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_CRC_PKG_H_
#define VERILATED_VTOP_CRC_PKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_crc_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ CRC_W = 0x00000020U;
    static constexpr IData/*31:0*/ CRC_POLY = 0x04c11db7U;
    static constexpr IData/*31:0*/ PARALLEL_CRC_POLY_8BIT = 0x077968ccU;
    static constexpr IData/*31:0*/ CRC_REG_INITIAL_VALUE = 0xffffffffU;

    // CONSTRUCTORS
    Vtop_crc_pkg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_crc_pkg();
    VL_UNCOPYABLE(Vtop_crc_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
