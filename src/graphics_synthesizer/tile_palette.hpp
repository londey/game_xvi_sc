#pragma once

#include "color_value.hpp"
#include <systemc>

namespace gxvi
{
/// @brief A palette of 2x2 color tiles for use in sprites and backgrounds
///
/// This module stores a palette of 2x2 color tiles for use in compressing sprite and background image tiles.
/// The palette is stored in a 2D array of 2x2 color tiles. The palette is indexed by a 6-bit index, 1-bit horizontal flip, and 1-bit vertical flip.
///
/// The palette is read as part of a horizontal scan out of a sprite or background image tile taking the x and y coordinates of the pixel to read.
class TilePalette : public sc_core::sc_module
{
public:
    SC_HAS_PROCESS(TilePalette);

    /// @brief Construct a new TilePalette module
    /// @param name The name of the module
    TilePalette(sc_core::sc_module_name name);

    /// @brief The 2x2 color tile type
    struct Tile
    {
        ColorValue color0;
        sc_dt::sc_uint<4> color1;
        sc_dt::sc_uint<4> color2;
        sc_dt::sc_uint<4> color3;
    };

    /// @brief The 2D array of 2x2 color tiles
    Tile tiles[64][2][2];

    /// @brief The 6-bit index of the tile to read
    sc_core::sc_in<sc_dt::sc_uint<6>> index;

    /// @brief The 1-bit horizontal flip of the tile to read
    sc_core::sc_in<sc_dt::sc_uint<1>> hflip;

    /// @brief The 1-bit vertical flip of the tile to read
    sc_core::sc_in<sc_dt::sc_uint<1>> vflip;

    /// @brief The 2x2 color tile to read
    sc_core::sc_out<Tile> tile;


};

}
