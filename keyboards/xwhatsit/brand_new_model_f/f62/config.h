#pragma once

/* Top layer when Dynamic keymap layers are set */
#define DYNAMIC_TOP_LAYER ((DYNAMIC_KEYMAP_LAYER_COUNT> 0)? DYNAMIC_KEYMAP_LAYER_COUNT-1:0)
/* To add more layers undef and define higher count in {controller}/config.h */
#define DYNAMIC_KEYMAP_LAYER_COUNT 0
