// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __fir_fir_Pipeline_VITIS_LOOP_29_1_c_1_H__
#define __fir_fir_Pipeline_VITIS_LOOP_29_1_c_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct fir_fir_Pipeline_VITIS_LOOP_29_1_c_1_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 5;
  static const unsigned AddressRange = 64;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(fir_fir_Pipeline_VITIS_LOOP_29_1_c_1_ram) {
        ram[0] = "0b10110";
        ram[1] = "0b10101";
        ram[2] = "0b10101";
        ram[3] = "0b11000";
        ram[4] = "0b11101";
        ram[5] = "0b00011";
        ram[6] = "0b01000";
        ram[7] = "0b01011";
        ram[8] = "0b01011";
        for (unsigned i = 9; i < 17 ; i = i + 1) {
            ram[i] = "0b01010";
        }
        ram[17] = "0b01011";
        ram[18] = "0b01011";
        ram[19] = "0b01000";
        ram[20] = "0b00011";
        ram[21] = "0b11101";
        ram[22] = "0b11000";
        ram[23] = "0b10101";
        ram[24] = "0b10101";
        for (unsigned i = 25; i < 33 ; i = i + 1) {
            ram[i] = "0b10110";
        }
        ram[33] = "0b10101";
        ram[34] = "0b10101";
        ram[35] = "0b11000";
        ram[36] = "0b11101";
        ram[37] = "0b00011";
        ram[38] = "0b01000";
        ram[39] = "0b01011";
        ram[40] = "0b01011";
        for (unsigned i = 41; i < 64 ; i = i + 1) {
            ram[i] = "0b01010";
        }


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(fir_fir_Pipeline_VITIS_LOOP_29_1_c_1) {


static const unsigned DataWidth = 5;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


fir_fir_Pipeline_VITIS_LOOP_29_1_c_1_ram* meminst;


SC_CTOR(fir_fir_Pipeline_VITIS_LOOP_29_1_c_1) {
meminst = new fir_fir_Pipeline_VITIS_LOOP_29_1_c_1_ram("fir_fir_Pipeline_VITIS_LOOP_29_1_c_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~fir_fir_Pipeline_VITIS_LOOP_29_1_c_1() {
    delete meminst;
}


};//endmodule
#endif
