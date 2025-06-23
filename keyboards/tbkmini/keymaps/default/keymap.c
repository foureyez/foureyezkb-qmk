#include QMK_KEYBOARD_H

#define _WIN   0
#define _MAC   1
#define _NUM   2
#define _SPCL  3
#define _DUAL  4

enum custom_keycodes {
  VIM_QUIT= SAFE_RANGE,
  VIM_SAVE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//    ┌──────────┬───┬───┬─────────────┬─────┬──────┐   ┌───────────┬──────┬─────────────┬───┬───┬──────┐
//    │   esc    │ q │ w │      e      │  r  │  t   │   │     y     │  u   │      i      │ o │ p │  \   │
//    ├──────────┼───┼───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────────────┼───┼───┼──────┤
//    │ MO(_NUM) │ a │ s │      d      │  f  │  g   │   │     h     │  j   │      k      │ l │ ; │  '   │
//    ├──────────┼───┼───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────────────┼───┼───┼──────┤
//    │   lsft   │ z │ x │      c      │  v  │  b   │   │     n     │  m   │      ,      │ . │ / │ rsft │
//    └──────────┴───┴───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────────────┼───┴───┴──────┘
//                       │ LCTL_T(tab) │ spc │ lalt │   │ MO(_SPCL) │ bspc │ RSFT_T(ent) │
//                       └─────────────┴─────┴──────┘   └───────────┴──────┴─────────────┘
[_WIN] = LAYOUT_split_3x6_3(
  KC_ESC   , KC_Q , KC_W , KC_E           , KC_R   , KC_T    ,     KC_Y      , KC_U    , KC_I           , KC_O   , KC_P    , KC_BSLS,
  MO(_NUM) , KC_A , KC_S , KC_D           , KC_F   , KC_G    ,     KC_H      , KC_J    , KC_K           , KC_L   , KC_SCLN , KC_QUOT,
  KC_LSFT  , KC_Z , KC_X , KC_C           , KC_V   , KC_B    ,     KC_N      , KC_M    , KC_COMM        , KC_DOT , KC_SLSH , KC_RSFT,
                           LCTL_T(KC_TAB) , KC_SPC , KC_LALT ,     MO(_SPCL) , KC_BSPC , RSFT_T(KC_ENT)
),

//    ┌──────────┬───┬───┬─────────────┬─────┬──────┐   ┌───────────┬──────┬─────────────┬───┬───┬──────┐
//    │   esc    │ q │ w │      e      │  r  │  t   │   │     y     │  u   │      i      │ o │ p │  \   │
//    ├──────────┼───┼───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────────────┼───┼───┼──────┤
//    │ MO(_NUM) │ a │ s │      d      │  f  │  g   │   │     h     │  j   │      k      │ l │ ; │  '   │
//    ├──────────┼───┼───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────────────┼───┼───┼──────┤
//    │   lsft   │ z │ x │      c      │  v  │  b   │   │     n     │  m   │      ,      │ . │ / │ rsft │
//    └──────────┴───┴───┼─────────────┼─────┼──────┤   ├───────────┼──────┼─────────────┼───┴───┴──────┘
//                       │ LCMD_T(tab) │ spc │ lalt │   │ MO(_SPCL) │ bspc │ RSFT_T(ent) │
//                       └─────────────┴─────┴──────┘   └───────────┴──────┴─────────────┘
[_MAC] = LAYOUT_split_3x6_3(
  KC_ESC   , KC_Q , KC_W , KC_E           , KC_R   , KC_T    ,     KC_Y      , KC_U    , KC_I           , KC_O   , KC_P    , KC_BSLS,
  MO(_NUM) , KC_A , KC_S , KC_D           , KC_F   , KC_G    ,     KC_H      , KC_J    , KC_K           , KC_L   , KC_SCLN , KC_QUOT,
  KC_LSFT  , KC_Z , KC_X , KC_C           , KC_V   , KC_B    ,     KC_N      , KC_M    , KC_COMM        , KC_DOT , KC_SLSH , KC_RSFT,
                           LCMD_T(KC_TAB) , KC_SPC , KC_LALT ,     MO(_SPCL) , KC_BSPC , RSFT_T(KC_ENT)
),

//    ┌─────┬─────┬─────┬──────┬─────┬─────┐   ┌───────────┬─────┬─────┬───┬────┬────┐
//    │     │     │     │      │     │     │   │    no     │  1  │  2  │ 3 │ no │ no │
//    ├─────┼─────┼─────┼──────┼─────┼─────┤   ├───────────┼─────┼─────┼───┼────┼────┤
//    │     │     │     │      │     │     │   │    no     │  4  │  5  │ 6 │ 0  │ no │
//    ├─────┼─────┼─────┼──────┼─────┼─────┤   ├───────────┼─────┼─────┼───┼────┼────┤
//    │     │     │     │      │     │     │   │    no     │  7  │  8  │ 9 │ no │ no │
//    └─────┴─────┴─────┼──────┼─────┼─────┤   ├───────────┼─────┼─────┼───┴────┴────┘
//                      │ lsft │     │     │   │ MO(_DUAL) │     │     │
//                      └──────┴─────┴─────┘   └───────────┴─────┴─────┘
[_NUM] = LAYOUT_split_3x6_3(
  _______ , _______ , _______ , _______ , _______ , _______ ,     XXXXXXX   , KC_1    , KC_2    , KC_3 , XXXXXXX , XXXXXXX,
  _______ , _______ , _______ , _______ , _______ , _______ ,     XXXXXXX   , KC_4    , KC_5    , KC_6 , KC_0    , XXXXXXX,
  _______ , _______ , _______ , _______ , _______ , _______ ,     XXXXXXX   , KC_7    , KC_8    , KC_9 , XXXXXXX , XXXXXXX,
                                KC_LSFT , _______ , _______ ,     MO(_DUAL) , _______ , _______
),

//    ┌─────┬─────┬───┬─────────┬─────┬───────────┐   ┌──────────┬──────┬──────────┬──────┬─────┬─────┐
//    │  `  │     │ ( │    +    │  )  │           │   │          │      │          │      │     │     │
//    ├─────┼─────┼───┼─────────┼─────┼───────────┤   ├──────────┼──────┼──────────┼──────┼─────┼─────┤
//    │  ~  │  -  │ { │    =    │  }  │     "     │   │   left   │ down │    up    │ rght │     │     │
//    ├─────┼─────┼───┼─────────┼─────┼───────────┤   ├──────────┼──────┼──────────┼──────┼─────┼─────┤
//    │     │  _  │ [ │ LCTL(c) │  ]  │     '     │   │ VIM_SAVE │      │ VIM_QUIT │      │     │     │
//    └─────┴─────┴───┼─────────┼─────┼───────────┤   ├──────────┼──────┼──────────┼──────┴─────┴─────┘
//                    │         │     │ MO(_DUAL) │   │          │      │          │
//                    └─────────┴─────┴───────────┘   └──────────┴──────┴──────────┘
[_SPCL] = LAYOUT_split_3x6_3(
  KC_GRV  , _______ , KC_LPRN , KC_PLUS    , KC_RPRN , _______   ,     _______  , _______ , _______  , _______  , _______ , _______,
  KC_TILD , KC_MINS , KC_LCBR , KC_EQUAL   , KC_RCBR , KC_DQT    ,     KC_LEFT  , KC_DOWN , KC_UP    , KC_RIGHT , _______ , _______,
  _______ , KC_UNDS , KC_LBRC , LCTL(KC_C) , KC_RBRC , KC_QUOT   ,     VIM_SAVE , _______ , VIM_QUIT , _______  , _______ , _______,
                                _______    , _______ , MO(_DUAL) ,     _______  , _______ , _______
),

//    ┌─────────┬────┬────┬─────┬─────┬──────────┐   ┌──────────┬─────┬─────┬────┬────┬────┐
//    │ QK_BOOT │ no │ no │ no  │ no  │    z     │   │    no    │ no  │ no  │ no │ no │ no │
//    ├─────────┼────┼────┼─────┼─────┼──────────┤   ├──────────┼─────┼─────┼────┼────┼────┤
//    │   no    │ no │ no │ no  │ no  │ DF(_WIN) │   │ DF(_MAC) │ no  │ no  │ no │ no │ no │
//    ├─────────┼────┼────┼─────┼─────┼──────────┤   ├──────────┼─────┼─────┼────┼────┼────┤
//    │   no    │ no │ no │ no  │ no  │    no    │   │    no    │ no  │ no  │ no │ no │ no │
//    └─────────┴────┴────┼─────┼─────┼──────────┤   ├──────────┼─────┼─────┼────┴────┴────┘
//                        │     │     │          │   │          │     │     │
//                        └─────┴─────┴──────────┘   └──────────┴─────┴─────┘
[_DUAL] = LAYOUT_split_3x6_3(
  QK_BOOT , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , KC_Z     ,     XXXXXXX  , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,
  XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , DF(_WIN) ,     DF(_MAC) , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,
  XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX  ,     XXXXXXX  , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,
                                _______ , _______ , _______  ,     _______  , _______ , _______
)
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
