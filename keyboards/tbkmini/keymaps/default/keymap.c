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
//    ┌──────┬───┬───┬──────┬─────┬──────────┐   ┌───────────┬──────┬─────┬───┬───┬──────┐
//    │ esc  │ q │ w │  e   │  r  │    t     │   │     y     │  u   │  i  │ o │ p │  \   │
//    ├──────┼───┼───┼──────┼─────┼──────────┤   ├───────────┼──────┼─────┼───┼───┼──────┤
//    │ tab  │ a │ s │  d   │  f  │    g     │   │     h     │  j   │  k  │ l │ ; │  '   │
//    ├──────┼───┼───┼──────┼─────┼──────────┤   ├───────────┼──────┼─────┼───┼───┼──────┤
//    │ lsft │ z │ x │  c   │  v  │    b     │   │     n     │  m   │  ,  │ . │ / │ rsft │
//    └──────┴───┴───┼──────┼─────┼──────────┤   ├───────────┼──────┼─────┼───┴───┴──────┘
//                   │ lctl │ spc │ MO(_NUM) │   │ MO(_SPCL) │ bspc │ ent │
//                   └──────┴─────┴──────────┘   └───────────┴──────┴─────┘
[_WIN] = LAYOUT_split_3x6_3(
  KC_ESC  , KC_Q , KC_W , KC_E    , KC_R   , KC_T     ,     KC_Y      , KC_U    , KC_I    , KC_O   , KC_P    , KC_BSLS,
  KC_TAB  , KC_A , KC_S , KC_D    , KC_F   , KC_G     ,     KC_H      , KC_J    , KC_K    , KC_L   , KC_SCLN , KC_QUOT,
  KC_LSFT , KC_Z , KC_X , KC_C    , KC_V   , KC_B     ,     KC_N      , KC_M    , KC_COMM , KC_DOT , KC_SLSH , KC_RSFT,
                          KC_LCTL , KC_SPC , MO(_NUM) ,     MO(_SPCL) , KC_BSPC , KC_ENT
),

//    ┌──────┬───┬───┬──────┬─────┬──────────┐   ┌───────────┬──────┬─────┬───┬───┬──────┐
//    │ esc  │ q │ w │  e   │  r  │    t     │   │     y     │  u   │  i  │ o │ p │  \   │
//    ├──────┼───┼───┼──────┼─────┼──────────┤   ├───────────┼──────┼─────┼───┼───┼──────┤
//    │ tab  │ a │ s │  d   │  f  │    g     │   │     h     │  j   │  k  │ l │ ; │  '   │
//    ├──────┼───┼───┼──────┼─────┼──────────┤   ├───────────┼──────┼─────┼───┼───┼──────┤
//    │ lsft │ z │ x │  c   │  v  │    b     │   │     n     │  m   │  ,  │ . │ / │ rsft │
//    └──────┴───┴───┼──────┼─────┼──────────┤   ├───────────┼──────┼─────┼───┴───┴──────┘
//                   │ lgui │ spc │ MO(_NUM) │   │ MO(_SPCL) │ bspc │ ent │
//                   └──────┴─────┴──────────┘   └───────────┴──────┴─────┘
[_MAC] = LAYOUT_split_3x6_3(
  KC_ESC  , KC_Q , KC_W , KC_E    , KC_R   , KC_T     ,     KC_Y      , KC_U    , KC_I    , KC_O   , KC_P    , KC_BSLS,
  KC_TAB  , KC_A , KC_S , KC_D    , KC_F   , KC_G     ,     KC_H      , KC_J    , KC_K    , KC_L   , KC_SCLN , KC_QUOT,
  KC_LSFT , KC_Z , KC_X , KC_C    , KC_V   , KC_B     ,     KC_N      , KC_M    , KC_COMM , KC_DOT , KC_SLSH , KC_RSFT,
                          KC_LCMD , KC_SPC , MO(_NUM) ,     MO(_SPCL) , KC_BSPC , KC_ENT
),

