// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __fir_fir_Pipeline_VITIS_LOOP_21_1_fir_int_int_c_H__
#define __fir_fir_Pipeline_VITIS_LOOP_21_1_fir_int_int_c_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct fir_fir_Pipeline_VITIS_LOOP_21_1_fir_int_int_c_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 11;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(fir_fir_Pipeline_VITIS_LOOP_21_1_fir_int_int_c_ram) {
        ram[0] = "0b00000000000000000000000000110101";
        ram[1] = "0b00000000000000000000000000000000";
        ram[2] = "0b11111111111111111111111110100101";
        ram[3] = "0b00000000000000000000000000000000";
        ram[4] = "0b00000000000000000000000100111001";
        ram[5] = "0b00000000000000000000000111110100";
        ram[6] = "0b00000000000000000000000100111001";
        ram[7] = "0b00000000000000000000000000000000";
        ram[8] = "0b11111111111111111111111110100101";
        ram[9] = "0b00000000000000000000000000000000";
        ram[10] = "0b00000000000000000000000000110101";


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


SC_MODULE(fir_fir_Pipeline_VITIS_LOOP_21_1_fir_int_int_c) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 11;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


fir_fir_Pipeline_VITIS_LOOP_21_1_fir_int_int_c_ram* meminst;


SC_CTOR(fir_fir_Pipeline_VITIS_LOOP_21_1_fir_int_int_c) {
meminst = new fir_fir_Pipeline_VITIS_LOOP_21_1_fir_int_int_c_ram("fir_fir_Pipeline_VITIS_LOOP_21_1_fir_int_int_c_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~fir_fir_Pipeline_VITIS_LOOP_21_1_fir_int_int_c() {
    delete meminst;
}


};//endmodule
#endif
