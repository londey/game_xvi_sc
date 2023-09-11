#pragma once

#include <systemc>

namespace gxvi {

class SystemTop : public sc_core::sc_module
{
public:
    SC_HAS_PROCESS(SystemTop);

    SystemTop(sc_core::sc_module_name name);

};

}
