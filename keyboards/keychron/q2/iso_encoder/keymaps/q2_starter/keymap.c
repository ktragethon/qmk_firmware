#pragma once

#include QMK_KEYBOARD_H

#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#include "color.h"

#define MIN_BRIGHT 25
#define MAX_BRIGHT 250
#define STARTUP_BRIGHTNESS 50
#define CAPS_BRIGHTNESS 150
#define FN_A_BRIGHTNESS 200
#define FN_A_OFF_BRIGHTNESS 20
#define COLOR_CAPS HSV_ORANGE
#define COLOR_L0 HSV_WHITE
#define COLOR_L1 HSV_RED
#define COLOR_FN_A HSV_GREEN
#define COLOR_SYS HSV_CORAL
// #define COLOR_SYS_PROG HSV_RED


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_iso_68(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_MUTE, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_DEL, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT, KC_HOME, KC_LSFT, KC_NUBS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_NO, MO(3), KC_LEFT, KC_DOWN, KC_RGHT),
    [1] = LAYOUT_iso_68(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_MUTE, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_DEL, KC_NO, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT, KC_NO, KC_LSFT, MO(4), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(2), MO(3), KC_LEFT, KC_DOWN, KC_RGHT),
    [2] = LAYOUT_iso_68(KC_GRV, KC_NUBS, LSFT(KC_NUBS), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ASTR, KC_LPRN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RALT(KC_7), RALT(KC_0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_NO, RALT(KC_8), RALT(KC_9), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),
    [3] = LAYOUT_iso_68(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO),
    [4] = LAYOUT_iso_68(KC_NO, TO(5), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_PGUP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_END),
    [5] = LAYOUT_iso_68(TG(5), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_VAI, MO(6), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_VAD, KC_NO),
    [6] = LAYOUT_iso_68(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [2]     = { ENCODER_CCW_CW(KC_NO, KC_NO) },
    [3]     = { ENCODER_CCW_CW(KC_NO, KC_NO) },
    [4]     = { ENCODER_CCW_CW(KC_NO, KC_NO) },
    [5]     = { ENCODER_CCW_CW(KC_NO, KC_NO) },
    [6]     = { ENCODER_CCW_CW(KC_NO, KC_NO) },
};
#endif


#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

uint8_t brightPercent = STARTUP_BRIGHTNESS;

uint8_t getBrightness(uint8_t factor) {
    const uint8_t p_min = MIN(100, brightPercent);
    const uint32_t maxBright = MAX_BRIGHT * 100; // 25000
    const uint32_t minBright = MIN_BRIGHT * 100; // 2500
    const uint32_t val = (((((maxBright - minBright) * p_min) / 100) + minBright) / 10); //need div10
    const uint32_t fVal = (val * factor) / 1000;
    return (uint8_t)fVal;
}

rgb_t setColor(uint8_t h, uint8_t s, uint8_t v, uint8_t brightness) {

    if(brightness == 0) {
        const rgb_t off = {RGB_OFF};
        return off;
    }

    const uint8_t b_min = MIN(MAX_BRIGHT, brightness);
    const uint8_t v_value = MAX(MIN_BRIGHT, b_min);
    const hsv_t hv = {h, s, v_value};
    return hsv_to_rgb(hv);
}

// CAPS - Set all alphanum. to color
void checkCapsLock(uint8_t led_min, uint8_t led_max, uint8_t brightness) {
    const rgb_t cc = setColor(COLOR_CAPS, brightness);

    if (host_keyboard_led_state().caps_lock) {
        for (uint8_t i = led_min; i < led_max; i++) {
            if (g_led_config.flags[i] & LED_FLAG_KEYLIGHT) {
                rgb_matrix_set_color(i, cc.r, cc.g, cc.b);
            }
        }
    }
}

// bool encoder_update_user(uint8_t index, bool clockwise) {
//     if(get_highest_layer(layer_state|default_layer_state) > 1) {
//     if (index == 0) { /* First encoder */
//         if (clockwise) {
//             // brightPercent += 10;
//             // if(brightPercent > 100) {
//             //     brightPercent = 100;
//             // }
//             // tap_code(KC_PGDN);
//         } else {
//             // brightPercent -= 10;
//             // if(brightPercent < 0) {
//             //     brightPercent = 0;
//             // }
//             // tap_code(KC_PGUP);
//         }
//     }
//     return false;
// }
//     return true;
// }




// ********************************************************************************
// Force any key with active-state in the current layer to glow
void setByActiveKeyInLayer(uint8_t led_min, uint8_t led_max,
    uint8_t h_on,uint8_t s_on, uint8_t v_on, uint8_t b_on,
    uint8_t h_off, uint8_t s_off, uint8_t v_off, uint8_t b_off) {
        uint8_t layer = get_highest_layer(layer_state);

    const uint8_t brCaps = getBrightness(CAPS_BRIGHTNESS);
        const rgb_t cOn = setColor(h_on, s_on, v_on, b_on);
        const rgb_t cOff = setColor(h_off, s_off, v_off, b_off);
        const rgb_t cc = setColor(COLOR_CAPS, brCaps);


        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];

                if (index >= led_min && index < led_max && index != NO_LED) {

                    if(keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
                        rgb_matrix_set_color(index, cOn.r, cOn.g, cOn.b);
                    }
                    else if(keymap_key_to_keycode(layer, (keypos_t){col,row}) < KC_TRNS) {
                        if (!host_keyboard_led_state().caps_lock) {
                        rgb_matrix_set_color(index, cOff.r, cOff.g, cOff.b);
                    }
                    else
                    if (g_led_config.flags[index] & LED_FLAG_KEYLIGHT) {
                        rgb_matrix_set_color(index, cc.r, cc.g, cc.b);
                    }
                    }
                }
            }
        }
}

