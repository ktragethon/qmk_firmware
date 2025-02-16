#pragma once

#include QMK_KEYBOARD_H

#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#include "color.h"

#define BRIGHT_MIN 10
#define BRIGHT_MAX 250

#define BRIGHT_START 150
#define BRIGHT_DIFF_CAPS -40
#define BRIGHT_DIFF_FN_A 40
#define BRIGHT_DIFF_FN_OFF -80

#define BRIGHT_MIN_MAIN 90
#define BRIGHT_MAX_MAIN 210

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

bool booted = false;

// Initialize brightness-variables
uint8_t brightMain = BRIGHT_START;
uint8_t brightCaps = BRIGHT_START + BRIGHT_DIFF_CAPS;
uint8_t brightFnCaps = BRIGHT_START + BRIGHT_DIFF_FN_OFF;
uint8_t brightFnA = BRIGHT_START + BRIGHT_DIFF_FN_A;
uint8_t brightFnOff = BRIGHT_START + BRIGHT_DIFF_FN_OFF;

uint8_t brightMinMain = BRIGHT_MIN_MAIN;
uint8_t brightMaxMain = BRIGHT_MAX_MAIN;

// Per-Layer colors
rgb_t l1Col = {RGB_OFF};
rgb_t l0Col = {RGB_OFF};

rgb_t cFnOn = {RGB_OFF};
rgb_t cFnOff = {RGB_OFF};
rgb_t cCaps = {RGB_OFF};
rgb_t cFnCaps = {RGB_OFF};

const rgb_t cSystem = {RGB_CORAL};
const rgb_t cSystemOff = {RGB_OFF};

rgb_t setColor(uint8_t h, uint8_t s, uint8_t v, uint8_t brightness) {

    if(brightness == 0) {
        const rgb_t off = {RGB_OFF};
        return off;
    }

    const uint8_t b_min = MIN(BRIGHT_MAX, brightness);
    const uint8_t v_value = MAX(BRIGHT_MIN, b_min);
    const hsv_t hv = {h, s, v_value};
    return hsv_to_rgb(hv);
}

// CAPS - Set all alphanum. to color
void checkCapsLock(uint8_t led_min, uint8_t led_max, rgb_t capsCol) {
    if (host_keyboard_led_state().caps_lock) {
        for (uint8_t i = led_min; i < led_max; i++) {
            if (g_led_config.flags[i] & LED_FLAG_KEYLIGHT) {
                rgb_matrix_set_color(i, capsCol.r, capsCol.g, capsCol.b);
            }
        }
    }
}


// ********************************************************************************
// Force any key with active-state in the current layer to glow
void setByActiveKeyInLayer(uint8_t led_min, uint8_t led_max, rgb_t cOn, rgb_t cOff, rgb_t cCapsDim) {

    uint8_t layer = get_highest_layer(layer_state);

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
                {
                    rgb_matrix_set_color(index, cCapsDim.r, cCapsDim.g, cCapsDim.b);
                }
                }
            }
        }
    }
}


const void updateBrightness(int8_t value) {
    const int16_t bM = brightMain + value;
    const int16_t bC = bM + BRIGHT_DIFF_CAPS;
    const int16_t bFc = bM + BRIGHT_DIFF_FN_OFF;
    const int16_t bFa = bM + BRIGHT_DIFF_FN_A;
    const int16_t bFo = bM + BRIGHT_DIFF_FN_OFF;

    if(bM < BRIGHT_MIN ||
        bC < BRIGHT_MIN ||
        bFa < BRIGHT_MIN ||
        bFo < BRIGHT_MIN ||
        bFc < BRIGHT_MIN)
        {return; }
    if(bM > BRIGHT_MAX ||
        bC > BRIGHT_MAX ||
        bFa > BRIGHT_MAX ||
        bFo > BRIGHT_MAX ||
        bFc > BRIGHT_MAX)
        {return; }

        brightMain = (uint8_t)bM;
        brightCaps = (uint8_t)bC;
        brightFnCaps = (uint8_t)bFc;
        brightFnA = (uint8_t)bFa;
        brightFnOff = (uint8_t)bFo;

        l1Col = setColor(COLOR_L1, brightMain);
        l0Col = setColor(COLOR_L0, brightMain);

        cFnOn = setColor(COLOR_FN_A, brightFnA);
        cFnOff = setColor(COLOR_L1, brightFnOff);
        cCaps = setColor(COLOR_CAPS, brightCaps);
        cFnCaps = setColor(COLOR_CAPS, brightFnCaps);
}

const void brightnessIndicator(uint8_t led_min, uint8_t led_max) {
    // Min 90, Max 210 (span 120)

    const int32_t valP = (((brightMain - brightMinMain) + 2) * 100) / (brightMaxMain - brightMinMain);
    const uint8_t testVal = valP / 10;

    for (uint8_t i = 0; i < 10; i++) {
        if(testVal >= i)
        {
            const uint8_t li = i + 1;
            if(li >= led_min && li < led_max) {
            rgb_matrix_set_color(li, cFnOn.r, cFnOn.g, cFnOn.b);
        }
        }
    }
}


void keyboard_post_init_user(void) {
    if(!booted) {
        updateBrightness(0);
        booted = true;
    }
  }

// continously
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if(get_highest_layer(layer_state|default_layer_state) > 1) {
        switch (keycode) {
        case RGB_VAI:
            updateBrightness(5);
            return false; // Stop QMK-processing
            break;

        case RGB_VAD:
            updateBrightness(-5);
            return false; // Stop QMK-processing
            break;
        default:
            return true; // Let QMK process it
        }
    }

    return true;
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    for (uint8_t i = led_min; i < led_max; i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case 6:
                setByActiveKeyInLayer(led_min, led_max, cSystem, cSystemOff, cFnCaps);
                break;
            case 5:
                setByActiveKeyInLayer(led_min, led_max, cSystem, cSystemOff, cFnCaps);
                brightnessIndicator(led_min, led_max);
                break;
            case 4:
                setByActiveKeyInLayer(led_min, led_max, cFnOn, cFnOff, cFnCaps);
                break;
            case 3:
                setByActiveKeyInLayer(led_min, led_max, cFnOn, cFnOff, cFnCaps);
                break;
            case 2:
                setByActiveKeyInLayer(led_min, led_max, cFnOn, cFnOff, cFnCaps);
                break;
            case 1:
                rgb_matrix_set_color(i, l1Col.r, l1Col.g, l1Col.b);
                checkCapsLock(led_min, led_max, cCaps);
                break;
            case 0:

                rgb_matrix_set_color(i, l0Col.r, l0Col.g, l0Col.b);
                checkCapsLock(led_min, led_max, cCaps);
                break;
            default:
                break;
        }
    }

    return false;
}
