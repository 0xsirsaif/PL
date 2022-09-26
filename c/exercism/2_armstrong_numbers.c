#define MAXLEN 100

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "armstrong_numbers.h"

void reverse(char str[]){
    int i, j, c;
    for (i = 0, j = strlen(str)-1; i < j; i++, j--) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
}

void itoa(int number, char str[]){
    int i = 0;
    do {
        str[i++] = number % 10 + '0';
    } while ((number /= 10) > 0);
    str[i] = '\0';
    reverse(str);
}

int power(char base, int exp){
    int result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base - '0';
    }
//    printf("%d ^ %d = %d\n", base - '0', exp, result);
    return result;
}

bool is_armstrong(int number){
    char str[MAXLEN];
    int len, result, i;

    itoa(number, str);
    len = strlen(str);

    result = 0;
    i = 0;
    while (i < len){
        result += power(str[i], len);
        i++;
    }

    if (result != number){
        return false;
    }

    return true;
}

int main(void){
    printf("IS ARMSTRONG? %s\n", is_armstrong(153)? "true" : "false");
    return 0;
}