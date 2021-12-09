open_project fm_demodulator
set_top fm_demodulator
add_files fm_demodulator.cpp
add_files fm_demodulator.h
add_files -tb fm_demodulator_test.cpp
open_solution "solution1"
set_part {xc7z020clg400-1}
create_clock -period 10
