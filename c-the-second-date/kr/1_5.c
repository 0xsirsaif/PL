/*
 * The simplest example is a program that copies its input to its output one character at a time:
        read a character
            while (character is not end-of-file indicator)
                output the character just read
                    read a character
 *
 * */

#include <stdio.h>

void long_version(void){
    int c = getchar();
    while (c != EOF){
        putchar(c);
        c = getchar();
    }
}

int compact_version(){
    int c;
    while ((c = getchar()) != EOF){
        putchar(c);
    }
    return 0;
}

int verify_eof_value(void){
    printf("Enter any Key\n\n");
    printf("The expression getchar() != EOF evaluates to %d\n", getchar() != EOF);
    return 0;
}

int value_of_eof(void){
    printf("The value of EOF is %d\n", EOF);
    return 0;
}

int count_char(void){
    long nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("count: %ld\n", nc);
    return nc;
}

int count_lines(void){
    int c, lc;
    lc = 0;
    while ((c = getchar()) != EOF){
        if (c == '\n')
            ++lc;
    }
    printf("line count: %d\n", lc);
    return lc;
}

#define OUT_WORD 0
#define IN_WORD 1

int wc(void){
    /*
     * count lines, words, and characters in input
     * lines -> every \n
     * words -> ' ' or '\n' or '\t': Every time the program encounters the first character of a word, it counts one more word.
     * characters -> always
     *
     * */
    int c;
    int state;
    int nl, nw, nc;

    state = OUT_WORD;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF){
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT_WORD;
        else if (state == OUT_WORD){
            state = IN_WORD;
            ++nw;
        }
    }
    printf("line: %d, words: %d, characters: %d\n", nl, nw, nc);
    return 0;
}

void print_input_one_word_per_line(void){

}

int main(void){
    print_input_one_word_per_line();
    return 0;
}