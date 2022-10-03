#include "isogram.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stddef.h>
#include <ctype.h>

bool is_special_char(char c){
    if (c == '-' || c == ' ')
        return true;
    else
        return false;
}

bool is_isogram(const char phrase[]){
    size_t i, j, len;
    if (phrase == NULL){
        return false;
    }

    len = strlen(phrase);
    for (i = 0; i < len; i++) {
        if(is_special_char(phrase[i]))
            continue;
        else {
            for (j = i+1; j < len; j++) {
                if (phrase[i] == phrase[j] || phrase[i] == tolower(phrase[j]) || phrase[i] == toupper(phrase[j]))
                    return false;
            }
        }
    }
    return true;
}

int main(int argc, char *argv[]){
    printf("%d", 200 * 300 * 400 * 500);
//    int i = 37;
//    float f = *(float *) &i;
//    printf("%f\n", f);
//    printf("is isogram? %d\n", is_isogram("Alphabet"));
}