#include <stdio.h>
#include <limits.h>
#include <ctype.h>

// Exercise 2-1. Write a program to determine the ranges(min, max) of [char, short, int, and long] variables, both signed and unsigned, by
// printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types.
void range_of_types(void){
    printf  ("==== Char ====\n");
    printf("Singed\n");
    printf("\tsigned char min - max: %d %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("UnSinged\n");
    printf("\tunsigned char min - max: %u %u\n", 0, UCHAR_MAX);

}

// Exercise 2-2. Write a loop equivalent to the for loop above without using && or ||.
void ex_2(void){
    /*
     for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;
     * */
    int limit = 1000;
    char s[limit];
    int c;
    int i = 0;

    for (; i < limit - 1; ++i) {
        if ((c=getchar()) != '\n'){
            if (c != EOF){
                s[i] = c;
            }
        }
    }
    s[i] = '\0';
    printf("%s", s);
}

int atoi(char s[]){
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i){
        n = 10 * n + (s[i] - '0');
    }

    return n;
}

int lower(char c){
    /* ctype.isdigit(c) = if(c >= '0' && c <= '9') */
    if(c >= 'A' && c <= 'Z'){
        return 'a' + (c - 'A');
    }
    return 0;
}

// Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X)
// into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.
#define HEX_BASE 16
#define HEX_A 10

long int power(int base, int exp){
    long int result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

long int htoi(char s[]){
    // get string size, first
    int j = 0;
    int size = 0;
    int start = 0;
    while (s[j] != '\0'){
        if (s[j] == '0' && s[j+1] == 'x'){
            start = 2;
            ++j;
        } else {
            size += 1;
        }
        ++j;
    }

    printf("------------------\n");
    printf("input: %s\n", s);
    printf("------------------\n");
    int i = start;
    int unit = size - 1;
    long int answer = 0;
    while (s[i] != '\0'){
        if (s[i] >= '0' && s[i] <= '9'){
            answer += (s[i] - '0') * power(HEX_BASE, unit);
            printf("expression: %c * Power(16, %d)\n", s[i], unit);
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            answer += ((s[i] - 'a') + HEX_A) * power(HEX_BASE, unit);
            printf("expression: %c * Power(16, %d)\n", s[i], unit);
        } else if (s[i] >= 'A' && s[i] <= 'F'){
            answer += ((s[i] - 'A') + HEX_A) * power(HEX_BASE, unit);
            printf("expression: %c * Power(16, %d)\n", s[i], unit);
        }
        i += 1;
        unit -= 1;
    }
    printf("------------------\n");
    printf("answer: %ld\n", answer);
    printf("------------------\n");
    return answer;
}


int main(void){
    htoi("0x123abcABC");
    return 0;
}