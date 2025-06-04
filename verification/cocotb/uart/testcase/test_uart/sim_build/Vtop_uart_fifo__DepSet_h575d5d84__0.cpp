// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_uart_fifo.h"

VL_INLINE_OPT void Vtop_uart_fifo___ico_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__0(Vtop_uart_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_uart_fifo___ico_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0x1eU & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (1U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((2U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0x1dU & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (2U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((4U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0x1bU & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (4U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((8U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0x17U & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (8U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((0x10U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0xfU & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (0x10U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((1U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelfRef.__Vtogcov__wptr = ((0x1eU & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (1U & (IData)(vlSelfRef.wptr)));
    }
    if ((2U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelfRef.__Vtogcov__wptr = ((0x1dU & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (2U & (IData)(vlSelfRef.wptr)));
    }
    if ((4U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelfRef.__Vtogcov__wptr = ((0x1bU & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (4U & (IData)(vlSelfRef.wptr)));
    }
    if ((8U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelfRef.__Vtogcov__wptr = ((0x17U & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (8U & (IData)(vlSelfRef.wptr)));
    }
    if ((0x10U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelfRef.__Vtogcov__wptr = ((0xfU & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (0x10U & (IData)(vlSelfRef.wptr)));
    }
    if ((1U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelfRef.__Vtogcov__rptr = ((0x1eU & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (1U & (IData)(vlSelfRef.rptr)));
    }
    if ((2U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelfRef.__Vtogcov__rptr = ((0x1dU & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (2U & (IData)(vlSelfRef.rptr)));
    }
    if ((4U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelfRef.__Vtogcov__rptr = ((0x1bU & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (4U & (IData)(vlSelfRef.rptr)));
    }
    if ((8U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelfRef.__Vtogcov__rptr = ((0x17U & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (8U & (IData)(vlSelfRef.rptr)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelfRef.__Vtogcov__rptr = ((0xfU & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (0x10U & (IData)(vlSelfRef.rptr)));
    }
    if ((1U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelfRef.__Vtogcov__data_o = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (1U & (IData)(vlSelfRef.data_o)));
    }
    if ((2U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelfRef.__Vtogcov__data_o = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (2U & (IData)(vlSelfRef.data_o)));
    }
    if ((4U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelfRef.__Vtogcov__data_o = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (4U & (IData)(vlSelfRef.data_o)));
    }
    if ((8U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelfRef.__Vtogcov__data_o = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (8U & (IData)(vlSelfRef.data_o)));
    }
    if ((0x10U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelfRef.__Vtogcov__data_o = ((0xefU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (0x10U & (IData)(vlSelfRef.data_o)));
    }
    if ((0x20U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelfRef.__Vtogcov__data_o = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (0x20U & (IData)(vlSelfRef.data_o)));
    }
    if ((0x40U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelfRef.__Vtogcov__data_o = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (0x40U & (IData)(vlSelfRef.data_o)));
    }
    if ((0x80U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelfRef.__Vtogcov__data_o = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (0x80U & (IData)(vlSelfRef.data_o)));
    }
    vlSelfRef.wfull = (((0x10U & ((~ ((IData)(vlSelfRef.wptr) 
                                      >> 4U)) << 4U)) 
                        | (0xfU & (IData)(vlSelfRef.wptr))) 
                       == (IData)(vlSelfRef.rptr));
    vlSelfRef.rempty = ((IData)(vlSelfRef.rptr) == (IData)(vlSelfRef.wptr));
    if ((1U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((2U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((4U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((8U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((0x10U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((0x20U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((0x40U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((0x80U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((1U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((2U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((4U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((8U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((0x10U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((0x20U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((0x40U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((0x80U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((1U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((2U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((4U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((8U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((0x10U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1244]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((0x20U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1245]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((0x40U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((0x80U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((1U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((2U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((4U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((8U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((0x10U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((0x20U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((0x40U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((0x80U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((1U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((2U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((4U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((8U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((0x10U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((0x20U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((0x40U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((0x80U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((1U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((2U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((4U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((8U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((0x10U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((0x20U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((0x40U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((0x80U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((1U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((2U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((4U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((8U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((0x10U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((0x20U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((0x40U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((0x80U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((1U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((2U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((4U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((8U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((0x10U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((0x20U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((0x40U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((0x80U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((1U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((2U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((4U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((8U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((0x10U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((0x20U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((0x40U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((0x80U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((1U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((2U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((4U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((8U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((0x10U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((0x20U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((0x40U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((0x80U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((1U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((2U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((4U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((8U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((1U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((2U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((4U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((8U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((1U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((2U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((4U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((8U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((1U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((2U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((4U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((8U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((1U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((2U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((4U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((8U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((1U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((2U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((4U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((8U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xfU]));
    }
    if (((IData)(vlSelfRef.rst_) ^ (IData)(vlSelfRef.__Vtogcov__rst_))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelfRef.__Vtogcov__rst_ = vlSelfRef.rst_;
    }
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelfRef.__Vtogcov__clk = vlSelfRef.clk;
    }
    if (((IData)(vlSelfRef.winc) ^ (IData)(vlSelfRef.__Vtogcov__winc))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelfRef.__Vtogcov__winc = vlSelfRef.winc;
    }
    if ((1U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelfRef.__Vtogcov__data_i = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (1U & (IData)(vlSelfRef.data_i)));
    }
    if ((2U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelfRef.__Vtogcov__data_i = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (2U & (IData)(vlSelfRef.data_i)));
    }
    if ((4U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelfRef.__Vtogcov__data_i = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (4U & (IData)(vlSelfRef.data_i)));
    }
    if ((8U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelfRef.__Vtogcov__data_i = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (8U & (IData)(vlSelfRef.data_i)));
    }
    if ((0x10U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelfRef.__Vtogcov__data_i = ((0xefU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (0x10U & (IData)(vlSelfRef.data_i)));
    }
    if ((0x20U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelfRef.__Vtogcov__data_i = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (0x20U & (IData)(vlSelfRef.data_i)));
    }
    if ((0x40U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelfRef.__Vtogcov__data_i = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (0x40U & (IData)(vlSelfRef.data_i)));
    }
    if ((0x80U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelfRef.__Vtogcov__data_i = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (0x80U & (IData)(vlSelfRef.data_i)));
    }
    if (((IData)(vlSelfRef.fifo_rst) ^ (IData)(vlSelfRef.__Vtogcov__fifo_rst))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelfRef.__Vtogcov__fifo_rst = vlSelfRef.fifo_rst;
    }
    if (((IData)(vlSelfRef.rinc) ^ (IData)(vlSelfRef.__Vtogcov__rinc))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelfRef.__Vtogcov__rinc = vlSelfRef.rinc;
    }
    if (((IData)(vlSelfRef.wfull) ^ (IData)(vlSelfRef.__Vtogcov__wfull))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelfRef.__Vtogcov__wfull = vlSelfRef.wfull;
    }
    if (((IData)(vlSelfRef.rempty) ^ (IData)(vlSelfRef.__Vtogcov__rempty))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelfRef.__Vtogcov__rempty = vlSelfRef.rempty;
    }
}

VL_INLINE_OPT void Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__0(Vtop_uart_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__rptr;
    __Vdly__rptr = 0;
    CData/*4:0*/ __Vdly__wptr;
    __Vdly__wptr = 0;
    CData/*7:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __Vdly__rptr = vlSelfRef.rptr;
    __Vdly__wptr = vlSelfRef.wptr;
    __VdlySet__ram__v0 = 0U;
    if (vlSelfRef.rst_) {
        if (vlSelfRef.fifo_rst) {
            ++(vlSymsp->__Vcoverage[1369]);
            __Vdly__wptr = 0U;
        } else {
            if (((IData)(vlSelfRef.winc) & (~ (IData)(vlSelfRef.wfull)))) {
                ++(vlSymsp->__Vcoverage[1364]);
                __VdlyVal__ram__v0 = vlSelfRef.data_i;
                __VdlyDim0__ram__v0 = (0xfU & (IData)(vlSelfRef.wptr));
                __VdlySet__ram__v0 = 1U;
                __Vdly__wptr = (0x1fU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.wptr)));
            } else {
                ++(vlSymsp->__Vcoverage[1365]);
            }
            if (((IData)(vlSelfRef.winc) & (~ (IData)(vlSelfRef.wfull)))) {
                ++(vlSymsp->__Vcoverage[1366]);
            }
            if (vlSelfRef.wfull) {
                ++(vlSymsp->__Vcoverage[1367]);
            }
            if ((1U & (~ (IData)(vlSelfRef.winc)))) {
                ++(vlSymsp->__Vcoverage[1368]);
            }
            ++(vlSymsp->__Vcoverage[1370]);
        }
        ++(vlSymsp->__Vcoverage[1372]);
    } else {
        ++(vlSymsp->__Vcoverage[1371]);
        __Vdly__wptr = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1373]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1374]);
    }
    ++(vlSymsp->__Vcoverage[1375]);
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.fifo_cnt = (0x1fU & ((IData)(vlSelfRef.wptr) 
                                       - (IData)(vlSelfRef.rptr)));
    } else {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelfRef.fifo_cnt = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1378]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1379]);
    }
    ++(vlSymsp->__Vcoverage[1380]);
    if (vlSelfRef.rst_) {
        if (vlSelfRef.fifo_rst) {
            ++(vlSymsp->__Vcoverage[1357]);
            __Vdly__rptr = 0U;
        } else {
            if (((IData)(vlSelfRef.rinc) & (~ (IData)(vlSelfRef.rempty)))) {
                ++(vlSymsp->__Vcoverage[1352]);
                vlSelfRef.data_o = vlSelfRef.ram[(0xfU 
                                                  & (IData)(vlSelfRef.rptr))];
                __Vdly__rptr = (0x1fU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.rptr)));
            } else {
                ++(vlSymsp->__Vcoverage[1353]);
            }
            if (((IData)(vlSelfRef.rinc) & (~ (IData)(vlSelfRef.rempty)))) {
                ++(vlSymsp->__Vcoverage[1354]);
            }
            if (vlSelfRef.rempty) {
                ++(vlSymsp->__Vcoverage[1355]);
            }
            if ((1U & (~ (IData)(vlSelfRef.rinc)))) {
                ++(vlSymsp->__Vcoverage[1356]);
            }
            ++(vlSymsp->__Vcoverage[1358]);
        }
        ++(vlSymsp->__Vcoverage[1360]);
    } else {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelfRef.data_o = 0U;
        __Vdly__rptr = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1361]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1362]);
    }
    ++(vlSymsp->__Vcoverage[1363]);
    vlSelfRef.wptr = __Vdly__wptr;
    vlSelfRef.rptr = __Vdly__rptr;
    if (__VdlySet__ram__v0) {
        vlSelfRef.ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
    if ((1U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelfRef.__Vtogcov__wptr = ((0x1eU & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (1U & (IData)(vlSelfRef.wptr)));
    }
    if ((2U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelfRef.__Vtogcov__wptr = ((0x1dU & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (2U & (IData)(vlSelfRef.wptr)));
    }
    if ((4U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelfRef.__Vtogcov__wptr = ((0x1bU & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (4U & (IData)(vlSelfRef.wptr)));
    }
    if ((8U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelfRef.__Vtogcov__wptr = ((0x17U & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (8U & (IData)(vlSelfRef.wptr)));
    }
    if ((0x10U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelfRef.__Vtogcov__wptr = ((0xfU & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (0x10U & (IData)(vlSelfRef.wptr)));
    }
    if ((1U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0x1eU & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (1U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((2U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0x1dU & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (2U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((4U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0x1bU & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (4U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((8U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0x17U & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (8U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((0x10U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0xfU & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (0x10U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((1U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelfRef.__Vtogcov__rptr = ((0x1eU & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (1U & (IData)(vlSelfRef.rptr)));
    }
    if ((2U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelfRef.__Vtogcov__rptr = ((0x1dU & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (2U & (IData)(vlSelfRef.rptr)));
    }
    if ((4U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelfRef.__Vtogcov__rptr = ((0x1bU & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (4U & (IData)(vlSelfRef.rptr)));
    }
    if ((8U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelfRef.__Vtogcov__rptr = ((0x17U & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (8U & (IData)(vlSelfRef.rptr)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelfRef.__Vtogcov__rptr = ((0xfU & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (0x10U & (IData)(vlSelfRef.rptr)));
    }
    vlSelfRef.wfull = (((0x10U & ((~ ((IData)(vlSelfRef.wptr) 
                                      >> 4U)) << 4U)) 
                        | (0xfU & (IData)(vlSelfRef.wptr))) 
                       == (IData)(vlSelfRef.rptr));
    vlSelfRef.rempty = ((IData)(vlSelfRef.rptr) == (IData)(vlSelfRef.wptr));
    if ((1U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelfRef.__Vtogcov__data_o = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (1U & (IData)(vlSelfRef.data_o)));
    }
    if ((2U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelfRef.__Vtogcov__data_o = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (2U & (IData)(vlSelfRef.data_o)));
    }
    if ((4U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelfRef.__Vtogcov__data_o = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (4U & (IData)(vlSelfRef.data_o)));
    }
    if ((8U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelfRef.__Vtogcov__data_o = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (8U & (IData)(vlSelfRef.data_o)));
    }
    if ((0x10U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelfRef.__Vtogcov__data_o = ((0xefU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (0x10U & (IData)(vlSelfRef.data_o)));
    }
    if ((0x20U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelfRef.__Vtogcov__data_o = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (0x20U & (IData)(vlSelfRef.data_o)));
    }
    if ((0x40U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelfRef.__Vtogcov__data_o = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (0x40U & (IData)(vlSelfRef.data_o)));
    }
    if ((0x80U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelfRef.__Vtogcov__data_o = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (0x80U & (IData)(vlSelfRef.data_o)));
    }
    if ((1U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((2U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((4U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((8U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((0x10U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((0x20U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((0x40U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((0x80U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((1U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((2U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((4U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((8U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((0x10U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((0x20U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((0x40U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((0x80U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((1U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((2U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((4U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((8U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((0x10U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1244]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((0x20U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1245]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((0x40U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((0x80U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((1U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((2U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((4U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((8U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((0x10U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((0x20U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((0x40U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((0x80U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((1U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((2U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((4U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((8U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((0x10U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((0x20U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((0x40U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((0x80U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((1U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((2U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((4U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((8U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((0x10U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((0x20U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((0x40U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((0x80U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((1U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((2U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((4U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((8U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((0x10U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((0x20U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((0x40U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((0x80U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((1U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((2U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((4U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((8U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((0x10U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((0x20U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((0x40U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((0x80U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((1U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((2U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((4U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((8U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((0x10U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((0x20U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((0x40U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((0x80U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((1U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((2U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((4U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((8U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((0x10U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((0x20U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((0x40U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((0x80U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((1U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((2U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((4U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((8U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((1U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((2U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((4U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((8U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((1U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((2U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((4U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((8U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((1U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((2U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((4U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((8U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((1U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((2U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((4U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((8U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((1U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((2U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((4U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((8U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xfU]));
    }
    if (((IData)(vlSelfRef.wfull) ^ (IData)(vlSelfRef.__Vtogcov__wfull))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelfRef.__Vtogcov__wfull = vlSelfRef.wfull;
    }
    if (((IData)(vlSelfRef.rempty) ^ (IData)(vlSelfRef.__Vtogcov__rempty))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelfRef.__Vtogcov__rempty = vlSelfRef.rempty;
    }
}

VL_INLINE_OPT void Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__1(Vtop_uart_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelfRef.__Vtogcov__data_i = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (1U & (IData)(vlSelfRef.data_i)));
    }
    if ((2U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelfRef.__Vtogcov__data_i = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (2U & (IData)(vlSelfRef.data_i)));
    }
    if ((4U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelfRef.__Vtogcov__data_i = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (4U & (IData)(vlSelfRef.data_i)));
    }
    if ((8U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelfRef.__Vtogcov__data_i = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (8U & (IData)(vlSelfRef.data_i)));
    }
    if ((0x10U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelfRef.__Vtogcov__data_i = ((0xefU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (0x10U & (IData)(vlSelfRef.data_i)));
    }
    if ((0x20U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelfRef.__Vtogcov__data_i = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (0x20U & (IData)(vlSelfRef.data_i)));
    }
    if ((0x40U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelfRef.__Vtogcov__data_i = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (0x40U & (IData)(vlSelfRef.data_i)));
    }
    if ((0x80U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelfRef.__Vtogcov__data_i = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (0x80U & (IData)(vlSelfRef.data_i)));
    }
}

VL_INLINE_OPT void Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__2(Vtop_uart_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.winc) ^ (IData)(vlSelfRef.__Vtogcov__winc))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelfRef.__Vtogcov__winc = vlSelfRef.winc;
    }
    if (((IData)(vlSelfRef.rinc) ^ (IData)(vlSelfRef.__Vtogcov__rinc))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelfRef.__Vtogcov__rinc = vlSelfRef.rinc;
    }
    if (((IData)(vlSelfRef.fifo_rst) ^ (IData)(vlSelfRef.__Vtogcov__fifo_rst))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelfRef.__Vtogcov__fifo_rst = vlSelfRef.fifo_rst;
    }
}

VL_INLINE_OPT void Vtop_uart_fifo___ico_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__0(Vtop_uart_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_uart_fifo___ico_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0x1eU & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (1U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((2U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0x1dU & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (2U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((4U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0x1bU & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (4U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((8U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0x17U & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (8U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((0x10U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0xfU & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (0x10U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((1U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelfRef.__Vtogcov__wptr = ((0x1eU & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (1U & (IData)(vlSelfRef.wptr)));
    }
    if ((2U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelfRef.__Vtogcov__wptr = ((0x1dU & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (2U & (IData)(vlSelfRef.wptr)));
    }
    if ((4U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelfRef.__Vtogcov__wptr = ((0x1bU & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (4U & (IData)(vlSelfRef.wptr)));
    }
    if ((8U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelfRef.__Vtogcov__wptr = ((0x17U & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (8U & (IData)(vlSelfRef.wptr)));
    }
    if ((0x10U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelfRef.__Vtogcov__wptr = ((0xfU & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (0x10U & (IData)(vlSelfRef.wptr)));
    }
    if ((1U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelfRef.__Vtogcov__rptr = ((0x1eU & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (1U & (IData)(vlSelfRef.rptr)));
    }
    if ((2U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelfRef.__Vtogcov__rptr = ((0x1dU & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (2U & (IData)(vlSelfRef.rptr)));
    }
    if ((4U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelfRef.__Vtogcov__rptr = ((0x1bU & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (4U & (IData)(vlSelfRef.rptr)));
    }
    if ((8U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelfRef.__Vtogcov__rptr = ((0x17U & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (8U & (IData)(vlSelfRef.rptr)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelfRef.__Vtogcov__rptr = ((0xfU & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (0x10U & (IData)(vlSelfRef.rptr)));
    }
    if ((1U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelfRef.__Vtogcov__data_o = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (1U & (IData)(vlSelfRef.data_o)));
    }
    if ((2U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelfRef.__Vtogcov__data_o = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (2U & (IData)(vlSelfRef.data_o)));
    }
    if ((4U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelfRef.__Vtogcov__data_o = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (4U & (IData)(vlSelfRef.data_o)));
    }
    if ((8U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelfRef.__Vtogcov__data_o = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (8U & (IData)(vlSelfRef.data_o)));
    }
    if ((0x10U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelfRef.__Vtogcov__data_o = ((0xefU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (0x10U & (IData)(vlSelfRef.data_o)));
    }
    if ((0x20U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelfRef.__Vtogcov__data_o = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (0x20U & (IData)(vlSelfRef.data_o)));
    }
    if ((0x40U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelfRef.__Vtogcov__data_o = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (0x40U & (IData)(vlSelfRef.data_o)));
    }
    if ((0x80U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelfRef.__Vtogcov__data_o = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (0x80U & (IData)(vlSelfRef.data_o)));
    }
    vlSelfRef.rempty = ((IData)(vlSelfRef.rptr) == (IData)(vlSelfRef.wptr));
    vlSelfRef.wfull = (((0x10U & ((~ ((IData)(vlSelfRef.wptr) 
                                      >> 4U)) << 4U)) 
                        | (0xfU & (IData)(vlSelfRef.wptr))) 
                       == (IData)(vlSelfRef.rptr));
    if ((1U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((2U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((4U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((8U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((0x10U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((0x20U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((0x40U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((0x80U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((1U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((2U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((4U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((8U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((0x10U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((0x20U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((0x40U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((0x80U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((1U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((2U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((4U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((8U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((0x10U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1244]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((0x20U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1245]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((0x40U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((0x80U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((1U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((2U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((4U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((8U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((0x10U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((0x20U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((0x40U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((0x80U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((1U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((2U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((4U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((8U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((0x10U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((0x20U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((0x40U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((0x80U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((1U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((2U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((4U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((8U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((0x10U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((0x20U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((0x40U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((0x80U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((1U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((2U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((4U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((8U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((0x10U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((0x20U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((0x40U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((0x80U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((1U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((2U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((4U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((8U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((0x10U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((0x20U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((0x40U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((0x80U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((1U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((2U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((4U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((8U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((0x10U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((0x20U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((0x40U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((0x80U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((1U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((2U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((4U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((8U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((0x10U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((0x20U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((0x40U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((0x80U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((1U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((2U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((4U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((8U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((1U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((2U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((4U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((8U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((1U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((2U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((4U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((8U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((1U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((2U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((4U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((8U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((1U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((2U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((4U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((8U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((1U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((2U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((4U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((8U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xfU]));
    }
    if (((IData)(vlSelfRef.rst_) ^ (IData)(vlSelfRef.__Vtogcov__rst_))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelfRef.__Vtogcov__rst_ = vlSelfRef.rst_;
    }
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelfRef.__Vtogcov__clk = vlSelfRef.clk;
    }
    if (((IData)(vlSelfRef.rinc) ^ (IData)(vlSelfRef.__Vtogcov__rinc))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelfRef.__Vtogcov__rinc = vlSelfRef.rinc;
    }
    if (((IData)(vlSelfRef.fifo_rst) ^ (IData)(vlSelfRef.__Vtogcov__fifo_rst))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelfRef.__Vtogcov__fifo_rst = vlSelfRef.fifo_rst;
    }
    if (((IData)(vlSelfRef.winc) ^ (IData)(vlSelfRef.__Vtogcov__winc))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelfRef.__Vtogcov__winc = vlSelfRef.winc;
    }
    if ((1U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelfRef.__Vtogcov__data_i = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (1U & (IData)(vlSelfRef.data_i)));
    }
    if ((2U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelfRef.__Vtogcov__data_i = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (2U & (IData)(vlSelfRef.data_i)));
    }
    if ((4U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelfRef.__Vtogcov__data_i = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (4U & (IData)(vlSelfRef.data_i)));
    }
    if ((8U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelfRef.__Vtogcov__data_i = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (8U & (IData)(vlSelfRef.data_i)));
    }
    if ((0x10U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelfRef.__Vtogcov__data_i = ((0xefU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (0x10U & (IData)(vlSelfRef.data_i)));
    }
    if ((0x20U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelfRef.__Vtogcov__data_i = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (0x20U & (IData)(vlSelfRef.data_i)));
    }
    if ((0x40U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelfRef.__Vtogcov__data_i = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (0x40U & (IData)(vlSelfRef.data_i)));
    }
    if ((0x80U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelfRef.__Vtogcov__data_i = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (0x80U & (IData)(vlSelfRef.data_i)));
    }
    if (((IData)(vlSelfRef.rempty) ^ (IData)(vlSelfRef.__Vtogcov__rempty))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelfRef.__Vtogcov__rempty = vlSelfRef.rempty;
    }
    if (((IData)(vlSelfRef.wfull) ^ (IData)(vlSelfRef.__Vtogcov__wfull))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelfRef.__Vtogcov__wfull = vlSelfRef.wfull;
    }
}

VL_INLINE_OPT void Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__0(Vtop_uart_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__rptr;
    __Vdly__rptr = 0;
    CData/*4:0*/ __Vdly__wptr;
    __Vdly__wptr = 0;
    CData/*7:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __Vdly__rptr = vlSelfRef.rptr;
    __Vdly__wptr = vlSelfRef.wptr;
    __VdlySet__ram__v0 = 0U;
    if (vlSelfRef.rst_) {
        if (vlSelfRef.fifo_rst) {
            ++(vlSymsp->__Vcoverage[1369]);
            __Vdly__wptr = 0U;
        } else {
            if (((IData)(vlSelfRef.winc) & (~ (IData)(vlSelfRef.wfull)))) {
                ++(vlSymsp->__Vcoverage[1364]);
                __VdlyVal__ram__v0 = vlSelfRef.data_i;
                __VdlyDim0__ram__v0 = (0xfU & (IData)(vlSelfRef.wptr));
                __VdlySet__ram__v0 = 1U;
                __Vdly__wptr = (0x1fU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.wptr)));
            } else {
                ++(vlSymsp->__Vcoverage[1365]);
            }
            if (((IData)(vlSelfRef.winc) & (~ (IData)(vlSelfRef.wfull)))) {
                ++(vlSymsp->__Vcoverage[1366]);
            }
            if (vlSelfRef.wfull) {
                ++(vlSymsp->__Vcoverage[1367]);
            }
            if ((1U & (~ (IData)(vlSelfRef.winc)))) {
                ++(vlSymsp->__Vcoverage[1368]);
            }
            ++(vlSymsp->__Vcoverage[1370]);
        }
        ++(vlSymsp->__Vcoverage[1372]);
    } else {
        ++(vlSymsp->__Vcoverage[1371]);
        __Vdly__wptr = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1373]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1374]);
    }
    ++(vlSymsp->__Vcoverage[1375]);
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.fifo_cnt = (0x1fU & ((IData)(vlSelfRef.wptr) 
                                       - (IData)(vlSelfRef.rptr)));
    } else {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelfRef.fifo_cnt = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1378]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1379]);
    }
    ++(vlSymsp->__Vcoverage[1380]);
    if (vlSelfRef.rst_) {
        if (vlSelfRef.fifo_rst) {
            ++(vlSymsp->__Vcoverage[1357]);
            __Vdly__rptr = 0U;
        } else {
            if (((IData)(vlSelfRef.rinc) & (~ (IData)(vlSelfRef.rempty)))) {
                ++(vlSymsp->__Vcoverage[1352]);
                vlSelfRef.data_o = vlSelfRef.ram[(0xfU 
                                                  & (IData)(vlSelfRef.rptr))];
                __Vdly__rptr = (0x1fU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.rptr)));
            } else {
                ++(vlSymsp->__Vcoverage[1353]);
            }
            if (((IData)(vlSelfRef.rinc) & (~ (IData)(vlSelfRef.rempty)))) {
                ++(vlSymsp->__Vcoverage[1354]);
            }
            if (vlSelfRef.rempty) {
                ++(vlSymsp->__Vcoverage[1355]);
            }
            if ((1U & (~ (IData)(vlSelfRef.rinc)))) {
                ++(vlSymsp->__Vcoverage[1356]);
            }
            ++(vlSymsp->__Vcoverage[1358]);
        }
        ++(vlSymsp->__Vcoverage[1360]);
    } else {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelfRef.data_o = 0U;
        __Vdly__rptr = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_)))) {
        ++(vlSymsp->__Vcoverage[1361]);
    }
    if (vlSelfRef.rst_) {
        ++(vlSymsp->__Vcoverage[1362]);
    }
    ++(vlSymsp->__Vcoverage[1363]);
    vlSelfRef.wptr = __Vdly__wptr;
    vlSelfRef.rptr = __Vdly__rptr;
    if (__VdlySet__ram__v0) {
        vlSelfRef.ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
    if ((1U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelfRef.__Vtogcov__wptr = ((0x1eU & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (1U & (IData)(vlSelfRef.wptr)));
    }
    if ((2U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelfRef.__Vtogcov__wptr = ((0x1dU & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (2U & (IData)(vlSelfRef.wptr)));
    }
    if ((4U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelfRef.__Vtogcov__wptr = ((0x1bU & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (4U & (IData)(vlSelfRef.wptr)));
    }
    if ((8U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelfRef.__Vtogcov__wptr = ((0x17U & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (8U & (IData)(vlSelfRef.wptr)));
    }
    if ((0x10U & ((IData)(vlSelfRef.wptr) ^ (IData)(vlSelfRef.__Vtogcov__wptr)))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelfRef.__Vtogcov__wptr = ((0xfU & (IData)(vlSelfRef.__Vtogcov__wptr)) 
                                     | (0x10U & (IData)(vlSelfRef.wptr)));
    }
    if ((1U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0x1eU & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (1U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((2U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0x1dU & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (2U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((4U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0x1bU & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (4U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((8U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0x17U & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (8U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((0x10U & ((IData)(vlSelfRef.fifo_cnt) ^ (IData)(vlSelfRef.__Vtogcov__fifo_cnt)))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelfRef.__Vtogcov__fifo_cnt = ((0xfU & (IData)(vlSelfRef.__Vtogcov__fifo_cnt)) 
                                         | (0x10U & (IData)(vlSelfRef.fifo_cnt)));
    }
    if ((1U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelfRef.__Vtogcov__rptr = ((0x1eU & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (1U & (IData)(vlSelfRef.rptr)));
    }
    if ((2U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelfRef.__Vtogcov__rptr = ((0x1dU & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (2U & (IData)(vlSelfRef.rptr)));
    }
    if ((4U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelfRef.__Vtogcov__rptr = ((0x1bU & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (4U & (IData)(vlSelfRef.rptr)));
    }
    if ((8U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelfRef.__Vtogcov__rptr = ((0x17U & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (8U & (IData)(vlSelfRef.rptr)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rptr) ^ (IData)(vlSelfRef.__Vtogcov__rptr)))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelfRef.__Vtogcov__rptr = ((0xfU & (IData)(vlSelfRef.__Vtogcov__rptr)) 
                                     | (0x10U & (IData)(vlSelfRef.rptr)));
    }
    vlSelfRef.rempty = ((IData)(vlSelfRef.rptr) == (IData)(vlSelfRef.wptr));
    vlSelfRef.wfull = (((0x10U & ((~ ((IData)(vlSelfRef.wptr) 
                                      >> 4U)) << 4U)) 
                        | (0xfU & (IData)(vlSelfRef.wptr))) 
                       == (IData)(vlSelfRef.rptr));
    if ((1U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelfRef.__Vtogcov__data_o = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (1U & (IData)(vlSelfRef.data_o)));
    }
    if ((2U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelfRef.__Vtogcov__data_o = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (2U & (IData)(vlSelfRef.data_o)));
    }
    if ((4U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelfRef.__Vtogcov__data_o = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (4U & (IData)(vlSelfRef.data_o)));
    }
    if ((8U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelfRef.__Vtogcov__data_o = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (8U & (IData)(vlSelfRef.data_o)));
    }
    if ((0x10U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelfRef.__Vtogcov__data_o = ((0xefU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (0x10U & (IData)(vlSelfRef.data_o)));
    }
    if ((0x20U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelfRef.__Vtogcov__data_o = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (0x20U & (IData)(vlSelfRef.data_o)));
    }
    if ((0x40U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelfRef.__Vtogcov__data_o = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (0x40U & (IData)(vlSelfRef.data_o)));
    }
    if ((0x80U & ((IData)(vlSelfRef.data_o) ^ (IData)(vlSelfRef.__Vtogcov__data_o)))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelfRef.__Vtogcov__data_o = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__data_o)) 
                                       | (0x80U & (IData)(vlSelfRef.data_o)));
    }
    if ((1U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((2U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((4U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((8U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
               [0U]))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((0x10U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((0x20U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((0x40U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((0x80U & (vlSelfRef.ram[0U] ^ vlSelfRef.__Vtogcov__ram
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelfRef.__Vtogcov__ram[0U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [0U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [0U]));
    }
    if ((1U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((2U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((4U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((8U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
               [1U]))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((0x10U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((0x20U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((0x40U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((0x80U & (vlSelfRef.ram[1U] ^ vlSelfRef.__Vtogcov__ram
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelfRef.__Vtogcov__ram[1U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [1U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [1U]));
    }
    if ((1U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((2U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((4U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((8U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
               [2U]))) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((0x10U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1244]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((0x20U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1245]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((0x40U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((0x80U & (vlSelfRef.ram[2U] ^ vlSelfRef.__Vtogcov__ram
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelfRef.__Vtogcov__ram[2U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [2U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [2U]));
    }
    if ((1U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((2U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((4U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((8U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
               [3U]))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((0x10U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((0x20U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((0x40U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((0x80U & (vlSelfRef.ram[3U] ^ vlSelfRef.__Vtogcov__ram
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlSelfRef.__Vtogcov__ram[3U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [3U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [3U]));
    }
    if ((1U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((2U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((4U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((8U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
               [4U]))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((0x10U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((0x20U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((0x40U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((0x80U & (vlSelfRef.ram[4U] ^ vlSelfRef.__Vtogcov__ram
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelfRef.__Vtogcov__ram[4U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [4U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [4U]));
    }
    if ((1U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((2U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((4U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((8U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
               [5U]))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((0x10U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((0x20U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((0x40U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((0x80U & (vlSelfRef.ram[5U] ^ vlSelfRef.__Vtogcov__ram
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelfRef.__Vtogcov__ram[5U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [5U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [5U]));
    }
    if ((1U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((2U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((4U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((8U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
               [6U]))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((0x10U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((0x20U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((0x40U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((0x80U & (vlSelfRef.ram[6U] ^ vlSelfRef.__Vtogcov__ram
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelfRef.__Vtogcov__ram[6U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [6U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [6U]));
    }
    if ((1U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((2U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((4U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((8U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
               [7U]))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((0x10U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((0x20U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((0x40U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((0x80U & (vlSelfRef.ram[7U] ^ vlSelfRef.__Vtogcov__ram
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelfRef.__Vtogcov__ram[7U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [7U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [7U]));
    }
    if ((1U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((2U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((4U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((8U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
               [8U]))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((0x10U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((0x20U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((0x40U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((0x80U & (vlSelfRef.ram[8U] ^ vlSelfRef.__Vtogcov__ram
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelfRef.__Vtogcov__ram[8U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [8U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [8U]));
    }
    if ((1U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xfeU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (1U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((2U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xfdU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (2U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((4U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xfbU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (4U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((8U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
               [9U]))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xf7U & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (8U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((0x10U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xefU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (0x10U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((0x20U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xdfU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (0x20U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((0x40U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0xbfU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (0x40U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((0x80U & (vlSelfRef.ram[9U] ^ vlSelfRef.__Vtogcov__ram
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelfRef.__Vtogcov__ram[9U] = ((0x7fU & vlSelfRef.__Vtogcov__ram
                                         [9U]) | (0x80U 
                                                  & vlSelfRef.ram
                                                  [9U]));
    }
    if ((1U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((2U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((4U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((8U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xaU] ^ vlSelfRef.__Vtogcov__ram
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelfRef.__Vtogcov__ram[0xaU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xaU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xaU]));
    }
    if ((1U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((2U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((4U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((8U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xbU] ^ vlSelfRef.__Vtogcov__ram
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelfRef.__Vtogcov__ram[0xbU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xbU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xbU]));
    }
    if ((1U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((2U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((4U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((8U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xcU] ^ vlSelfRef.__Vtogcov__ram
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelfRef.__Vtogcov__ram[0xcU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xcU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xcU]));
    }
    if ((1U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((2U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((4U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((8U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xdU] ^ vlSelfRef.__Vtogcov__ram
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelfRef.__Vtogcov__ram[0xdU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xdU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xdU]));
    }
    if ((1U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((2U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((4U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((8U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xeU] ^ vlSelfRef.__Vtogcov__ram
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelfRef.__Vtogcov__ram[0xeU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xeU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xeU]));
    }
    if ((1U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xfeU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (1U & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((2U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xfdU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (2U & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((4U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xfbU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (4U & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((8U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xf7U & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (8U & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((0x10U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xefU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (0x10U 
                                             & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((0x20U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xdfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (0x20U 
                                             & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((0x40U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0xbfU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (0x40U 
                                             & vlSelfRef.ram
                                             [0xfU]));
    }
    if ((0x80U & (vlSelfRef.ram[0xfU] ^ vlSelfRef.__Vtogcov__ram
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelfRef.__Vtogcov__ram[0xfU] = ((0x7fU & 
                                           vlSelfRef.__Vtogcov__ram
                                           [0xfU]) 
                                          | (0x80U 
                                             & vlSelfRef.ram
                                             [0xfU]));
    }
    if (((IData)(vlSelfRef.rempty) ^ (IData)(vlSelfRef.__Vtogcov__rempty))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelfRef.__Vtogcov__rempty = vlSelfRef.rempty;
    }
    if (((IData)(vlSelfRef.wfull) ^ (IData)(vlSelfRef.__Vtogcov__wfull))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelfRef.__Vtogcov__wfull = vlSelfRef.wfull;
    }
}

VL_INLINE_OPT void Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__1(Vtop_uart_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_uart_fifo___nba_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.winc) ^ (IData)(vlSelfRef.__Vtogcov__winc))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelfRef.__Vtogcov__winc = vlSelfRef.winc;
    }
    if ((1U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelfRef.__Vtogcov__data_i = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (1U & (IData)(vlSelfRef.data_i)));
    }
    if ((2U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelfRef.__Vtogcov__data_i = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (2U & (IData)(vlSelfRef.data_i)));
    }
    if ((4U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelfRef.__Vtogcov__data_i = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (4U & (IData)(vlSelfRef.data_i)));
    }
    if ((8U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelfRef.__Vtogcov__data_i = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (8U & (IData)(vlSelfRef.data_i)));
    }
    if ((0x10U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelfRef.__Vtogcov__data_i = ((0xefU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (0x10U & (IData)(vlSelfRef.data_i)));
    }
    if ((0x20U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelfRef.__Vtogcov__data_i = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (0x20U & (IData)(vlSelfRef.data_i)));
    }
    if ((0x40U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelfRef.__Vtogcov__data_i = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (0x40U & (IData)(vlSelfRef.data_i)));
    }
    if ((0x80U & ((IData)(vlSelfRef.data_i) ^ (IData)(vlSelfRef.__Vtogcov__data_i)))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelfRef.__Vtogcov__data_i = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__data_i)) 
                                       | (0x80U & (IData)(vlSelfRef.data_i)));
    }
    if (((IData)(vlSelfRef.rinc) ^ (IData)(vlSelfRef.__Vtogcov__rinc))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelfRef.__Vtogcov__rinc = vlSelfRef.rinc;
    }
    if (((IData)(vlSelfRef.fifo_rst) ^ (IData)(vlSelfRef.__Vtogcov__fifo_rst))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelfRef.__Vtogcov__fifo_rst = vlSelfRef.fifo_rst;
    }
}
