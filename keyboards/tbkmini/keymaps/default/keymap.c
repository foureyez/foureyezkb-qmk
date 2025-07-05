#include <sys/types.h>
#include QMK_KEYBOARD_H

#define _WIN 0
#define _MAC 1
#define _COLEMAK 2
#define _SPCL 3
#define _DUAL 4

enum custom_keycodes {
    VIM_QUIT = SAFE_RANGE,
    VIM_SAVE,
    VIM_CMD,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    //    ┌──────┬───┬───┬─────────────┬─────┬──────┐   ┌───────────┬──────┬─────┬───┬───┬─────────┐
    //    │ esc  │ q │ w │      e      │  r  │  t   │   │     y     │  u   │  i  │ o │ p │    \    │
    //    ├──────┼───┼───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────┼───┼───┼─────────┤
    //    │      │ a │ s │      d      │  f  │  g   │   │     h     │  j   │  k  │ l │ ; │ VIM_CMD │
    //    ├──────┼───┼───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────┼───┼───┼─────────┤
    //    │ lsft │ z │ x │      c      │  v  │  b   │   │     n     │  m   │  ,  │ . │ / │  rsft   │
    //    └──────┴───┴───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────┼───┴───┴─────────┘
    //                   │ LCTL_T(tab) │ spc │ lalt │   │ MO(_SPCL) │ bspc │ ent │
    //                   └─────────────┴─────┴──────┘   └───────────┴──────┴─────┘
    [_WIN] = LAYOUT_split_3x6_3(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, _______, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, VIM_CMD, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, LCTL_T(KC_TAB), KC_SPC, KC_LALT, MO(_SPCL), KC_BSPC, KC_ENT),

    //    ┌──────┬───┬───┬─────────────┬─────┬──────┐   ┌───────────┬──────┬─────┬───┬───┬─────────┐
    //    │ esc  │ q │ w │      e      │  r  │  t   │   │     y     │  u   │  i  │ o │ p │    \    │
    //    ├──────┼───┼───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────┼───┼───┼─────────┤
    //    │      │ a │ s │      d      │  f  │  g   │   │     h     │  j   │  k  │ l │ ; │ VIM_CMD │
    //    ├──────┼───┼───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────┼───┼───┼─────────┤
    //    │ lsft │ z │ x │      c      │  v  │  b   │   │     n     │  m   │  ,  │ . │ / │  rsft   │
    //    └──────┴───┴───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────┼───┴───┴─────────┘
    //                   │ LCMD_T(tab) │ spc │ lalt │   │ MO(_SPCL) │ bspc │ ent │
    //                   └─────────────┴─────┴──────┘   └───────────┴──────┴─────┘
    [_MAC] = LAYOUT_split_3x6_3(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, _______, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, VIM_CMD, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, LCMD_T(KC_TAB), KC_SPC, KC_LALT, MO(_SPCL), KC_BSPC, KC_ENT),

    //    ┌──────┬───┬───┬─────────────┬─────┬──────┐   ┌───────────┬──────┬─────────────┬───┬───┬─────────┐
    //    │ esc  │ q │ w │      f      │  p  │  g   │   │     j     │  l   │      u      │ y │ ; │    \    │
    //    ├──────┼───┼───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────────────┼───┼───┼─────────┤
    //    │      │ a │ r │      s      │  t  │  d   │   │     h     │  n   │      e      │ i │ o │ VIM_CMD │
    //    ├──────┼───┼───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────────────┼───┼───┼─────────┤
    //    │ lsft │ z │ x │      c      │  v  │  b   │   │     k     │  m   │      ,      │ . │ / │  rsft   │
    //    └──────┴───┴───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────────────┼───┴───┴─────────┘
    //                   │ LCMD_T(tab) │ spc │ lalt │   │ MO(_SPCL) │ bspc │ RSFT_T(ent) │
    //                   └─────────────┴─────┴──────┘   └───────────┴──────┴─────────────┘
    [_COLEMAK] = LAYOUT_split_3x6_3(KC_ESC, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSLS, _______, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, VIM_CMD, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, LCMD_T(KC_TAB), KC_SPC, KC_LALT, MO(_SPCL), KC_BSPC, RSFT_T(KC_ENT)),

