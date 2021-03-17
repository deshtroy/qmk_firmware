/* Copyright 2020 HYXCC
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


	/* LXII KEYBOARD - PHYS LO
 	
	 ____	____   ____   ____   ____	____   ____			____	____   ____   ____   ____	____   ____
	|ESC|  | 1 |  | 2 |  | 3 |  | 4 |  | 5 |  | 6 |		   | 7 |   | 8 |  | 9 |  | 0 |  | - |  | = |  |DEL|
	‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾ 		   ‾‾‾‾    ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾
	     _______   ____   ____   ____	____   ____		 ____	____   ____   ____   ____	____   _____
	    | TAB  |  | q |  | w |  | e |  | r |  | t |	    | y |  | u |  | i |  | o |  | p |  |;X'|  |BSPC|
	    ‾‾‾‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾ 	    ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾‾
         _______   ____   ____   ____	____   ____		 ____	____   ____   ____   ____	______   ____
	    | CAPS |  | a |  | s |  | d |  | f |  | g |	    | h |  | j |  | k |  | l |  | p |  |ENTER|  |[X}|
	    ‾‾‾‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾ 	    ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾‾‾   ‾‾‾‾
	 _____	 _____   ____   ____   ____	  ____   ____		____	____   ____   ____   ____	____   _______
	|CTRL|  |SHFT|  | z |  | x |  | c |  | v |  | b |	   | n |   | m |  | , |  | . |  | / |  | UP|  | SHFT |
	‾‾‾‾‾   ‾‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾ 	   ‾‾‾‾    ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾‾‾‾
	    ____   ____   ____	    __________ __________	  __________ __________          ____   ____   ____   
	   |ALT|  |WIN|  |MO1|     |SPACEBAR1||SPACEBAR2|    |SPACEBAR3||SPACEBAR4|         |LFT|  |DWN|  |RGT|  
	   ‾‾‾‾   ‾‾‾‾   ‾‾‾‾      ‾‾‾‾‾‾‾‾‾‾ ‾‾‾‾‾‾‾‾‾‾     ‾‾‾‾‾‾‾‾‾‾ ‾‾‾‾‾‾‾‾‾‾          ‾‾‾‾   ‾‾‾‾   ‾‾‾‾  

	*/

#include QMK_KEYBOARD_H

#define _MAK 0
#define _KAU 1
#define _HIJAU 2
#define _WEKK 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_DEL, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_BSPC, 
		CTL_T(KC_BSPC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT, KC_A, 
		KC_LCTL, OSM(MOD_LSFT), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,  KC_UP, RSFT_T(KC_SLSH),
	    KC_LALT, KC_LGUI, MO(1), KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_LEFT, KC_DOWN, KC_RIGHT),

	[1] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[2] = LAYOUT(
		RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[3] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

};

void render_alexi_logo(void) {
  static const char PROGMEM alexi_logo[] = { 

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff, 0xff, 
0xff, 0xff, 0xfe, 0xfc, 0xf8, 0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xe7, 0x5f, 0xbf, 0x5f, 
0xe7, 0xff, 0x07, 0xff, 0x07, 0xff, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xfd, 0xfd, 0xfc, 0xff, 0xff, 0xff, 
0xfc, 0xff, 0xfc, 0xff, 0xfc, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x0f, 0x1f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x1f, 0x0f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x1f, 0x3f, 0x7f, 
0x7f, 0x3f, 0x1f, 0x0f, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

};
  oled_write_raw_P(alexi_logo, sizeof(alexi_logo));
}

void encoder_update_user(uint8_t index, bool clockwise) {

  if (index == 0) {
    switch (biton32(layer_state)) {
      case _MAK:
        if (clockwise) {
          tap_code(KC_VOLU);
        } else {
          tap_code(KC_VOLD);
        }
        break;

      case _KAU:
        if (clockwise) {
          tap_code(KC_PGDN);
        } else {
          tap_code(KC_PGUP);
        }
        break;

      case _HIJAU:
        if (clockwise) {
          tap_code16(LCTL(KC_MINS));
        } else {
          tap_code16(LCTL(KC_EQL));
        }
        break;

	 case _WEKK:
        if (clockwise) {
          tap_code(KC_DEL);
        } else {
          tap_code(KC_BSPC);
        }
        break;	

      default:
        // any other layer (shouldn't exist..) - volume up (CW) and down (CCW)
        if (clockwise) {
          tap_code(KC_VOLU);
        } else {
          tap_code(KC_VOLD);
        }
        break;   
    }
  }
}



#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
	return OLED_ROTATION_90;

}

void oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("ALEXI     "), false);

    switch (get_highest_layer(layer_state)) {
        case _MAK:
            render_alexi_logo();
            break;
        case _KAU:
            oled_write_P(PSTR("F-ROW     \n"), false);
            break;
        case _HIJAU:
            oled_write_P(PSTR("MOUSE     \n"), false);
            break;
		case _WEKK:
            oled_write_P(PSTR("TOOLS     \n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }
}	


#endif

