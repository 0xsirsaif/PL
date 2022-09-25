#include <stdio.h>

// Exercise 1-1. Run the ``hello, world'' program on your system. Experiment with leaving out parts of the program, to see what error messages you get.
void hello_world(void){
    // 1. '' instead of ""?
    printf("Hello, World!\n");
}

// Exercise 1-2. Experiment to find out what happens when printf's argument string contains \c, where c is some character not listed above.
void wrong_escape_sequence(void){
    // warning: unknown escape sequence: '\c'
    printf("Hello, World!\\c");
}

// Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
#define LOWER 0.0
#define UPPER 300.0
#define STEP 20.0

void f_to_c(void){
    float fahrenheit, celsius;

    printf("========================\n");
    printf("Fahrenheit\tCelsius\n");
    printf("========================\n");
    fahrenheit = LOWER;
    while (fahrenheit <= UPPER){
        celsius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("|%6.2f|\t|%6.2f|\n", fahrenheit, celsius);
        fahrenheit += STEP;
    }
}

// Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
void c_to_f(void){
    float fahrenheit, celsius;
    float upper = 148.89;
    float lower = -17.78;
    float step = 11.11;

    printf("========================\n");
    printf("Fahrenheit\tCelsius\n");
    printf("========================\n");
    celsius = lower;
    while (celsius <= upper){
        fahrenheit = ((9.0/5.0) * celsius) + 32.0;
        printf("|%6.2f|\t|%6.2f|\n", celsius, fahrenheit);
        celsius += step;
    }
}

// Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.
void reverse_f_to_c(void){
    float fahrenheit, celsius;

    printf("========================\n");
    printf("Fahrenheit\tCelsius\n");
    printf("========================\n");
    fahrenheit = UPPER;
    while (fahrenheit >= LOWER){
        celsius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("|%6.2f|\t|%6.2f|\n", fahrenheit, celsius);
        fahrenheit -= STEP;
    }
}

// Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
void verify_eof_value(void){

}
// Exercise 1-7. Write a program to print the value of EOF.

int main(void){
//    hello_world();
//    wrong_escape_sequence();
//    f_to_c();
//    c_to_f();
//    reverse_f_to_c();
    return 0;
}