    //    ┌─────┬───┬───┬──────────┬──────────┬───────────┐   ┌─────┬─────┬─────┬───┬────┬─────┐
    //    │  `  │ \ │ ( │    +     │    )     │     /     │   │ no  │  1  │  2  │ 3 │ no │ no  │
    //    ├─────┼───┼───┼──────────┼──────────┼───────────┤   ├─────┼─────┼─────┼───┼────┼─────┤
    //    │  ~  │ - │ { │    =     │    }     │     :     │   │  0  │  4  │  5  │ 6 │ no │ no  │
    //    ├─────┼───┼───┼──────────┼──────────┼───────────┤   ├─────┼─────┼─────┼───┼────┼─────┤
    //    │     │ _ │ [ │ LCTL(c)  │    ]     │     '     │   │ no  │  7  │  8  │ 9 │ no │     │
    //    └─────┴───┴───┼──────────┼──────────┼───────────┤   ├─────┼─────┼─────┼───┴────┴─────┘
    //                  │ VIM_SAVE │ VIM_SAVE │ MO(_DUAL) │   │     │     │     │
    //                  └──────────┴──────────┴───────────┘   └─────┴─────┴─────┘
    [_SPCL] = LAYOUT_split_3x6_3(KC_GRV, KC_BSLS, KC_LPRN, KC_PLUS, KC_RPRN, KC_SLSH, XXXXXXX, KC_1, KC_2, KC_3, XXXXXXX, XXXXXXX, KC_TILD, KC_MINS, KC_LCBR, KC_EQUAL, KC_RCBR, KC_COLN, KC_0, KC_4, KC_5, KC_6, XXXXXXX, XXXXXXX, _______, KC_UNDS, KC_LBRC, LCTL(KC_C), KC_RBRC, KC_QUOT, XXXXXXX, KC_7, KC_8, KC_9, XXXXXXX, _______, VIM_SAVE, VIM_SAVE, MO(_DUAL), _______, _______, _______),

    //    ┌─────────┬────┬────┬─────┬─────┬─────┐   ┌─────┬─────┬─────┬────┬────┬──────────────┐
    //    │ QK_BOOT │ no │ no │ no  │ no  │ no  │   │ f10 │ f1  │ f2  │ f3 │ no │   TG(_MAC)   │
    //    ├─────────┼────┼────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼────┼────┼──────────────┤
    //    │   no    │ no │ no │ no  │ no  │ no  │   │ f11 │ f4  │ f5  │ f6 │ no │ TG(_COLEMAK) │
    //    ├─────────┼────┼────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼────┼────┼──────────────┤
    //    │   no    │ no │ no │ no  │ no  │ no  │   │ f12 │ f7  │ f8  │ f9 │ no │      no      │
    //    └─────────┴────┴────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼────┴────┴──────────────┘
    //                        │     │     │     │   │     │     │     │
    //                        └─────┴─────┴─────┘   └─────┴─────┴─────┘
    [_DUAL] = LAYOUT_split_3x6_3(QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F10, KC_F1, KC_F2, KC_F3, XXXXXXX, TG(_MAC), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F11, KC_F4, KC_F5, KC_F6, XXXXXXX, TG(_COLEMAK), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F12, KC_F7, KC_F8, KC_F9, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______)};

const key_override_t left_override  = ko_make_basic(MOD_MASK_ALT, KC_H, KC_LEFT);
const key_override_t down_override  = ko_make_basic(MOD_MASK_ALT, KC_J, KC_DOWN);
const key_override_t up_override    = ko_make_basic(MOD_MASK_ALT, KC_K, KC_UP);
const key_override_t right_override = ko_make_basic(MOD_MASK_ALT, KC_L, KC_RIGHT);

const key_override_t *key_overrides[] = {&left_override, &right_override, &up_override, &down_override};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case VIM_SAVE:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("c") ":w" SS_TAP(X_ENTER));
                return false;
            }
            break;
        case VIM_CMD:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("c") ":");
                return false;
            }
            break;
        case VIM_QUIT:
            if (record->event.pressed) {
                send_string(SS_LCTL("c") ":wqa!" SS_TAP(X_ENTER));
                return false;
            }
            break;
    }
    return true;
}
