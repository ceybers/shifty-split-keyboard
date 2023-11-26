#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
//  0,0                                                                                   
    QK_BOOT,           KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,         KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,         KC_F17,
//                    1,1      1,2      1,3      1,4      1,5
             KC_F14,  KC_A,    KC_R,    KC_S,    KC_T,    KC_G,         KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_F18,
//  
    KC_F15,           KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,         KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,         KC_F19,
//  
            KC_F16,   KC_TRNS, KC_TRNS, KC_ESC,  KC_SPC,  KC_TAB,       KC_DEL,  KC_ENT,  KC_SPC,  KC_TRNS, KC_TRNS, KC_F20
  ),
// [0] = LAYOUT(
// //  0,0               0,1      0,2      0,3      0,4      0,5           2,0      2,1      2,2      2,3      2,4              2,5
//     KC_F13,           KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,         KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,         KC_F17,
// //           0,6      0,7      0,8      0,9      0,10     0,11          2,6      2,7      2,8      2,9      2,10     2,11
//              KC_F14,  KC_A,    KC_R,    KC_S,    KC_T,    KC_G,         KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_F18,
// //  1,0               1,1      1,2      1,3      1,4      1,5           3,0      3,1      3,2      3,3      3,4              3,5
//     KC_F15,           KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,         KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,         KC_F19,
// //           1,6       1,7      1,8      1,9      1,10     1,11          3,6      3,7      3,8      3,9      3,10     3,11
//             KC_F16,   KC_TRNS, KC_TRNS, KC_ESC,  KC_SPC,  KC_TAB,       KC_DEL,  KC_ENT,  KC_SPC,  KC_TRNS, KC_TRNS, KC_F20
//   ),
};
