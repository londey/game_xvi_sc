#pragma once

#include <array>
#include <systemc>

namespace dmg
{

/// @brief 4KiB RAM
///
/// 
/// 
struct Ram4k : public sc_core::sc_module
{
    SC_HAS_PROCESS(Ram4k);

    sc_core::sc_in<sc_dt::sc_uint<13>> address;
    sc_core::sc_inout<sc_dt::sc_uint<8>> data;

    sc_core::sc_in<bool> write_enable;
    sc_core::sc_in<bool> output_enable;

    Ram4k(sc_core::sc_module_name name);

    void write_to_ram();
    void read_from_ram();

private:
    std::array<sc_dt::sc_uint<8>, 8192> ram_data_;
};


}
