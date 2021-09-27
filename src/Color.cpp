#include "../include/Color.h"

template<typename led_value_type>
bool ColorBase<led_value_type>::isValidLedValue(led_value_type value) {
    return value > 0;
}

template<typename color_value_type>
void ColorSingle<color_value_type>::setColor(color_value_type input_color) {
    if (isValidLedValue(input_color)) {
        ColorSingle::red = input_color;
    } else {
        //Out of bounds
    }
}

template<typename led_value_type>
void ColorRGB<led_value_type>::setRed(led_value_type input_red) {
    if (isValidLedValue(input_red)) {
        ColorRGB::red = input_red;
    } else {
        //Out of bounds
    }
}

template<typename led_value_type>
void ColorRGB<led_value_type>::setGreen(led_value_type input_green) {
    if (isValidLedValue(input_green)) {
        ColorRGB::green = input_green;
    } else {
        //Out of bounds
    }
}

template<typename led_value_type>
void ColorRGB<led_value_type>::setBlue(led_value_type input_blue) {
    if (isValidLedValue(input_blue)) {
        ColorRGB::blue = input_blue;
    } else {
        //Out of bounds
    }
}


template<typename led_value_type>
void
ColorRGB<led_value_type>::setColor(led_value_type input_red, led_value_type input_green, led_value_type input_blue) {
    setRed(input_red);
    setGreen(input_green);
    setBlue(input_blue);
}

template<typename color_value_type>
ColorRGB<color_value_type>::ColorRGB(color_value_type red, color_value_type green, color_value_type blue) {
    setColor(red, green, blue);
}
