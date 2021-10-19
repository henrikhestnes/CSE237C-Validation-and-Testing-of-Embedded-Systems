// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read/COR)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - enable ap_done interrupt (Read/Write)
//        bit 1  - enable ap_ready interrupt (Read/Write)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - ap_done (COR/TOW)
//        bit 1  - ap_ready (COR/TOW)
//        others - reserved
// 0x10 : Data signal of x
//        bit 31~0 - x[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of y
//        bit 31~0 - y[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of r
//        bit 31~0 - r[31:0] (Read)
// 0x24 : Control signal of r
//        bit 0  - r_ap_vld (Read/COR)
//        others - reserved
// 0x30 : Data signal of theta
//        bit 31~0 - theta[31:0] (Read)
// 0x34 : Control signal of theta
//        bit 0  - theta_ap_vld (Read/COR)
//        others - reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define CONTROL_ADDR_AP_CTRL    0x00
#define CONTROL_ADDR_GIE        0x04
#define CONTROL_ADDR_IER        0x08
#define CONTROL_ADDR_ISR        0x0c
#define CONTROL_ADDR_X_DATA     0x10
#define CONTROL_BITS_X_DATA     32
#define CONTROL_ADDR_Y_DATA     0x18
#define CONTROL_BITS_Y_DATA     32
#define CONTROL_ADDR_R_DATA     0x20
#define CONTROL_BITS_R_DATA     32
#define CONTROL_ADDR_R_CTRL     0x24
#define CONTROL_ADDR_THETA_DATA 0x30
#define CONTROL_BITS_THETA_DATA 32
#define CONTROL_ADDR_THETA_CTRL 0x34
