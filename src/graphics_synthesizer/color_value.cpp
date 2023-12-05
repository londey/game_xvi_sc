#include "color_value.hpp"

void ultra16::sc_trace(sc_core::sc_trace_file *tf, const ColorValue &v, const std::string &name)
{
    sc_trace(tf, v.red, name + "_red");
    sc_trace(tf, v.green, name + "_green");
    sc_trace(tf, v.blue, name + "_blue");
    sc_trace(tf, v.alpha, name + "_alpha");
}
