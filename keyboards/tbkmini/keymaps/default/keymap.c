#include <sys/types.h>
#include QMK_KEYBOARD_H

#define _WIN       0
#define _MAC       1
#define _COLEMAK   2
#define _SPCL      3
#define _DUAL      4

enum custom_keycodes {
  VIM_QUIT= SAFE_RANGE,
  VIM_SAVE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//    ┌─────┬───┬───┬─────────────┬─────┬──────┐   ┌───────────┬──────────────┬─────┬───┬─────┬─────┐
//    │ esc │ q │ w │      e      │  r  │  t   │   │     y     │      u       │  i  │ o │  p  │     │
//    ├─────┼───┼───┼─────────────┼─────┼──────┤   ├───────────┼──────────────┼─────┼───┼─────┼─────┤
//    │     │ a │ s │      d      │  f  │  g   │   │     h     │      j       │  k  │ l │  ;  │     │
//    ├─────┼───┼───┼─────────────┼─────┼──────┤   ├───────────┼──────────────┼─────┼───┼─────┼─────┤
//    │     │ z │ x │      c      │  v  │  b   │   │     n     │      m       │  ,  │ . │     │     │
//    └─────┴───┴───┼─────────────┼─────┼──────┤   ├───────────┼──────────────┼─────┼───┴─────┴─────┘
//                  │ LCTL_T(tab) │ spc │ lalt │   │ MO(_SPCL) │ RSFT_T(bspc) │ ent │
//                  └─────────────┴─────┴──────┘   └───────────┴──────────────┴─────┘
[_WIN] = LAYOUT_split_3x6_3(
  KC_ESC  , KC_Q , KC_W , KC_E           , KC_R   , KC_T    ,     KC_Y      , KC_U            , KC_I    , KC_O   , KC_P    , _______,
  _______ , KC_A , KC_S , KC_D           , KC_F   , KC_G    ,     KC_H      , KC_J            , KC_K    , KC_L   , KC_SCLN , _______,
  _______ , KC_Z , KC_X , KC_C           , KC_V   , KC_B    ,     KC_N      , KC_M            , KC_COMM , KC_DOT , _______ , _______,
                          LCTL_T(KC_TAB) , KC_SPC , KC_LALT ,     MO(_SPCL) , RSFT_T(KC_BSPC) , KC_ENT
),

//    ┌──────┬───┬───┬─────────────┬─────┬──────┐   ┌───────────┬──────────────┬─────┬───┬─────┬─────┐
//    │ esc  │ q │ w │      e      │  r  │  t   │   │     y     │      u       │  i  │ o │  p  │     │
//    ├──────┼───┼───┼─────────────┼─────┼──────┤   ├───────────┼──────────────┼─────┼───┼─────┼─────┤
//    │      │ a │ s │      d      │  f  │  g   │   │     h     │      j       │  k  │ l │  ;  │     │
//    ├──────┼───┼───┼─────────────┼─────┼──────┤   ├───────────┼──────────────┼─────┼───┼─────┼─────┤
//    │ lsft │ z │ x │      c      │  v  │  b   │   │     n     │      m       │  ,  │ . │     │     │
//    └──────┴───┴───┼─────────────┼─────┼──────┤   ├───────────┼──────────────┼─────┼───┴─────┴─────┘
//                   │ LCMD_T(tab) │ spc │ lalt │   │ MO(_SPCL) │ RSFT_T(bspc) │ ent │
//                   └─────────────┴─────┴──────┘   └───────────┴──────────────┴─────┘
[_MAC] = LAYOUT_split_3x6_3(
  KC_ESC  , KC_Q , KC_W , KC_E           , KC_R   , KC_T    ,     KC_Y      , KC_U            , KC_I    , KC_O   , KC_P    , _______,
  _______ , KC_A , KC_S , KC_D           , KC_F   , KC_G    ,     KC_H      , KC_J            , KC_K    , KC_L   , KC_SCLN , _______,
  KC_LSFT , KC_Z , KC_X , KC_C           , KC_V   , KC_B    ,     KC_N      , KC_M            , KC_COMM , KC_DOT , _______ , _______,
                          LCMD_T(KC_TAB) , KC_SPC , KC_LALT ,     MO(_SPCL) , RSFT_T(KC_BSPC) , KC_ENT
),

//    ┌─────┬───┬───┬─────────────┬─────┬──────┐   ┌───────────┬──────┬─────────────┬───┬─────┬─────┐
//    │ esc │ q │ w │      f      │  p  │  g   │   │     j     │  l   │      u      │ y │  p  │     │
//    ├─────┼───┼───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────────────┼───┼─────┼─────┤
//    │     │ a │ s │      s      │  t  │  d   │   │     h     │  n   │      e      │ i │  o  │     │
//    ├─────┼───┼───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────────────┼───┼─────┼─────┤
//    │     │ z │ x │      c      │  v  │  b   │   │     k     │  m   │      ,      │ . │     │     │
//    └─────┴───┴───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────────────┼───┴─────┴─────┘
//                  │ LCMD_T(tab) │ spc │ lalt │   │ MO(_SPCL) │ bspc │ RSFT_T(ent) │
//                  └─────────────┴─────┴──────┘   └───────────┴──────┴─────────────┘
[_COLEMAK] = LAYOUT_split_3x6_3(
  KC_ESC  , KC_Q , KC_W , KC_F           , KC_P   , KC_G    ,     KC_J      , KC_L    , KC_U           , KC_Y   , KC_P    , _______,
  _______ , KC_A , KC_S , KC_S           , KC_T   , KC_D    ,     KC_H      , KC_N    , KC_E           , KC_I   , KC_O    , _______,
  _______ , KC_Z , KC_X , KC_C           , KC_V   , KC_B    ,     KC_K      , KC_M    , KC_COMM        , KC_DOT , _______ , _______,
                          LCMD_T(KC_TAB) , KC_SPC , KC_LALT ,     MO(_SPCL) , KC_BSPC , RSFT_T(KC_ENT)
),

//    ┌───┬─────┬───┬──────────┬──────┬───────────┐   ┌─────┬─────┬─────┬───┬────┬────┐
//    │ ` │     │ ( │    +     │  )   │     /     │   │ no  │  1  │  2  │ 3 │ no │ no │
//    ├───┼─────┼───┼──────────┼──────┼───────────┤   ├─────┼─────┼─────┼───┼────┼────┤
//    │ ~ │  -  │ { │    =     │  }   │     :     │   │ no  │  4  │  5  │ 6 │ 0  │ no │
//    ├───┼─────┼───┼──────────┼──────┼───────────┤   ├─────┼─────┼─────┼───┼────┼────┤
//    │ \ │  _  │ [ │ LCTL(c)  │  ]   │     '     │   │ no  │  7  │  8  │ 9 │ no │ no │
//    └───┴─────┴───┼──────────┼──────┼───────────┤   ├─────┼─────┼─────┼───┴────┴────┘
//                  │ VIM_SAVE │ lsft │ MO(_DUAL) │   │     │     │     │
//                  └──────────┴──────┴───────────┘   └─────┴─────┴─────┘
[_SPCL] = LAYOUT_split_3x6_3(
  KC_GRV  , _______ , KC_LPRN , KC_PLUS    , KC_RPRN , KC_SLSH   ,     XXXXXXX , KC_1    , KC_2    , KC_3 , XXXXXXX , XXXXXXX,
  KC_TILD , KC_MINS , KC_LCBR , KC_EQUAL   , KC_RCBR , KC_COLN   ,     XXXXXXX , KC_4    , KC_5    , KC_6 , KC_0    , XXXXXXX,
  KC_BSLS , KC_UNDS , KC_LBRC , LCTL(KC_C) , KC_RBRC , KC_QUOT   ,     XXXXXXX , KC_7    , KC_8    , KC_9 , XXXXXXX , XXXXXXX,
                                VIM_SAVE   , KC_LSFT , MO(_DUAL) ,     _______ , _______ , _______
),

//    ┌─────────┬────┬────┬─────┬─────┬─────┐   ┌─────┬─────┬─────┬────┬────┬──────────────┐
//    │ QK_BOOT │ no │ no │ no  │ no  │ no  │   │ no  │ no  │ no  │ no │ no │   TG(_MAC)   │
//    ├─────────┼────┼────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼────┼────┼──────────────┤
//    │   no    │ no │ no │ no  │ no  │ no  │   │ no  │ no  │ no  │ no │ no │ TG(_COLEMAK) │
//    ├─────────┼────┼────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼────┼────┼──────────────┤
//    │   no    │ no │ no │ no  │ no  │ no  │   │ no  │ no  │ no  │ no │ no │      no      │
//    └─────────┴────┴────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼────┴────┴──────────────┘
//                        │     │     │     │   │     │     │     │
//                        └─────┴─────┴─────┘   └─────┴─────┴─────┘
[_DUAL] = LAYOUT_split_3x6_3(
  QK_BOOT , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,     XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , TG(_MAC)    ,
  XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,     XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , TG(_COLEMAK),
  XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,     XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX     ,
                                _______ , _______ , _______ ,     _______ , _______ , _______
)
};



const key_override_t left_override  = ko_make_basic(MOD_MASK_ALT, KC_H, KC_LEFT);
const key_override_t down_override  = ko_make_basic(MOD_MASK_ALT, KC_J, KC_DOWN);
const key_override_t up_override    = ko_make_basic(MOD_MASK_ALT, KC_K, KC_UP);
const key_override_t right_override = ko_make_basic(MOD_MASK_ALT, KC_L, KC_RIGHT);

const key_override_t *key_overrides[] = {
    &left_override,
    &right_override,
    &up_override,
    &down_override
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case VIM_SAVE:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("c") ":w" SS_TAP(X_ENTER));
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
