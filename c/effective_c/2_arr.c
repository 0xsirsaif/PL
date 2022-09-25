#include <stdio.h>

int main(void){
    char str[11];
    for (unsigned int i = 0; i < 10; ++i) {
        str[i] = '0' + i;
    }
    str[10] = '\0';
    for (int i=0; i < 10; i++){
        printf("%c ith element\n", str[i]);
    }
}