//    ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐   ┌───────────┬────────────┬─────┬───┬────┬─────────┐
//    │ LALT(q) │    !    │    @    │    #    │    $    │    %    │   │     ^     │     1      │  2  │ 3 │ no │   no    │
//    ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤   ├───────────┼────────────┼─────┼───┼────┼─────────┤
//    │         │ LALT(a) │ LALT(s) │ LALT(d) │ LALT(f) │ LALT(g) │   │     &     │     4      │  5  │ 6 │ 0  │ LALT(;) │
//    ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤   ├───────────┼────────────┼─────┼───┼────┼─────────┤
//    │ QK_BOOT │ LALT(z) │ LALT(x) │ LALT(c) │ LALT(v) │ LALT(b) │   │     *     │     7      │  8  │ 9 │ no │   no    │
//    └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┤   ├───────────┼────────────┼─────┼───┴────┴─────────┘
//                                  │         │         │         │   │ MO(_DUAL) │ LALT(bspc) │     │
//                                  └─────────┴─────────┴─────────┘   └───────────┴────────────┴─────┘
[_NUM] = LAYOUT_split_3x6_3(
  LALT(KC_Q) , KC_EXLM    , KC_AT      , KC_HASH    , KC_DLR     , KC_PERC    ,     KC_CIRC   , KC_1          , KC_2    , KC_3 , XXXXXXX , XXXXXXX      ,
  _______    , LALT(KC_A) , LALT(KC_S) , LALT(KC_D) , LALT(KC_F) , LALT(KC_G) ,     KC_AMPR   , KC_4          , KC_5    , KC_6 , KC_0    , LALT(KC_SCLN),
  QK_BOOT    , LALT(KC_Z) , LALT(KC_X) , LALT(KC_C) , LALT(KC_V) , LALT(KC_B) ,     KC_ASTR   , KC_7          , KC_8    , KC_9 , XXXXXXX , XXXXXXX      ,
                                         _______    , _______    , _______    ,     MO(_DUAL) , LALT(KC_BSPC) , _______
),

//    ┌─────┬─────┬───┬─────┬─────┬───────────┐   ┌──────────┬──────┬──────────┬──────┬─────┬─────┐
//    │  `  │     │ ( │  #  │  )  │           │   │          │      │          │      │     │     │
//    ├─────┼─────┼───┼─────┼─────┼───────────┤   ├──────────┼──────┼──────────┼──────┼─────┼─────┤
//    │  ~  │  -  │ { │  +  │  }  │     "     │   │   left   │ down │    up    │ rght │     │     │
//    ├─────┼─────┼───┼─────┼─────┼───────────┤   ├──────────┼──────┼──────────┼──────┼─────┼─────┤
//    │     │  _  │ [ │  =  │  ]  │     '     │   │ VIM_SAVE │      │ VIM_QUIT │      │     │     │
//    └─────┴─────┴───┼─────┼─────┼───────────┤   ├──────────┼──────┼──────────┼──────┴─────┴─────┘
//                    │     │     │ MO(_DUAL) │   │          │      │          │
//                    └─────┴─────┴───────────┘   └──────────┴──────┴──────────┘
[_SPCL] = LAYOUT_split_3x6_3(
  KC_GRV  , _______ , KC_LPRN , KC_HASH  , KC_RPRN , _______   ,     _______  , _______ , _______  , _______  , _______ , _______,
  KC_TILD , KC_MINS , KC_LCBR , KC_PLUS  , KC_RCBR , KC_DQT    ,     KC_LEFT  , KC_DOWN , KC_UP    , KC_RIGHT , _______ , _______,
  _______ , KC_UNDS , KC_LBRC , KC_EQUAL , KC_RBRC , KC_QUOT   ,     VIM_SAVE , _______ , VIM_QUIT , _______  , _______ , _______,
                                _______  , _______ , MO(_DUAL) ,     _______  , _______ , _______
),

//    ┌─────────┬────┬────┬─────┬─────┬─────┐   ┌─────┬─────┬─────┬────┬────┬────┐
//    │ QK_BOOT │ no │ no │ no  │ no  │ no  │   │ no  │ no  │ no  │ no │ no │ no │
//    ├─────────┼────┼────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼────┼────┼────┤
//    │   no    │ no │ no │ no  │ no  │ no  │   │ no  │ no  │ no  │ no │ no │ no │
//    ├─────────┼────┼────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼────┼────┼────┤
//    │   no    │ no │ no │ no  │ no  │ no  │   │ no  │ no  │ no  │ no │ no │ no │
//    └─────────┴────┴────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼────┴────┴────┘
//                        │     │     │     │   │     │     │     │
//                        └─────┴─────┴─────┘   └─────┴─────┴─────┘
[_DUAL] = LAYOUT_split_3x6_3(
  QK_BOOT , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,     XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,
  XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,     XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,
  XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,     XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,
                                _______ , _______ , _______ ,     _______ , _______ , _______
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
