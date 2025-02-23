#include QMK_KEYBOARD_H
#include "sendstring_german_mac_iso.h"

enum planck_layers {
  _BASE,
  _LOWER,
  _RAISE,
  _UPPER,
  _SPECIAL
};

enum planck_keycodes {
  BTCK = SAFE_RANGE,
  TLDA,
  CRCM
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case BTCK:
        if (record->event.pressed) {
            SEND_STRING("`");
        }
        break;

    case TLDA:
        if (record->event.pressed) {
            SEND_STRING("~");
        }
        break;

    case CRCM:
        if (record->event.pressed) {
            tap_code(KC_NUBS);
            tap_code(KC_SPC);
        }
        break;
    }
    return true;
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define UPPER MO(_UPPER)
#define SPECIAL MO(_SPECIAL)

// Left-hand home row mods
#define HOME_A LSFT_T(KC_A)
#define HOME_S LCTL_T(KC_S)
#define HOME_D LALT_T(KC_D)
#define HOME_F LGUI_T(KC_F)

// Right-hand home row mods
#define HOME_J RGUI_T(KC_J)
#define HOME_K LALT_T(KC_K)
#define HOME_L RCTL_T(KC_L)
#define HOME_SCLN RSFT_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT_planck_grid(
	KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
	KC_ESC, HOME_A, HOME_S, HOME_D, HOME_F, KC_G, KC_H, HOME_J, HOME_K, HOME_L, HOME_SCLN, KC_QUOT,
	KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, SC_SENT,
	KC_NO, KC_LCTL, KC_LALT, KC_LGUI, LOWER, SPECIAL, KC_SPC, RAISE, KC_RGUI, KC_RALT, KC_RCTL, KC_NO
),
[_LOWER] = LAYOUT_planck_grid(
	KC_NO, LSFT(KC_MINS), KC_EXLM, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_MINS, KC_LBRC,
	KC_NO, KC_ASTR, KC_LPRN, KC_HASH, KC_DLR, KC_AMPR, LSA(KC_7), KC_4, KC_5, KC_6, KC_NO, KC_NO,
	KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, LALT(KC_7), KC_PERC, KC_1, KC_2, KC_3, KC_NO, SC_SENT,
	KC_NO, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_SPC, UPPER, KC_0, KC_NO, KC_NO, KC_NO
),
[_RAISE] = LAYOUT_planck_grid(
	CRCM, KC_NO, LSFT(KC_0), KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL,
	KC_NO, LALT(KC_8), LALT(KC_9), LSFT(KC_BSLS), LSFT(KC_2), BTCK, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_BSLS,
	KC_LSFT, KC_GRV, LSFT(KC_GRV), KC_NO, KC_NO, LSFT(KC_6), TLDA, KC_NO, KC_NO, KC_NO, KC_NO, SC_SENT,
	KC_NO, KC_LCTL, KC_LALT, KC_LGUI, UPPER, KC_NO, KC_SPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
),
[_UPPER] = LAYOUT_planck_grid(
	KC_NO, QK_BOOT, KC_NO, RGB_TOG, KC_NO, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_NO,
	KC_NO, LALT(KC_5), LALT(KC_6), KC_NO, KC_NO, KC_NO, KC_WH_R, KC_WH_U, KC_WH_D, KC_WH_L, KC_NO, KC_NO,
	KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, SC_SENT,
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_NO, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU
),
[_SPECIAL] = LAYOUT_planck_grid(
	KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO,
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, S(C(G(KC_4))), S(G(KC_4)), KC_NO, KC_NO, KC_NO,
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
)
};
