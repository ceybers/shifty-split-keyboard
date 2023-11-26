#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
    KC_A, KC_B,    KC_C,     KC_D, KC_E, KC_F,   KC_0, KC_1, KC_2, KC_3,    KC_4,    KC_5,
    KC_G, KC_H,    KC_I,     KC_J, KC_K, KC_L,   KC_6, KC_7, KC_8, KC_9,    KC_0,    KC_Z,
    KC_M, KC_N,    KC_O,     KC_P, KC_Q, KC_R,   KC_0, KC_1, KC_2, KC_3,    KC_4,    KC_5,
    KC_S, KC_TRNS, KC_TRNS , KC_V, KC_W, KC_X,   KC_6, KC_7, KC_8, KC_TRNS, KC_TRNS, KC_Z
  ),
};
