// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_crc_pkg.h"

// Parameter definitions for Vtop_crc_pkg
constexpr IData/*31:0*/ Vtop_crc_pkg::CRC_W;
constexpr IData/*31:0*/ Vtop_crc_pkg::CRC_POLY;
constexpr IData/*31:0*/ Vtop_crc_pkg::PARALLEL_CRC_POLY_8BIT;
constexpr IData/*31:0*/ Vtop_crc_pkg::CRC_REG_INITIAL_VALUE;


void Vtop_crc_pkg___ctor_var_reset(Vtop_crc_pkg* vlSelf);

Vtop_crc_pkg::Vtop_crc_pkg(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_crc_pkg___ctor_var_reset(this);
}

void Vtop_crc_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_crc_pkg::~Vtop_crc_pkg() {
}
