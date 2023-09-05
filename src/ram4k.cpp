#include "ram4k.hpp"

dmg::Ram4k::Ram4k(sc_core::sc_module_name name) :
    sc_core::sc_module{name}
{
    SC_METHOD(read_from_ram);
        sensitive << output_enable;

    SC_METHOD(write_to_ram);
        sensitive << write_enable;
}

void dmg::Ram4k::write_to_ram()
{
    auto index = this->address.read().to_uint();
    this->ram_data_[index] = this->data.read().to_uint();
}

void dmg::Ram4k::read_from_ram()
{
    auto index = this->address.read().to_uint();
    this->data.write(this->ram_data_[index]);
}
