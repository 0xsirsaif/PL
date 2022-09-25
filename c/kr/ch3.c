#include <stdio.h>
#include <stdbool.h>

// Exercise 3-1. Our binary search makes two tests inside the loop, when one would suffice (at the price of more tests outside.)
// Write a version with only one test inside the loop and measure the difference in run-time.
void binary_search(void);

/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char pattern[]){
    int i, j, k;
    for (i = 0; s[i] != '\0'; i++) {
        for (j=i, k=0; pattern[k] !='\0' && s[j] == pattern[k]; j++, k++)
            ;
        if (k > 0 && pattern[k] == '\0')
            return i;
    }
    return -1;
}

//bool is_armstrong_number(int candidate){
//
//}

char *itoa(int number){
    char *string =
    int i;

    i = 0;
    do {
        string[i++] = n % 10 + '0';
    } while ((number /= 10) > 0);
    return string;
}

int main(void){
//    printf("%d\n", strindex());
}