// continously

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if(get_highest_layer(layer_state|default_layer_state) > 1) {
        switch (keycode) {
        case RGB_VAI:
            brightPercent += 5;
            if(brightPercent > 84) {
                brightPercent = 85;
            }
            // Do not let QMK process the keycode further
            return false;
            break;

        case RGB_VAD:
            brightPercent -= 5;
            if(brightPercent < 11) {
                brightPercent = 10;
            }
            // Do not let QMK process the keycode further
            return false;
            break;
        default:
            // Else, let QMK process the KC_ESC keycode as usual
            return true;
        }
    }
    return true;
};


bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {

    // Per-Layer
    const uint8_t brCaps = getBrightness(CAPS_BRIGHTNESS);
    const uint8_t brFnA = getBrightness(FN_A_BRIGHTNESS);
    const uint8_t brFnAoff = getBrightness(FN_A_OFF_BRIGHTNESS);
    const uint8_t br1 = getBrightness(100);
    const rgb_t l1Col = setColor(COLOR_L1, br1);
    const uint8_t br0 = getBrightness(70);
    const rgb_t l0Col = setColor(COLOR_L0, br0);

    for (uint8_t i = led_min; i < led_max; i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case 6:
                setByActiveKeyInLayer(led_min, led_max, COLOR_SYS, MAX_BRIGHT, HSV_OFF, 0);
                break;
            case 5:
                setByActiveKeyInLayer(led_min, led_max, COLOR_SYS, MAX_BRIGHT, HSV_OFF, 0);
                break;
            case 4:
                setByActiveKeyInLayer(led_min, led_max, COLOR_FN_A, brFnA, COLOR_L1, brFnAoff);
                break;
            case 3:
                setByActiveKeyInLayer(led_min, led_max, COLOR_FN_A, brFnA, COLOR_L1, brFnAoff);
                break;
            case 2:
                setByActiveKeyInLayer(led_min, led_max, COLOR_FN_A, brFnA, COLOR_L1, brFnAoff);
                break;
            case 1:

                rgb_matrix_set_color(i, l1Col.r, l1Col.g, l1Col.b);
                checkCapsLock(led_min, led_max, brCaps);
                break;
            case 0:

                rgb_matrix_set_color(i, l0Col.r, l0Col.g, l0Col.b);
                checkCapsLock(led_min, led_max, brCaps);
                break;
            default:
                break;
        }
    }

    return false;
}
