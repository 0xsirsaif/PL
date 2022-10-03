#include "grains.h"
#include <stdio.h>
#include <inttypes.h>

uint64_t power(int base, uint8_t exp){
    uint64_t result = 1;
    int i = 1;
    while (i <= exp){
        printf("> %"PRIu8"\n", exp);
        result *= base;
        i++;
        printf(">>> %"PRIu64"\n", result);
    }
    printf(">>> %"PRIu64"\n", result);
    return result;
}

uint64_t square(uint8_t index){
    uint64_t num_of_grains  = 1 * 2 * power(2, index);
    return num_of_grains;
}

uint64_t total(void){
    uint64_t total = 1 * 2 * power(2, 64);
    return total;
}

int main(void){
    printf("%"PRIu64"\n", power(2, 64));
    return 0;
}
