#pragma once

#include <systemc>

namespace ultra16
{

/// @brief This module decodes register writes to the graphics synthesizer via the SPI command port
///
/// The command port is a 16-bit wide port that is connected to the CPU. It is used to write to the graphics synthesizer's registers.
/// The command port is a SPI port with the following signals:
/// - MOSI: Master Out Slave In (CPU to graphics synthesizer)
/// - MISO: Master In Slave Out (graphics synthesizer to CPU)
/// - SCLK: Serial Clock
/// - CS: Chip Select
///
/// The command port is used to write to the graphics synthesizer's registers. The command port is 16 bits wide and is used to write to the following registers:
/// - R/W Scratch. A 16-bit scratch register that can be used for testing that the SPI link is working.
/// - Set background 0 X Scroll
/// - Set background 0 Y Scroll
/// - Set background 1 X Scroll
/// - Set background 1 Y Scroll
/// - Set background 0 tile palette start address. Tile palette must be 64-byte aligned and point to an array of 32 8x8 indexed color tiles. Each indexed color is a 2x2 color tile making the effective size of each background tile 16x16.
/// - Set background 1 tile palette start address. Tile palette must be 64-byte aligned and point to an array of 32 8x8 indexed color tiles. Each indexed color is a 2x2 color tile making the effective size of each background tile 16x16.
/// - Set background 0 tile map start address. A 64-byte aligned pointer to a 64x64 array of 8-bit tile indices. Each tile index is a 5-bit index into the background 0 tile palette, a horizontal flip bit, and a vertical flip bit, and a diagonal flip bit. <d><v><h><i4><i3><i2><i1><i0>
/// - Set background 1 tile map start address. A 64-byte aligned pointer to a 64x64 array of 8-bit tile indices. Each tile index is a 5-bit index into the background 1 tile palette, a horizontal flip bit, and a vertical flip bit, and a diagonal flip bit. <d><v><h><i4><i3><i2><i1><i0>
/// - Set background 0 color palette index (0-3)
/// - Set background 1 color palette index (0-3)
/// - Set background 0 color palette color (0-15)
/// - Set sprite buffer write location (byte offset into sprite buffer). Sets the sprite buffer write address register to the specified byte offset.
/// - Write sprite data. Writes 16-bits to the location pointed to by the sprite buffer write address register and increments the sprite buffer write address register by 2. If the sprite buffer write address register is larger than the sprite buffer size, the sprite buffer write address register is set to 0.
/// - Set graphics RAM write address register. Sets the graphics RAM write address register to the specified byte offset multiplied by 64.
/// - Offset graphics RAM write address register. Adds the specified signed 16-bit byte offset to the graphics RAM write address register.
/// - Write graphics RAM data. Writes 16-bits to the location pointed to by the graphics RAM write address register and increments the graphics RAM write address register by 2. If the graphics RAM write address register is larger than the graphics RAM size, the graphics RAM write address register is set to 0.

class CommandPortDecoder : public sc_core::sc_module
{



};


}
