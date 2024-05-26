#include QMK_KEYBOARD_H
#include "features/achordion.h"

enum sofle_layers {
_QWERTY,
_SYMBOL,
_NUMNAV,
_FNKEY,
_MULTIMEDIA,
_NUM
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] =
LAYOUT(
/* Number Row */
KC_GRV, KC_HOME, KC_END, KC_PGUP, KC_PGDN, KC_GRV,
KC_0, KC_LBRC, KC_RBRC, KC_BSLS, KC_MINS, KC_EQL,
/* Qwerty Row */
OSM(MOD_LSFT), LSFT_T(KC_Q), KC_W, LGUI_T(KC_E), KC_R, KC_T,
KC_Y, KC_U, LGUI_T(KC_I), LT(_NUM,KC_O), LSFT_T(KC_P), QK_CAPS_WORD_TOGGLE,
/* Home Row */
KC_ESC, LSFT_T(KC_A), LGUI_T(KC_S), LALT_T(KC_D), LCTL_T(KC_F), KC_G,
KC_H, LCTL_T(KC_J), LALT_T(KC_K), LGUI_T(KC_L), LSFT_T(KC_SCLN), KC_QUOT,
/* Zxc Row (Left) */
QK_CAPS_WORD_TOGGLE, KC_Z, KC_X, KC_C, KC_V, KC_B,
/* Encoder presses */
KC_MPLY, KC_NO,
/* Zxc Row (Right) */
KC_N, LT(_NUM,KC_M), LT(_NUM,KC_COMM), LT(_NUM,KC_DOT), KC_SLSH, KC_RSFT,
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
KC_TRNS, KC_NO, KC_PPLS, KC_EQL, KC_NO, KC_GRV, /* Don't use KC_PEQL (numpad equal) for compatiblity with windows */
KC_CIRC, KC_AMPR, KC_ASTR, KC_PIPE, KC_BSLS, KC_NO,
/* Home Row */
KC_TRNS, KC_EXLM, KC_PERC, KC_MINS, KC_COLN, KC_TILD,
KC_DLR, KC_LPRN, KC_LCBR, KC_LBRC, KC_SLSH, KC_DQUO,
/* Zxc Row (Left) */
KC_TRNS, KC_AT, KC_HASH, KC_UNDS, KC_NO, KC_NO,
/* Encoder Presses */
KC_TRNS, KC_TRNS,
/* Zxc Row (Right) */
KC_BSLS, KC_RBRC, KC_LT, KC_GT, KC_QUES, KC_QUOT,
/* Bottom Row */
KC_LGUI, KC_LALT, KC_LCTL, KC_TRNS, KC_TRNS,
KC_TRNS, KC_RPRN, KC_RCBR, KC_RBRC, KC_TRNS
),

[_NUMNAV] =
LAYOUT(
/* Number Row */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO,
/* Qwerty Row */
KC_PLUS, KC_MINS, KC_1, LGUI_T(KC_2), KC_3, KC_4,
KC_HOME, KC_PGUP, KC_UP, KC_PGDN, KC_NO, KC_NO,
/* Home Row */
KC_COMM, LSFT_T(KC_DOT), LGUI_T(KC_4), LALT_T(KC_5), LCTL_T(KC_6), KC_7,
KC_END, KC_LEFT, KC_DOWN, KC_RGHT, KC_LGUI, KC_NO,
/* Zxc Row (Left) */
KC_ASTR, KC_SLSH, KC_7, KC_8, KC_9, KC_BSLS,
/* Encoder Presses */
KC_TRNS, KC_TRNS,
/* Zxc Row (Right) */
KC_NO, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_NO,
/* Bottom Row */
KC_TRNS, KC_TRNS, KC_EQL, KC_0, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
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
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

[_MULTIMEDIA] =
LAYOUT(
/* Number Row */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
/* Qwerty Row */
KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,
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
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

[_NUM] = LAYOUT(
/* Number Row */
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
/* Qwerty Row */
KC_PLUS, KC_MINS, KC_1, LGUI_T(KC_2), KC_3, KC_4,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
/* Home Row */
KC_COMM, LSFT_T(KC_DOT), LGUI_T(KC_4), LALT_T(KC_5), LCTL_T(KC_6), KC_7,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
/* Zxc Row (Left) */
KC_ASTR, KC_SLSH, KC_7, KC_8, KC_9, KC_BSLS,
/* Encoder Presses */
KC_TRNS, KC_TRNS,
/* Zxc Row (Right) */
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
/* Bottom Row */
KC_TRNS, KC_TRNS, KC_EQL, KC_0, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
)

};

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (layer_state_is(_MULTIMEDIA) && index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
        return false;
    }

    if (index == 0) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_MS_WH_DOWN);
        } else {
            tap_code(KC_MS_WH_UP);
        }

    }
    return false;
}

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
    // Note oled can only fit 5 characters per line
    // Host Keyboard Layer Status
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("BASE\n"), false);
            break;
        case _SYMBOL:
            oled_write_P(PSTR("SYM\n"), false);
            break;
        case _NUMNAV:
            oled_write_P(PSTR("NMNAV"), false);
            break;
        case _FNKEY:
            oled_write_P(PSTR("FN\n"), false);
            break;
        case _MULTIMEDIA:
            oled_write_P(PSTR("MEDIA"), false);
            break;
        case _NUM:
            oled_write_P(PSTR("NUM\n"), false);
            break;
        default:
            oled_write_P(PSTR("?\n"), false);
    }

    oled_write_ln_P(PSTR(""), false);

    // Host Keyboard LED Status
    oled_write_P(PSTR("CAPSW"), is_caps_word_on());
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

  // Allow same hands for tab / tilde combos
  if (other_keycode == KC_TAB || other_keycode == KC_GRV || other_keycode == KC_TILD) {
      return true;
  }

  // Otherwise, follow the opposite hands rule.
  return achordion_opposite_hands(tap_hold_record, other_record);
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
  return 700;
}

bool apply_mod_if_holding(uint16_t mod_keycode, keyrecord_t* record) {
      if (!record->tap.count) { // if holding
        if (record->event.pressed) { // on hold press
          register_mods(MOD_BIT(mod_keycode));
        } else { // on hold release
          unregister_mods(MOD_BIT(mod_keycode));
        }
      }
      return true; // Continue normal handling
}


bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_achordion(keycode, record)) { return false; }

  // Your macros ...

  // num-mods layer
  switch (keycode) {
    case LT(_NUM,KC_DOT):
    case LT(_NUM,KC_O):
      // Behave as KC_DOT/KC_O on tap, LM(_NUM,MOD_LGUI) on hold
      return apply_mod_if_holding(KC_LGUI, record);
    case LT(_NUM,KC_COMM):
      return apply_mod_if_holding(KC_LALT, record);
    case LT(_NUM,KC_M):
      return apply_mod_if_holding(KC_LCTL, record);
  }

  return true;
}

// TODO try out typing streak?
// TODO combo for enabling caps?
// TODO think about how to do vim ctrl-e/y u/d

void matrix_scan_user(void) {
  achordion_task();
}
