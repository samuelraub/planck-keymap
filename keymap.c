#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x12(
	KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
	KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
	KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, SC_SENT,
	KC_NO, KC_LCTL, KC_LALT, KC_LGUI, MO(3), MO(1), KC_SPC, MO(4), KC_RGUI, KC_RALT, KC_RCTL, KC_NO
	),
	[1] = LAYOUT_ortho_4x12(
	KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO,
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, S(C(G(KC_4))), S(G(KC_4)), KC_NO, KC_NO, KC_NO,
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
	),
	[3] = LAYOUT_ortho_4x12(
	KC_NO, LSFT(KC_MINS), KC_EXLM, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_MINS, KC_LBRC,
	KC_NO, KC_ASTR, KC_LPRN, KC_HASH, KC_DLR, KC_AMPR, LSA(KC_7), KC_4, KC_5, KC_6, KC_NO, KC_NO,
	KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, LALT(KC_7), KC_PERC, KC_1, KC_2, KC_3, KC_NO, SC_SENT,
	KC_NO, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_SPC, MO(6), KC_0, KC_NO, KC_NO, KC_NO
	),
	[4] = LAYOUT_ortho_4x12(
	KC_NUBS, KC_NO, LSFT(KC_0), KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL,
	KC_NO, LALT(KC_8), LALT(KC_9), LSFT(KC_BSLS), LSFT(KC_2), LSFT(KC_EQL), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_BSLS,
	KC_LSFT, KC_GRV, LSFT(KC_GRV), KC_NO, KC_NO, LSFT(KC_6), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, SC_SENT,
	KC_NO, KC_LCTL, KC_LALT, KC_LGUI, MO(6), KC_NO, KC_SPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
	),
	[6] = LAYOUT_ortho_4x12(
	KC_NO, QK_BOOT, KC_NO, RGB_TOG, KC_NO, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_NO,
	KC_NO, LALT(KC_5), LALT(KC_6), KC_NO, KC_NO, KC_NO, KC_WH_R, KC_WH_U, KC_WH_D, KC_WH_L, KC_NO, KC_NO,
	KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, SC_SENT,
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_NO, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU
	)
};
