#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] =
LAYOUT(
/* Number Row */
KC_GRV, KC_HOME, KC_END, KC_PGUP, KC_PGDN, KC_GRV,
KC_NO, KC_LBRC, KC_RBRC, KC_BSLS, KC_MINS, KC_EQL,
/* Qwerty Row */
KC_TAB, KC_Q, KC_W, LGUI_T(KC_E), KC_R, KC_T,
KC_Y, KC_U, LGUI_T(KC_I), KC_O, KC_P, KC_0,
/* Home Row */
KC_ESC, LSFT_T(KC_A), LGUI_T(KC_S), LALT_T(KC_D), LCTL_T(KC_F), KC_G,
KC_H, LCTL_T(KC_J), LALT_T(KC_K), LGUI_T(KC_L), LSFT_T(KC_SCLN), KC_QUOT,
/* Zxc Row (Left) */
KC_CAPS, KC_Z, KC_X, KC_C, KC_V, KC_B,
/* Encoder presses */
KC_MPLY, KC_NO,
/* Zxc Row (Right) */
KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
/* Bottom Row */
KC_LGUI, KC_LALT, LT(3,KC_DEL), LT(1,KC_BSPC), LT(2,KC_TAB),
LT(1,KC_ENT), LT(2,KC_SPC), LT(3,KC_BSPC), KC_RALT, MO(4)
),

[1] = LAYOUT(
/* Number Row */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO,
/* Qwerty Row */
KC_TRNS, KC_NO, KC_PPLS, KC_PEQL, KC_NO, KC_GRV,
KC_CIRC, KC_AMPR, KC_ASTR, KC_PIPE, KC_BSLS, KC_NO,
/* Home Row */
KC_TRNS, KC_EXLM, KC_PERC, KC_MINS, KC_COLN, KC_TILD,
KC_DLR, KC_LPRN, KC_LCBR, KC_RPRN, KC_RCBR, KC_NO,
/* Zxc Row (Left) */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Encoder presses */
KC_NO, KC_TRNS,
/* Zxc Row (Right) */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Bottom Row */
KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO
),

[2] = LAYOUT(
/* Number Row */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_BSLS, KC_MINS, KC_1, LGUI_T(KC_2), KC_3, KC_4,
/* Qwerty Row */
KC_HOME, KC_PGUP, KC_UP, KC_PGDN, KC_NO, KC_NO,
KC_NO, KC_NO, KC_END, KC_LEFT, KC_DOWN, KC_RGHT,
/* Home Row */
KC_TRNS, LSFT_T(KC_4), LGUI_T(KC_4), LALT_T(KC_5), LCTL_T(KC_6), KC_7,
KC_END, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSLS, KC_NO,
/* Zxc Row (Left) */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Encoder presses */
KC_NO, KC_TRNS,
/* Zxc Row (Right) */
KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Bottom Row */
KC_0, KC_TRNS, KC_NO, KC_NO, KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
),

[3] = LAYOUT(
/* Number Row */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_F9, KC_F10, KC_F11, KC_F12, KC_F13, KC_NO,
/* Qwerty Row */
KC_LGUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Home Row */
KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_NO, KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Zxc Row (Left) */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Encoder presses */
KC_NO, KC_TRNS,
/* Zxc Row (Right) */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Bottom Row */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
),

[4] = LAYOUT(
/* Number Row */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Qwerty Row */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Home Row */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Zxc Row (Left) */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Encoder presses */
KC_NO, KC_TRNS,
/* Zxc Row (Right) */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Bottom Row */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
)

};
