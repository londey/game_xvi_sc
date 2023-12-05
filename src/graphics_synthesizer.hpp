#pragma once

#include <systemc>

namespace ultra16
{

/// @brief SystemC module for the graphics synthesizer.
///
/// This module is responsible for modeling the FPGA logic that will generating the video signal and composite the sprites and background layers.
/// It is connected to the CPU via an (SPI) command port that carries register writes.
class GraphicsSynthesizer : public sc_core::sc_module
{
// todo: input command port

};


}
