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

int main(void){
    int cc = lower('D');
    printf("%c\n", cc);
    printf("%d\n", isdigit('9'));
    return 0;
}