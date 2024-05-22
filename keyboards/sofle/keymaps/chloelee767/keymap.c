#include QMK_KEYBOARD_H

enum sofle_layers {
_QWERTY,
_SYMBOL,
_NUMNAV,
_FNKEY,
_MULTIMEDIA
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] =
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
KC_LGUI, KC_LALT, LT(_FNKEY,KC_DEL), LT(_SYMBOL,KC_BSPC), LT(_NUMNAV,KC_TAB),
LT(_SYMBOL,KC_ENT), LT(_NUMNAV,KC_SPC), LT(_FNKEY,KC_BSPC), KC_RALT, MO(_MULTIMEDIA)
),

[_SYMBOL] =
LAYOUT(
/* Number Row */
KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO,
/* Qwerty Row */
KC_TRNS, KC_NO, KC_PPLS, KC_PEQL, KC_NO, KC_GRV,
KC_CIRC, KC_AMPR, KC_ASTR, KC_PIPE, KC_BSLS, KC_NO,
/* Home Row */
KC_TRNS, KC_EXLM, KC_PERC, KC_MINS, KC_COLN, KC_TILD,
KC_DLR, KC_LPRN, KC_LCBR, KC_RBRC, KC_SLSH, KC_DQUO,
/* Zxc Row (Left) */
KC_TRNS, KC_AT, KC_HASH, KC_UNDS, KC_NO, KC_NO,
/* Encoder Presses */
KC_TRNS, KC_TRNS,
/* Zxc Row (Right) */
KC_BSLS, KC_LBRC, KC_COMM, KC_DOT, KC_QUES, KC_QUOT,
/* Bottom Row */
KC_LGUI, KC_LALT, KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS,
KC_RPRN, KC_RCBR, KC_TRNS, KC_TRNS
),

[_NUMNAV] =
LAYOUT(
/* Number Row */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO,
/* Qwerty Row */
KC_BSLS, KC_MINS, KC_1, LGUI_T(KC_2), KC_3, KC_4,
KC_HOME, KC_PGUP, KC_UP, KC_PGDN, KC_NO, KC_NO,
/* Home Row */
KC_DLR, LSFT_T(KC_DOT), LGUI_T(KC_4), LALT_T(KC_5), LCTL_T(KC_6), KC_7,
KC_END, KC_LEFT, KC_DOWN, KC_RGHT, KC_LGUI, KC_NO,
/* Zxc Row (Left) */
KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_BSLS,
/* Encoder Presses */
KC_TRNS, KC_TRNS,
/* Zxc Row (Right) */
KC_NO, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_NO,
/* Bottom Row */
KC_TRNS, KC_TRNS, KC_LGUI, KC_0, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

[_FNKEY] =
LAYOUT(
/* Number Row */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Qwerty Row */
KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_F13,
KC_NO, KC_NO, KC_LGUI, KC_NO, KC_NO, KC_NO,
/* Home Row */
KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO,
KC_NO, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_NO,
/* Zxc Row (Left) */
KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO,
/* Encoder Presses */
KC_TRNS, KC_TRNS,
/* Zxc Row (Right) */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Bottom Row */
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

[_MULTIMEDIA] =
LAYOUT(
/* Number Row */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Qwerty Row */
KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLD, KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Home Row */
KC_NO, KC_NO, KC_MRWD, KC_MPLY, KC_MFFD, KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Zxc Row (Left) */
KC_NO, KC_NO, KC_NO, KC_BRID, KC_BRIU, KC_NO,
/* Encoder Presses */
KC_MUTE, KC_TRNS,
/* Zxc Row (Right) */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Bottom Row */
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
)

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_QWERTY] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN), ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [_SYMBOL] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [_NUMNAV] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [_FNKEY] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [_MULTIMEDIA] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};
#endif

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_ln_P(PSTR("BASE"), false);
            break;
        case _SYMBOL:
            oled_write_ln_P(PSTR("SYM"), false);
            break;
        case _NUMNAV:
            oled_write_ln_P(PSTR("NUMNAV"), false);
            break;
        case _FNKEY:
            oled_write_ln_P(PSTR("FN"), false);
            break;
        case _MULTIMEDIA:
            oled_write_ln_P(PSTR("MEDIA"), false);
            break;
        default:
            oled_write_ln_P(PSTR("?"), false);
    }
    oled_write_ln_P("", false);

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(PSTR("CAPS"), led_state.caps_lock);

    return false;
}
#endif
