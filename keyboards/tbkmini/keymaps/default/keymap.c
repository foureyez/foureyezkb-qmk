#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//    ┌──────┬───┬───┬──────┬─────┬───────┐   ┌───────┬──────┬─────┬───┬───┬──────┐
//    │ tab  │ q │ w │  e   │  r  │   t   │   │   y   │  u   │  i  │ o │ p │ bspc │
//    ├──────┼───┼───┼──────┼─────┼───────┤   ├───────┼──────┼─────┼───┼───┼──────┤
//    │ lctl │ a │ s │  d   │  f  │   g   │   │   h   │  j   │  k  │ l │ ; │  '   │
//    ├──────┼───┼───┼──────┼─────┼───────┤   ├───────┼──────┼─────┼───┼───┼──────┤
//    │ lsft │ z │ x │  c   │  v  │   b   │   │   n   │  m   │  ,  │ . │ / │ esc  │
//    └──────┴───┴───┼──────┼─────┼───────┤   ├───────┼──────┼─────┼───┴───┴──────┘
//                   │ lgui │ spc │ MO(1) │   │ MO(2) │ bspc │ ent │
//                   └──────┴─────┴───────┘   └───────┴──────┴─────┘
[0] = LAYOUT_split_3x6_3(
  KC_TAB  , KC_Q , KC_W , KC_E    , KC_R   , KC_T  ,     KC_Y  , KC_U    , KC_I    , KC_O   , KC_P    , KC_BSPC,
  KC_LCTL , KC_A , KC_S , KC_D    , KC_F   , KC_G  ,     KC_H  , KC_J    , KC_K    , KC_L   , KC_SCLN , KC_QUOT,
  KC_LSFT , KC_Z , KC_X , KC_C    , KC_V   , KC_B  ,     KC_N  , KC_M    , KC_COMM , KC_DOT , KC_SLSH , KC_ESC ,
                          KC_LGUI , KC_SPC , MO(1) ,     MO(2) , KC_BSPC , KC_ENT
),

//    ┌──────┬────┬────┬──────┬─────┬─────┐   ┌───────┬──────┬─────┬──────┬────┬──────┐
//    │ tab  │ 1  │ 2  │  3   │  4  │  5  │   │   6   │  7   │  8  │  9   │ 0  │ bspc │
//    ├──────┼────┼────┼──────┼─────┼─────┤   ├───────┼──────┼─────┼──────┼────┼──────┤
//    │ lctl │ no │ no │  no  │ no  │ no  │   │ left  │ down │ up  │ rght │ no │  no  │
//    ├──────┼────┼────┼──────┼─────┼─────┤   ├───────┼──────┼─────┼──────┼────┼──────┤
//    │ lsft │ no │ no │  no  │ no  │ no  │   │  no   │  no  │ no  │  no  │ no │  no  │
//    └──────┴────┴────┼──────┼─────┼─────┤   ├───────┼──────┼─────┼──────┴────┴──────┘
//                     │ lgui │ spc │     │   │ MO(3) │ bspc │ ent │
//                     └──────┴─────┴─────┘   └───────┴──────┴─────┘
[1] = LAYOUT_split_3x6_3(
  KC_TAB  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,     KC_6    , KC_7    , KC_8    , KC_9     , KC_0    , KC_BSPC,
  KC_LCTL , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,     KC_LEFT , KC_DOWN , KC_UP   , KC_RIGHT , XXXXXXX , XXXXXXX,
  KC_LSFT , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,     XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX  , XXXXXXX , XXXXXXX,
                                KC_LGUI , KC_SPC  , _______ ,     MO(3)   , KC_BSPC , KC_ENT
),

//    ┌──────┬────┬────┬──────┬─────┬─────┐   ┌───────┬──────┬─────┬───┬───┬──────┐
//    │ tab  │ !  │ @  │  #   │  $  │  %  │   │   ^   │  &   │  *  │ ( │ ) │ bspc │
//    ├──────┼────┼────┼──────┼─────┼─────┤   ├───────┼──────┼─────┼───┼───┼──────┤
//    │ lctl │ no │ no │  no  │ no  │ no  │   │   -   │  =   │  [  │ ] │ \ │  `   │
//    ├──────┼────┼────┼──────┼─────┼─────┤   ├───────┼──────┼─────┼───┼───┼──────┤
//    │ lsft │ no │ no │  no  │ no  │ no  │   │   _   │  +   │  {  │ } │ | │  ~   │
//    └──────┴────┴────┼──────┼─────┼─────┤   ├───────┼──────┼─────┼───┴───┴──────┘
//                     │ lgui │ spc │     │   │ MO(3) │ bspc │ ent │
//                     └──────┴─────┴─────┘   └───────┴──────┴─────┘
[2] = LAYOUT_split_3x6_3(
  KC_TAB  , KC_EXLM , KC_AT   , KC_HASH , KC_DLR  , KC_PERC ,     KC_CIRC , KC_AMPR , KC_ASTR , KC_LPRN , KC_RPRN , KC_BSPC,
  KC_LCTL , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,     KC_MINS , KC_EQL  , KC_LBRC , KC_RBRC , KC_BSLS , KC_GRV ,
  KC_LSFT , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,     KC_UNDS , KC_PLUS , KC_LCBR , KC_RCBR , KC_PIPE , KC_TILD,
                                KC_LGUI , KC_SPC  , _______ ,     MO(3)   , KC_BSPC , KC_ENT
),

//    ┌─────────┬─────────┬─────────┬─────────┬─────┬─────┐   ┌─────┬──────┬─────┬────┬────┬────┐
//    │ QK_BOOT │   no    │   no    │   no    │ no  │ no  │   │ no  │  no  │ no  │ no │ no │ no │
//    ├─────────┼─────────┼─────────┼─────────┼─────┼─────┤   ├─────┼──────┼─────┼────┼────┼────┤
//    │ RM_TOGG │ RM_HUEU │ RM_SATU │ RM_VALU │ no  │ no  │   │ no  │  no  │ no  │ no │ no │ no │
//    ├─────────┼─────────┼─────────┼─────────┼─────┼─────┤   ├─────┼──────┼─────┼────┼────┼────┤
//    │ RM_NEXT │ RM_HUED │ RM_SATD │ RM_VALD │ no  │ no  │   │ no  │  no  │ no  │ no │ no │ no │
//    └─────────┴─────────┴─────────┼─────────┼─────┼─────┤   ├─────┼──────┼─────┼────┴────┴────┘
//                                  │  lgui   │ spc │     │   │     │ bspc │ ent │
//                                  └─────────┴─────┴─────┘   └─────┴──────┴─────┘
[3] = LAYOUT_split_3x6_3(
  QK_BOOT , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,     XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,
  RM_TOGG , RM_HUEU , RM_SATU , RM_VALU , XXXXXXX , XXXXXXX ,     XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,
  RM_NEXT , RM_HUED , RM_SATD , RM_VALD , XXXXXXX , XXXXXXX ,     XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,
                                KC_LGUI , KC_SPC  , _______ ,     _______ , KC_BSPC , KC_ENT
)
};
