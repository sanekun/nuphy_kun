/*
Copyright 2023 @ Nuphy <https://nuphy.com/>

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

// Default Layout *MAC*
[0] = LAYOUT_ansi_84(
	KC_GRV, TO(0), TO(2), TO(3), KC_F4, TO(4), KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_INS, GE_SWAP,
	KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, GE_NORM,
	KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_DEL, KC_BSLS,
	KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, LT(2, KC_SCLN), KC_QUOT, KC_ENT, KC_HOME,
	KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_END,
	MO(1), KC_LGUI, KC_LALT, KC_SPC, KC_RALT, _______, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

// FN1_PRESS_LAYER
[1] = LAYOUT_ansi_84(
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	_______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	KC_DEL, KC_HOME, KC_UP, KC_END, C(KC_LEFT), _______, _______, S(KC_HOME), S(KC_END), _______, KC_BSPC, KC_VOLD, KC_VOLU, KC_BSLS, _______,
	_______, KC_LEFT, KC_DOWN, KC_RGHT, C(KC_RGHT), _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_SCLN, _______, _______, _______,
	_______, KC_PGUP, KC_PGDN, KC_BSPC, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	_______, _______, _______, TO(2), _______, _______, _______, _______, _______, _______),

// FN1_TOGGLE_LAYER
[2] = LAYOUT_ansi_84(
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,	_______,
	_______, S(KC_9), S(KC_0), S(KC_8), S(KC_MINS), S(KC_8), _______, _______, _______, _______, _______, _______, _______, _______, _______,
	KC_DEL, KC_HOME, KC_UP, KC_END, C(KC_LEFT), _______, _______, S(KC_HOME), S(KC_END), _______, KC_BSPC, KC_VOLD, KC_VOLU, KC_BSLS, _______,
	_______, KC_LEFT, KC_DOWN, KC_RGHT, C(KC_RGHT), _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_SCLN, _______, _______, _______,
	_______, KC_PGUP, KC_PGDN, KC_BSPC, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	KC_CAPS, _______, _______, TO(0), _______, _______, _______, _______, _______, _______),

// NUMBERPAD_LAYER
[3] = LAYOUT_ansi_84(
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,	_______, _______, _______,
	_______, KC_7, KC_8, KC_9, _______, _______, _______, _______, _______, _______, _______, _______,	_______, _______, _______,
	_______, KC_4, KC_5, KC_6, _______, _______, _______, _______, _______, _______, _______, _______,	_______, _______,
	KC_0, KC_1, KC_2, KC_3, _______, _______, _______, _______, _______, _______, _______, _______,	_______, _______,
	_______, _______, _______, _______,	_______, _______, _______, _______, _______, _______),

// MOVE_LAYER
[4] = LAYOUT_ansi_84(
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, SIDE_VAI,
	_______, LNK_BLE1, LNK_BLE2, LNK_BLE3, LNK_RF, _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, RGB_TOG, SIDE_VAD,
	_______, _______, KC_MS_U, _______, KC_WH_U, _______, _______, _______, _______, _______, _______, _______,	_______, BAT_SHOW, SIDE_MOD,
	_______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______, _______, _______, _______, _______, _______, _______,	_______, SIDE_HUI,
	_______, KC_BRID, KC_BRIU, KC_VOLD, KC_VOLU, _______, _______, _______, KC_ACL0, KC_ACL1, KC_ACL2, _______,	RGB_VAI, _______,
	_______, _______, _______, KC_BTN1,	_______, RGB_HUD, RGB_HUI, RGB_RMOD, RGB_VAD, RGB_MOD),
};

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_DEL, S(KC_BSLS));
const key_override_t ESC_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_ESC, S(KC_GRV));

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
	&delete_key_override,
	&ESC_key_override,
	NULL // Null terminate the array of overrides!
};
