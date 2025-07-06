// Copyright 2020 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (clockwise) {
      tap_code(KC_VOLU);
  } else {
      tap_code(KC_VOLD);
  }
  return false;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
      KC_BRIGHTNESS_UP, KC_MEDIA_NEXT_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_PLAY_PAUSE, KC_MUTE,
      KC_BRIGHTNESS_DOWN, KC_MEDIA_PREV_TRACK, KC_MUTE, QK_BOOTLOADER
      )
};

