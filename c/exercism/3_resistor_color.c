#include <stdio.h>
#include "resistor_color.h"

static resistor_band_t resistor_array[] = {Black, Brown, Red, Orange, Yellow, Green, Blue, Violet, Grey, White};

const resistor_band_t *color_array(void){
    return resistor_array;
}

int color_number(resistor_band_t color){
    return resistor_array[color];
}

int main(void) {
    printf("%d\n", color_number(White));
    printf("%d\n", color_number(White));
}