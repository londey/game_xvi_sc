#pragma once

#include <systemc>

namespace
{

/// @brief A single 16-bit color value (5 bits per channel, 1 bit alpha)
struct ColorValue
{
    sc_dt::sc_uint<5> red;
    sc_dt::sc_uint<5> green;
    sc_dt::sc_uint<5> blue;
    sc_dt::sc_uint<1> alpha;
};

}
