#include <stdio.h>
#include "hamming.h"

int compute(const char *lhs, const char *rhs){
    int hamming_distance = 0;
    while (*lhs && *rhs){
        if (*lhs != *rhs)
            hamming_distance += 1;
        lhs++;
        rhs++;
    }
    if (*lhs || *rhs)
        return -1;
    return hamming_distance;
}

int main(void){
    printf("%d\n", compute("", "G"));
}