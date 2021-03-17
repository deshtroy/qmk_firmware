/*
Copyright 2020 INFAMY BOARDS

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

#include "config_common.h"

/* USB DEVICE DESCRIPTOR PARAMETERS */
#define VENDOR_ID       0x2910 // INFAMY-01
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    INFAMY BOARDS
#define PRODUCT         ALEXI ACR 
#define DESCRIPTION     SPLIT ERGO COMPACT

/* MATRIX SIZE */
#define MATRIX_ROWS 5
#define MATRIX_COLS 13

/* MATRIX ASSIGNMENT */
#define MATRIX_ROW_PINS { F0, F1, B0, B1, B2 }
#define MATRIX_COL_PINS { D4, D5, D6, D3, D7, D2, B4, B5, B6, B7, C6, C7, B3 }
#define DIODE_DIRECTION COL2ROW

/* ROTARY ENCODER DEFINITIONS */
#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }
#define ENCODER_RESOLUTION 2

/* OLED DISPLAY ADDITIONAL DEFINITIONS */


/* TAP DANCE ADDITIONAL DEFINITIONS */
#define TAPPING_TERM 175

/* DEBOUNCE ALGO */
#define DEBOUNCE 5

/* RGB DEFINITIONS */
#define RGB_DI_PIN F6
#ifdef RGB_DI_PIN
    #define RGBLED_NUM 3
    #define RGBLIGHT_HUE_STEP 8
    #define RGBLIGHT_SAT_STEP 8
    #define RGBLIGHT_VAL_STEP 8
    #define RGBLIGHT_LIMIT_VAL 200 /* The maximum brightness level */
    #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
    #define RGBLIGHT_ANIMATIONS

#endif