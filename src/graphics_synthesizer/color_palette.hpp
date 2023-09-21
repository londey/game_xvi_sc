#pragma once

#include "color_value.hpp"
#include <array>
#include <systemc>

namespace gxvi
{
/// @brief A palette of 2x2 color tiles for use in sprites and backgrounds
///
/// This module stores a palette of 2x2 color tiles for use in compressing sprite and background image tiles.
/// The palette is stored in a 2D array of 2x2 color tiles. The palette is indexed by a 6-bit index, 1-bit horizontal flip, and 1-bit vertical flip.
///
/// The palette is read as part of a horizontal scan out of a sprite or background image tile taking the x and y coordinates of the pixel to read.
class ColorPalette : public sc_core::sc_module
{
public:
    SC_HAS_PROCESS(ColorPalette);

    /// @brief Construct a new ColorPalette module
    /// @param name The name of the module
    ColorPalette(sc_core::sc_module_name name);

    /// @brief The 6-bit index of the tile to read
    sc_core::sc_in<sc_dt::sc_uint<6>> index;

    /// @brief The 2-bit corner of the tile to read
    ///
    /// 00b = top left
    /// 01b = top right
    /// 10b = bottom left
    /// 11b = bottom right
    sc_core::sc_in<sc_dt::sc_uint<2>> corner;

    /// @brief Set to true to write the new color value of the pixel at the given index and corner
    sc_core::sc_in<sc_dt::sc_uint<1>> write_enable;

    /// @brief The new color value of the pixel at the given index and corner if write enable is set
    sc_core::sc_out<ColorValue> in_color;

    /// @brief The color value of the pixel at the given index and corner
    sc_core::sc_out<ColorValue> out_color;

private:
    
    struct ColorTile
    {
        ColorValue top_left;
        ColorValue top_right;
        ColorValue bottom_left;
        ColorValue bottom_right;
    };

    std::array<ColorTile, 64> tiles_{};
};

}
