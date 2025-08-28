// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_rgmii_if.h"

VL_ATTR_COLD void Vtop_rgmii_if___ctor_var_reset(Vtop_rgmii_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_rgmii_if___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10363016170300574568ull);
    vlSelf->ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10440442894316637683ull);
}
