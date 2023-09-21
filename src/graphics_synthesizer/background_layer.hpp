#pragma once

#include "color_palette.hpp"
#include <systemc>

namespace gxvi
{

/// @brief This class is responsible for implementing a single background layer
///
/// This module is responsible for implementing a single background layer. It is responsible for reading the background tile map and background tile data from memory and outputting the background layer pixels.
/// 
/// The background layer outputs a single pixel per clock cycle in the form of a color pallet index and an index into that color palette including horizontal and vertical flip bits.
class BackgroundLayer : public sc_core::sc_module
{
public:
    SC_HAS_PROCESS(BackgroundLayer);

    /// @brief Construct a new BackgroundLayer module
    /// @param name The name of the module
    BackgroundLayer(sc_core::sc_module_name name);


private:
    ColorPalette palette_;
};


}
