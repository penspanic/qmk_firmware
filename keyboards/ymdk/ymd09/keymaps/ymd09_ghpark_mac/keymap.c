#include QMK_KEYBOARD_H

// https://beta.docs.qmk.fm/using-qmk/simple-keycodes/keycodes_basic
// LGUI(LALT(KC_EJCT)) -> lock screen(original)
// LGUI(LSFT(KC_1)) -> my lock screen

// [wish list]
// context menu? 마우스 우 클릭 처리되는거

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(LGUI(LSFT(KC_1)), LGUI(S(KC_GRAVE)), LGUI(KC_GRAVE),
               KC_KP_4, KC_KP_5, KC_APP,
               LT(1, KC_MPLY), LT(2, KC_MFFD), KC_DELETE),

  [1] = LAYOUT(RGB_RMOD, RGB_VAI, KC_GESC,
               RGB_HUI, RGB_HUD, RGB_SAI,
               KC_TRNS, RGB_VAD, RGB_SAD),

  [2] = LAYOUT(RGB_RMOD, RESET, RGB_MOD,
               RGB_HUI, RGB_VAD, RGB_SAI,
               RGB_HUD, KC_TRNS, RGB_SAD),

};
