#include <stdio.h>

void swap_1(int, int);
void swap_2(int*, int*);

int main(void){
    int a = 100;
    int b = 200;
//    swap_1(a,b);
    swap_2(&a, &b);
    printf("main: a = %d, b = %d\n", a, b);
}

void swap_1(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("swap: a = %d, b = %d\n", a, b);
    return;
}

void swap_2(int *p_a, int *p_b){
    int t = *p_a;
    *p_a = *p_b;
    *p_b = t;
    printf("swap: a = %d, b = %d\n", *p_a, *p_b);
    return;
}