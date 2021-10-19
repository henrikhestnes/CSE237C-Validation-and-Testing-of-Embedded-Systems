// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xcordiccart2pol.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XCordiccart2pol_CfgInitialize(XCordiccart2pol *InstancePtr, XCordiccart2pol_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XCordiccart2pol_Start(XCordiccart2pol *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCordiccart2pol_ReadReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_AP_CTRL) & 0x80;
    XCordiccart2pol_WriteReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XCordiccart2pol_IsDone(XCordiccart2pol *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCordiccart2pol_ReadReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XCordiccart2pol_IsIdle(XCordiccart2pol *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCordiccart2pol_ReadReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XCordiccart2pol_IsReady(XCordiccart2pol *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCordiccart2pol_ReadReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XCordiccart2pol_EnableAutoRestart(XCordiccart2pol *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCordiccart2pol_WriteReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XCordiccart2pol_DisableAutoRestart(XCordiccart2pol *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCordiccart2pol_WriteReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_AP_CTRL, 0);
}

void XCordiccart2pol_Set_x(XCordiccart2pol *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCordiccart2pol_WriteReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_X_DATA, Data);
}

u32 XCordiccart2pol_Get_x(XCordiccart2pol *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCordiccart2pol_ReadReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_X_DATA);
    return Data;
}

void XCordiccart2pol_Set_y(XCordiccart2pol *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCordiccart2pol_WriteReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_Y_DATA, Data);
}

u32 XCordiccart2pol_Get_y(XCordiccart2pol *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCordiccart2pol_ReadReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_Y_DATA);
    return Data;
}

u32 XCordiccart2pol_Get_r(XCordiccart2pol *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCordiccart2pol_ReadReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_R_DATA);
    return Data;
}

u32 XCordiccart2pol_Get_r_vld(XCordiccart2pol *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCordiccart2pol_ReadReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_R_CTRL);
    return Data & 0x1;
}

u32 XCordiccart2pol_Get_theta(XCordiccart2pol *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCordiccart2pol_ReadReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_THETA_DATA);
    return Data;
}

u32 XCordiccart2pol_Get_theta_vld(XCordiccart2pol *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCordiccart2pol_ReadReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_THETA_CTRL);
    return Data & 0x1;
}

void XCordiccart2pol_InterruptGlobalEnable(XCordiccart2pol *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCordiccart2pol_WriteReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_GIE, 1);
}

void XCordiccart2pol_InterruptGlobalDisable(XCordiccart2pol *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCordiccart2pol_WriteReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_GIE, 0);
}

void XCordiccart2pol_InterruptEnable(XCordiccart2pol *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XCordiccart2pol_ReadReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_IER);
    XCordiccart2pol_WriteReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_IER, Register | Mask);
}

void XCordiccart2pol_InterruptDisable(XCordiccart2pol *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XCordiccart2pol_ReadReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_IER);
    XCordiccart2pol_WriteReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_IER, Register & (~Mask));
}

void XCordiccart2pol_InterruptClear(XCordiccart2pol *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCordiccart2pol_WriteReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_ISR, Mask);
}

u32 XCordiccart2pol_InterruptGetEnabled(XCordiccart2pol *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCordiccart2pol_ReadReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_IER);
}

u32 XCordiccart2pol_InterruptGetStatus(XCordiccart2pol *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCordiccart2pol_ReadReg(InstancePtr->Control_BaseAddress, XCORDICCART2POL_CONTROL_ADDR_ISR);
}

