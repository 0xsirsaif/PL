#include <stdio.h>

void count_some(void){
    /* count the number of occurrences of each
        digit,
        of white space characters (blank, tab, newline),
        and of all other characters
     *
     */
    int c;
    int digits[10];
    int white_spaces;
    int others;

    for (int i = 0; i <= 9; ++i){
        digits[i] = 0;
    }

    white_spaces = others = 0;
    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9')
            ++digits[c-'0'];
        else if (c == ' ' || c == '\t' || c == '\n')
            ++white_spaces;
        else
            ++others;
    }

    printf("Digits:");
    for (int i = 0; i <= 9; ++i) {
        printf("%d ", digits[i]);
    }
    printf("white space: %d. others: %d\n", white_spaces, others);
}

int main(void){
    count_some();
}