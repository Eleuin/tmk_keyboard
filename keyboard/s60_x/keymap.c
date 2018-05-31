#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* layer 0 */
    KEYMAP(
         GRV,    1,    2,    3,    4,    5,    6,    7,    8,    9,    0, MINS,  EQL, TRNS, BSPC, \
         TAB,    Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P, LBRC, RBRC, BSLS,       \
         ESC,    A,    S,    D,    F,    G,    H,    J,    K,    L, SCLN, QUOT,        ENT,       \
        LSFT,          Z,    X,    C,    V,    B,    N,    M, COMM,  DOT, SLSH,       RSFT, TRNS, \
        LCTL, LGUI, LALT,                    SPC,                   RALT,  FN0, RGUI, RCTL        ),
    /* layer 1 */
    KEYMAP(
        TRNS,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12, TRNS, TRNS, \
        TRNS, TRNS,   UP, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PSCR, PAUS, SLCK, TRNS,       \
        TRNS, LEFT, DOWN, RGHT, TRNS, TRNS, MUTE, VOLD, VOLU,  INS, HOME, PGUP,       TRNS,       \
        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  DEL,  END, PGDN,       TRNS, TRNS, \
        TRNS, TRNS, TRNS,                   TRNS,                   TRNS, TRNS, TRNS, TRNS        ),
};

const action_t PROGMEM fn_actions[] = {
    [0]  = ACTION_LAYER_MOMENTARY(1),
};
