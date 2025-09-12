#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _NAV 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define NAV MO(_NAV)

#define KC_CAD LALT(LCTL(KC_DEL))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_EQL , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                                                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,
        KC_DEL , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                                                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLS,
        KC_BSPC, LT(RAISE,KC_A)  , KC_S  , LT(NAV,KC_D)  , KC_F  , KC_G  ,                                    KC_H  , KC_J  , LT(NAV,KC_K)  , KC_L  ,LT(RAISE,KC_SCLN),KC_QUOT,
        KC_LSFT, LCTL_T(KC_Z)  , KC_X  , LCTL_T(KC_C)  , KC_V    , LALT_T(KC_B)  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
                         KC_GRV,KC_LCMD,                                                                KC_PLUS, KC_EQL,
                                         KC_SPC,KC_TAB,                                                          KC_BSPC, KC_ENT,
                                         _______,_______,                                         _______,  KC_ESC,
                                         _______, _______,                                        _______, KC_CAD
    ),

    [_NAV] = LAYOUT_5x6(
        _______,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
        KC_ESC,_______,_______,KC_UP,KC_PGUP,KC_PGUP,                        _______, _______ , _______ , _______ ,_______,_______,
        _______,_______,KC_LEFT,KC_DOWN,KC_RIGHT ,_______,                        _______, _______ , _______ , _______ ,_______,_______,
        _______,_______,_______,_______,KC_PGUP,_______,                        _______, KC_MUTE , _______ , _______ ,_______ ,_______,
                                                _______,_______,            _______, _______,
                                                  KC_VOLU,KC_VOLD,          KC_VOLD,KC_VOLU,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______

    ),

    [_RAISE] = LAYOUT_5x6(
          KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
          _______,_______,_______,S(KC_LBRC),S(KC_RBRC),_______,                        _______,_______,_______,_______ ,_______,_______,
          _______,_______,_______,KC_LPRN,KC_RPRN,_______,                        _______,_______,_______,_______,_______,_______,
          _______,_______,_______,KC_LBRC,KC_RBRC,_______,                        _______,_______,_______,_______,_______,_______,
                                                  _______,_______,            _______ ,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______
    )
};

// Define Combos
const uint16_t PROGMEM screenshot[] = {KC_W, KC_E, KC_R, COMBO_END}; // WINDOWS SCREENSHOT
const uint16_t PROGMEM cad[] = {KC_S  , LT(NAV,KC_D)  , KC_F, COMBO_END}; // CTRL + ALT + DEL
const uint16_t PROGMEM teams_mute[] = {KC_X  , LCTL_T(KC_C)  , KC_V, COMBO_END}; // Mute MS Teams (Windows)
combo_t key_combos[] = {
    COMBO(screenshot, LWIN(LSFT(KC_S))),
    COMBO(cad, KC_CAD),
    COMBO(teams_mute, LCTL(LSFT(KC_M))),
};
