#include "background_layer.hpp"


ultra16::BackgroundLayer::BackgroundLayer(sc_core::sc_module_name name) :
    sc_core::sc_module{name},
    color_palette_{"color_palette"}
{
}
