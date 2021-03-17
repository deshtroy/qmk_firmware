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
#pragma once

#include "quantum.h"

#define LAYOUT( \
    K0B, K0A, K08, K06, K04, K02, K00, K21, K23, K25, K27, K29, K2C, K2B,   	\
    K0C, K09, K07, K05, K03, K01, K20, K22, K24, K26, K28, K2A, K40,        	\
    K1C, K19, K17, K15, K13, K11, K31, K33, K35, K37, K39, K3C, 		       	\
    K1B, K1A, K18, K16, K14, K12, K10, K30, K32, K34, K36, K38, K3A, K3B, 		\
    K4A, K49, K48, K47, K46, K45, K44, K43, K42, K41							\
) \
{ \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B,   K0C   }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B,   K1C   }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   K2B,   K2C   }, \
    { K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37,   K38,   K39,   K3A,   K3B,   K3C   }, \
    { K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47,   K48,   K49,   K4A,   KC_NO, KC_NO }  \
}
