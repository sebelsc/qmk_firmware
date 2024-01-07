/*
Copyright 2022 Owlab

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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_hot(
		KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,                             KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPC,
		KC_TAB,  LALT_T(KC_A), LCTL_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F),  ALL_T(KC_G),        ALL_T(KC_H),   RSFT_T(KC_J),    RGUI_T(KC_K),    RCTL_T(KC_L),    RALT_T(KC_SCLN),  KC_ENT,
		KC_LSFT, KC_SLSH, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                             KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_UP,  KC_RSFT,
		                    KC_LCTL, KC_LALT, LT(1,KC_BSPC),  LT(2,KC_TAB),                     LT(4,KC_ENT), LT(3,KC_SPC),   KC_LEFT, KC_DOWN, KC_RGHT
	),

	[1] = LAYOUT_hot(
		KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_BSPC,
		KC_TAB, KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO,                                              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,
		KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,
		KC_NO, KC_NO, KC_SPC,  KC_TRNS,                                                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	)
};
