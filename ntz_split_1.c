#include QMK_KEYBOARD_H
#include "quantum.h"
#include "ntz_split_1.h"

uint8_t mod_state;

// https://docs.qmk.fm/#/feature_advanced_keycodes?id=alt-escape-for-alt-tab
bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
  mod_state = get_mods();

  switch (keycode)
  {
    case KC_LGUI:
        if (record->event.pressed)
        {
        // Press shift+tab when ctrl or alt are active
        if (mod_state & MOD_MASK_CTRL ||
            mod_state & MOD_MASK_ALT)
        {
            tap_code16(LSFT(KC_TAB));
            return false;
        }
        }
  }

  return true;
}
