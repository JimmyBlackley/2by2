// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┐
     * │ 7 │ 8 │
     * ├───┼───┤
     * │ 4 │ 5 │
     * └───┴───┘
     */
    [0] = LAYOUT_ortho_2x2(
        KC_0,   KC_1,
        KC_3,   KC_4
    )
};
