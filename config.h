/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// Keyboard would not work on cold computer boot without settings
#define SPLIT_WATCHDOG_ENABLE

#define VIAL_KEYBOARD_UID {0x5D, 0x57, 0x3F, 0xDE, 0xD0, 0xC5, 0x10, 0xA4}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {1, 2}

#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#define TAPPING_TERM 180
#define AUTO_SHIFT_TIMEOUT 200
#define MK_COMBINED
#define MOUSEKEY_INITIAL_SPEED 50
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_TIME_TO_MAX 42

//#define USE_MATRIX_I2C
#ifdef KEYBOARD_crkbd_rev1_legacy
#    undef USE_I2C
#    define USE_SERIAL
#endif

/* Select hand configuration */

#define MASTER_LEFT
//#define MASTER_RIGHT
//#define EE_HANDS

#define USE_SERIAL_PD2
#ifdef RGBLIGHT_ENABLE
#    undef RGBLIGHT_LED_COUNT
#    define RGBLIGHT_ANIMATIONS
#    define RGBLIGHT_LED_COUNT 54
#    undef RGBLED_SPLIT
#    define RGBLED_SPLIT \
        { 27, 27 }
#    define RGBLIGHT_LIMIT_VAL 120
#    define RGBLIGHT_HUE_STEP  10
#    define RGBLIGHT_SAT_STEP  17
#    define RGBLIGHT_VAL_STEP  17
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
