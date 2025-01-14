// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT(
                 KC_UP,
        KC_LEFT, KC_C,    KC_RIGHT,          KC_A,    KC_B,
                 KC_DOWN
    )
};
