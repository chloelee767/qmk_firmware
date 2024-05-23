#include QMK_KEYBOARD_H
#include "features/achordion.h"

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
QK_CAPS_WORD_TOGGLE, KC_Z, KC_X, KC_C, KC_V, KC_B,
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

#ifdef CAPS_WORD_ENABLE
bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_MINS:
        case KC_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}
#endif


#ifdef OLED_ENABLE
void custom_print_status(void) {
    // Host Keyboard Layer Status
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_ln_P(PSTR("BASE"), false);
            break;
        case _SYMBOL:
            oled_write_ln_P(PSTR("SYM"), false);
            break;
        case _NUMNAV:
            oled_write_ln_P(PSTR("NMNAV"), false);
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
    oled_write_P(PSTR("CAPSW"), is_caps_word_on());
    led_t led_state = host_keyboard_led_state();
    oled_write_P(PSTR("C"), led_state.caps_lock);
}

/* Copied from ../../sofle.c */
static void custom_render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };
    oled_write_P(qmk_logo, false);
}


bool oled_task_user(void) {
    if (is_keyboard_master()) {
        custom_print_status();
    } else {
        custom_render_logo();
    }
    return false;
}
#endif

bool achordion_chord(uint16_t tap_hold_keycode,
                     keyrecord_t* tap_hold_record,
                     uint16_t other_keycode,
                     keyrecord_t* other_record) {

  // Allow same-hand holds for thumb key holds.
  if (tap_hold_record->event.key.row == 4 || tap_hold_record->event.key.row == 9) {
      return true;
  }

  // Otherwise, follow the opposite hands rule.
  return achordion_opposite_hands(tap_hold_record, other_record);
}


bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_achordion(keycode, record)) { return false; }
  // Your macros ...

  return true;
}

void matrix_scan_user(void) {
  achordion_task();
}
