// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define XXX KC_NO

#define MIRYOKU_MAPPING( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
KC_ESCAPE,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  KC_MEDIA_PLAY_PAUSE, \
KC_AUDIO_VOL_UP,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  KC_MEDIA_FAST_FORWARD, \
KC_AUDIO_VOL_DOWN,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  KC_MEDIA_REWIND , \
                  K32,  K33,  K34,         K35,  K36,  K37 \
)


#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           \
LCTL_T(KC_A),      LALT_T(KC_R),      LGUI_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LGUI_T(KC_E),      LALT_T(KC_I),      LCTL_T(KC_O),      \
LT(U_BUTTON,KC_X), ALGR_T(KC_C),      KC_D,              KC_V,              KC_Z,              KC_K,              LT(U_HRV,KC_H),              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP


#define MIRYOKU_LAYER_HRV \
_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
_______,  _______,  KC_LBRC,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
KC_QUOT,  KC_SCLN,  KC_RBRC,  _______,  KC_BSLS,  _______,  _______,  _______,  _______,  _______,\
_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(HRV,    "Kvacice") \
MIRYOKU_X(FUN,    "Fun")

#define MIRYOKU_LAYERMAPPING_HRV MIRYOKU_MAPPING

