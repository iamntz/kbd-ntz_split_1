// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _QWERTY     0
#define _SYMBOLS_1  1
#define _SYMBOLS_2  2
#define _NAV        5
#define _MEDIA      14
#define _NOOP       15

enum custom_keycodes {
    QWERTY = SAFE_RANGE,

    _MD_L1 = KC_LCTL,

    _MD_L2 = KC_LEFT_GUI,
    _MD_L3 = KC_TAB,
    _MD_L4 = LALT_T(KC_SPC),
    _MD_L5 = LT(_MEDIA, KC_BACKSPACE),

    _MD_R1=KC_RIGHT_GUI,
    _MD_R2=KC_SEMICOLON,
    _MD_R3=KC_BACKSPACE,
    _MD_R4=LT(_SYMBOLS_1,KC_ENT),
    _MD_R5=KC_BACKSPACE,

    LL_NAV = LT(_NAV, KC_SCLN),

    MK_S = MT(MOD_LALT, KC_S),
    MK_D = MT(MOD_LSFT, KC_D),
    MK_F = MT(MOD_LCTL, KC_F),

    MK_J = MT(MOD_RCTL, KC_J),
    MK_K = MT(MOD_RSFT, KC_K),
    MK_L = MT(MOD_LALT, KC_L),

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬─────────┬───────────┐
     KC_ESC,   KC_1,    KC_2,    KC_3,   KC_4,    KC_5,                               KC_6,   KC_7,    KC_8,    KC_9,   KC_0,    KC_EQUAL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼─────────┼───────────┤
     KC_GRAVE, KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,                               KC_Y,   KC_U,    KC_I,    KC_O,   KC_P,    KC_MINUS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼─────────┼───────────┤
     KC_LSFT,  KC_A,    MK_S,    MK_D,   MK_F,    KC_G,                               KC_H,   MK_J,    MK_K,    MK_L,   LL_NAV,  KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ┼────────┼────────┼────────┼────────┼─────────┼───────────┤
     _MD_L1,   KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,                               KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLASH,    _MD_R1,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴                          ┴───┬────┴───┬────┴───┬────┴────────┴─────────┴───────────┘
                                _MD_L2, _MD_L3, _MD_L4, _MD_L5,                _MD_R5 , _MD_R4, _MD_R3, _MD_R2
  ),

  [_SYMBOLS_1]  = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬─────────┬───────────┐
      KC_F1,   KC_F2,  KC_F3,   KC_F4,   KC_F5,   KC_F6,                             KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,    KC_F12,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼─────────┼───────────┤
     KC_NO,    KC_1,    KC_2,    KC_3,    KC_4,   KC_5,                               KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼─────────┼───────────┤
     KC_LSFT, KC_EXLM,  KC_AT,  KC_HASH, KC_DLR, KC_PERC,                           KC_CIRC,  KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ┼────────┼────────┼────────┼────────┼─────────┼───────────┤
      _MD_L1, KC_LBRC, KC_RBRC, KC_LT,  KC_GT,   KC_BSLS,                            KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,    _MD_R1,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴                          ┴───┬────┴───┬────┴───┬────┴────────┴─────────┴───────────┘
                                _MD_L2, _MD_L3, _MD_L4, _MD_L5,                  _MD_R5 , _MD_R4, _MD_R3, _MD_R2
  ),

  [_NAV]  = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬─────────┬───────────┐
     KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS,  QK_BOOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼─────────┼───────────┤
     KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_HOME, KC_PGDN,KC_PGUP, KC_END,  KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼─────────┼───────────┤
     KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_LEFT, KC_DOWN,  KC_UP, KC_RIGHT, LL_NAV,   KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ┼────────┼────────┼────────┼────────┼─────────┼───────────┤
     KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴                          ┴───┬────┴───┬────┴───┬────┴────────┴─────────┴───────────┘
                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),


  [_MEDIA]  = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬─────────┬───────────┐
      KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼─────────┼───────────┤
      KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼─────────┼───────────┤
      KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ┼────────┼────────┼────────┼────────┼─────────┼───────────┤
      KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴                          ┴───┬────┴───┬────┴───┬────┴────────┴─────────┴───────────┘
                                    KC_NO, KC_NO, KC_NO, KC_NO,                KC_NO, KC_NO, KC_NO, KC_NO
  ),


    [_NOOP]  = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬─────────┬───────────┐
      KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼─────────┼───────────┤
      KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼─────────┼───────────┤
      KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼                          ┼────────┼────────┼────────┼────────┼─────────┼───────────┤
      KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴                          ┴───┬────┴───┬────┴───┬────┴────────┴─────────┴───────────┘
                                    KC_NO, KC_NO, KC_NO, KC_NO,                KC_NO, KC_NO, KC_NO, KC_NO
  ),
};
