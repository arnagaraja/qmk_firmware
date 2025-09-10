#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_EQL , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                                                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,
        KC_DEL , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                                                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLS,
        KC_BSPC, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                                                         KC_H  , KC_J  , KC_K  , KC_L  ,LT(LOWER,KC_SCLN),KC_QUOT,
        KC_LSFT, LCTL_T(KC_Z)  , KC_X  , LCTL_T(KC_C)  , KC_V    , LALT_T(KC_B)  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
                         KC_GRV,KC_LCMD,                                                                KC_PLUS, KC_EQL,
                                         KC_SPC,KC_TAB,                                                          KC_BSPC, KC_ENT,
                                         KC_ESC,KC_HOME,                                         KC_END,  KC_DEL,
                                         KC_BSPC, KC_GRV,                                        KC_LGUI, KC_LALT
    ),

    [_LOWER] = LAYOUT_5x6(
        KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
        _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC, _______ , _______ , _______ ,_______,_______,
        _______,KC_HOME,KC_PGUP,KC_LPRN,KC_RPRN ,KC_LPRN,                        KC_RPRN, _______ , _______ , _______ ,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______, KC_KB_MUTE , _______ , _______ ,_______ ,_______,
                                                _______,KC_PSCR,            KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______

    ),

    [_RAISE] = LAYOUT_5x6(
          KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
          _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC,_______,KC_NUM,KC_INS ,KC_SCRL,KC_MUTE,
          _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                        KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU,
          _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,KC_VOLD,
                                                  _______,_______,            KC_EQL ,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______
    )
};
