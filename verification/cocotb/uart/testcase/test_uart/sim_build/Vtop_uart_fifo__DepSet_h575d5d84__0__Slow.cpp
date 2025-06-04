// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_uart_fifo.h"

VL_ATTR_COLD void Vtop_uart_fifo___stl_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__0(Vtop_uart_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_uart_fifo___stl_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_rx__DOT__u_uart_rxfifo__0\n"); );
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
    if (((IData)(vlSelfRef.winc) ^ (IData)(vlSelfRef.__Vtogcov__winc))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelfRef.__Vtogcov__winc = vlSelfRef.winc;
    }
    if (((IData)(vlSelfRef.rst_) ^ (IData)(vlSelfRef.__Vtogcov__rst_))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelfRef.__Vtogcov__rst_ = vlSelfRef.rst_;
    }
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelfRef.__Vtogcov__clk = vlSelfRef.clk;
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

VL_ATTR_COLD void Vtop_uart_fifo___stl_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__0(Vtop_uart_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_uart_fifo___stl_sequent__TOP__cocotb_top__DOT__u_uart_top__DOT__u_uart_tx__DOT__u_uart_txfifo__0\n"); );
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
    if (((IData)(vlSelfRef.rinc) ^ (IData)(vlSelfRef.__Vtogcov__rinc))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelfRef.__Vtogcov__rinc = vlSelfRef.rinc;
    }
    if (((IData)(vlSelfRef.rst_) ^ (IData)(vlSelfRef.__Vtogcov__rst_))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelfRef.__Vtogcov__rst_ = vlSelfRef.rst_;
    }
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelfRef.__Vtogcov__clk = vlSelfRef.clk;
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

VL_ATTR_COLD void Vtop_uart_fifo___configure_coverage(Vtop_uart_fifo* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_uart_fifo___configure_coverage\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1186]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 18, 17, "", "v_toggle/uart_fifo", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1187]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 19, 17, "", "v_toggle/uart_fifo", "rst_", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1188]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 20, 17, "", "v_toggle/uart_fifo", "fifo_rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1189]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 21, 17, "", "v_toggle/uart_fifo", "rinc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1190]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 22, 17, "", "v_toggle/uart_fifo", "winc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1191]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 23, 17, "", "v_toggle/uart_fifo", "data_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1192]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 23, 17, "", "v_toggle/uart_fifo", "data_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1193]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 23, 17, "", "v_toggle/uart_fifo", "data_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1194]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 23, 17, "", "v_toggle/uart_fifo", "data_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1195]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 23, 17, "", "v_toggle/uart_fifo", "data_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1196]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 23, 17, "", "v_toggle/uart_fifo", "data_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1197]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 23, 17, "", "v_toggle/uart_fifo", "data_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1198]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 23, 17, "", "v_toggle/uart_fifo", "data_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1199]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 27, 17, "", "v_toggle/uart_fifo", "data_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1200]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 27, 17, "", "v_toggle/uart_fifo", "data_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1201]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 27, 17, "", "v_toggle/uart_fifo", "data_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1202]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 27, 17, "", "v_toggle/uart_fifo", "data_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1203]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 27, 17, "", "v_toggle/uart_fifo", "data_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1204]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 27, 17, "", "v_toggle/uart_fifo", "data_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1205]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 27, 17, "", "v_toggle/uart_fifo", "data_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1206]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 27, 17, "", "v_toggle/uart_fifo", "data_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1207]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 25, 17, "", "v_toggle/uart_fifo", "wfull", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1208]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 26, 17, "", "v_toggle/uart_fifo", "rempty", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1209]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 28, 17, "", "v_toggle/uart_fifo", "fifo_cnt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1210]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 28, 17, "", "v_toggle/uart_fifo", "fifo_cnt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1211]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 28, 17, "", "v_toggle/uart_fifo", "fifo_cnt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1212]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 28, 17, "", "v_toggle/uart_fifo", "fifo_cnt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1213]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 28, 17, "", "v_toggle/uart_fifo", "fifo_cnt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1214]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 32, 17, "", "v_toggle/uart_fifo", "wptr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1215]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 32, 17, "", "v_toggle/uart_fifo", "wptr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1216]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 32, 17, "", "v_toggle/uart_fifo", "wptr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1217]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 32, 17, "", "v_toggle/uart_fifo", "wptr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1218]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 32, 17, "", "v_toggle/uart_fifo", "wptr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1219]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 33, 17, "", "v_toggle/uart_fifo", "rptr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1220]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 33, 17, "", "v_toggle/uart_fifo", "rptr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1221]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 33, 17, "", "v_toggle/uart_fifo", "rptr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1222]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 33, 17, "", "v_toggle/uart_fifo", "rptr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1223]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 33, 17, "", "v_toggle/uart_fifo", "rptr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1224]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1225]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[0][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1226]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[0][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1227]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[0][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1228]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[0][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1229]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[0][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1230]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[0][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1231]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[0][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1232]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[1][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1233]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[1][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1234]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[1][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1235]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[1][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1236]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[1][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1237]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[1][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1238]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[1][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1239]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[1][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1240]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[2][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1241]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[2][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1242]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[2][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1243]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[2][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1244]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[2][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1245]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[2][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1246]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[2][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1247]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[2][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1248]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[3][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1249]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[3][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1250]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[3][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1251]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[3][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1252]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[3][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1253]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[3][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1254]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[3][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1255]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[3][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1256]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[4][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1257]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[4][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1258]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[4][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1259]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[4][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1260]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[4][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1261]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[4][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1262]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[4][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1263]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[4][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1264]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[5][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1265]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[5][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1266]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[5][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1267]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[5][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1268]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[5][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1269]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[5][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1270]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[5][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1271]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[5][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1272]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[6][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1273]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[6][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1274]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[6][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1275]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[6][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1276]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[6][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1277]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[6][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1278]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[6][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1279]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[6][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1280]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[7][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1281]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[7][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1282]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[7][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1283]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[7][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1284]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[7][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1285]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[7][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1286]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[7][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1287]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[7][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1288]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[8][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1289]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[8][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1290]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[8][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1291]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[8][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1292]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[8][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1293]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[8][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1294]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[8][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1295]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[8][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1296]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[9][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1297]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[9][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1298]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[9][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1299]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[9][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1300]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[9][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1301]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[9][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1302]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[9][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1303]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[9][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1304]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[10][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1305]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[10][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1306]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[10][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1307]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[10][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1308]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[10][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1309]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[10][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1310]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[10][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1311]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[10][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1312]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[11][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1313]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[11][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1314]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[11][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1315]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[11][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1316]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[11][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1317]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[11][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1318]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[11][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1319]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[11][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1320]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[12][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1321]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[12][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1322]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[12][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1323]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[12][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1324]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[12][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1325]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[12][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1326]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[12][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1327]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[12][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1328]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[13][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1329]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[13][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1330]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[13][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1331]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[13][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1332]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[13][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1333]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[13][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1334]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[13][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1335]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[13][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1336]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[14][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1337]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[14][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1338]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[14][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1339]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[14][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1340]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[14][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1341]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[14][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1342]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[14][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1343]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[14][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1344]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[15][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1345]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[15][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1346]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[15][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1347]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[15][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1348]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[15][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1349]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[15][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1350]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[15][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1351]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 34, 17, "", "v_toggle/uart_fifo", "ram[15][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1352]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 47, 13, "", "v_branch/uart_fifo", "if", "47-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1353]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 47, 14, "", "v_branch/uart_fifo", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1354]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 47, 21, "", "v_expr/uart_fifo", "(rinc==1 && rempty==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1355]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 47, 21, "", "v_expr/uart_fifo", "(rempty==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1356]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 47, 21, "", "v_expr/uart_fifo", "(rinc==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1357]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 43, 9, "", "v_branch/uart_fifo", "if", "43-44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1358]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 43, 10, "", "v_branch/uart_fifo", "else", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1359]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 38, 5, "", "v_branch/uart_fifo", "if", "38-40");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1360]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 38, 6, "", "v_branch/uart_fifo", "else", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1361]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 38, 8, "", "v_expr/uart_fifo", "(rst_==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1362]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 38, 8, "", "v_expr/uart_fifo", "(rst_==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1363]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 37, 1, "", "v_line/uart_fifo", "block", "37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1364]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 65, 13, "", "v_branch/uart_fifo", "if", "65-67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1365]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 65, 14, "", "v_branch/uart_fifo", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1366]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 65, 21, "", "v_expr/uart_fifo", "(winc==1 && wfull==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1367]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 65, 21, "", "v_expr/uart_fifo", "(wfull==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1368]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 65, 21, "", "v_expr/uart_fifo", "(winc==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1369]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 61, 9, "", "v_branch/uart_fifo", "if", "61-62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1370]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 61, 10, "", "v_branch/uart_fifo", "else", "64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1371]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 57, 5, "", "v_branch/uart_fifo", "if", "57-58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1372]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 57, 6, "", "v_branch/uart_fifo", "else", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1373]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 57, 8, "", "v_expr/uart_fifo", "(rst_==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1374]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 57, 8, "", "v_expr/uart_fifo", "(rst_==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1375]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 56, 1, "", "v_line/uart_fifo", "block", "56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1376]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 75, 5, "", "v_branch/uart_fifo", "if", "75-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1377]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 75, 6, "", "v_branch/uart_fifo", "else", "78-79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1378]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 75, 8, "", "v_expr/uart_fifo", "(rst_==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1379]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 75, 8, "", "v_expr/uart_fifo", "(rst_==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1380]), first, "/mnt/e/my_share/ic_prj/project/rtl/uart/uart_fifo.v", 74, 1, "", "v_line/uart_fifo", "block", "74");
}
