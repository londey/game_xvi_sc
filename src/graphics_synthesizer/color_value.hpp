#pragma once

#include <systemc>

namespace ultra16
{

/// @brief A single 16-bit color value (5 bits per channel, 1 bit alpha)
struct ColorValue
{
    sc_dt::sc_uint<5> red;
    sc_dt::sc_uint<5> green;
    sc_dt::sc_uint<5> blue;
    sc_dt::sc_uint<1> alpha;
};

void sc_trace(sc_core::sc_trace_file *tf, const ColorValue &v, const std::string &name);

} // namespace ultra16
