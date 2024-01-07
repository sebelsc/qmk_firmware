#include QMK_KEYBOARD_H
#include "features/achordion.h"


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, LALT_T(KC_S), LCTL_T(KC_D), LGUI_T(KC_F), ALL_T(KC_G), ALL_T(KC_H), RGUI_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), KC_SCLN, LSFT_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, RSFT_T(KC_SLSH), LT(1,KC_BSPC), LT(2,KC_TAB), LT(4,KC_ENT), LT(3,KC_SPC)),

[_LAYER1] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_DOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_0, KC_1, KC_2, KC_3, KC_COMM, KC_TRNS, KC_NO, KC_NO, KC_TRNS),

[_LAYER2] = LAYOUT(KC_NO, KC_UNDO, KC_PSTE, KC_COPY, KC_CUT, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_LALT, KC_LCTL, KC_LGUI, OSM(MOD_HYPR), KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, KC_NO, KC_ESC, KC_TRNS),

[_LAYER3] = LAYOUT(KC_UNDS, KC_MINS, KC_ASTR, KC_AMPR, KC_EQL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DQUO, KC_CIRC, KC_PERC, KC_DLR, KC_PLUS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TILD, KC_HASH, KC_AT, KC_EXLM, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

[_LAYER4] = LAYOUT(KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_RGUI, KC_RCTL, KC_RALT, KC_NO, KC_LT, KC_GT, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO)

};

void matrix_scan_user(void) {
  achordion_task();
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_achordion(keycode, record)) { return false; }
  // Your macros ...

  return true;
}
