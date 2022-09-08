#include <stdio.h>

#define LOWER 0
#define Upper 300
#define STEP  20

void fahrenheit_to_celsius(void){
    float lower, upper, step, fahrenheit, celsius;
    lower = 0;
    upper = 300;
    step = 20;

    printf("==== [fahrenheit -> celsius] Table ====\n\n");
    printf("fahrenheit\tcelsius\n");
    fahrenheit = lower;
    while (fahrenheit <= upper) {
        celsius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("%5.0f\t%13.1f\n", fahrenheit, celsius);
        fahrenheit += step;
    }
}

void celsius_to_fahrenheit(void){
    float lower, upper, step, fahrenheit, celsius;
    lower = -17.8;
    upper = 148.9;
    step = 11.1;

    printf("==== [celsius -> fahrenheit] Table ====\n\n");
    printf("celsius\tfahrenheit\n");
    celsius = lower;
    while (celsius <= upper) {
        fahrenheit = (9.0/5.0) * celsius + 32.0;
        printf("%6.1f\t%5.0f\n", celsius, fahrenheit);
        celsius += step;
    }
}

void fahrenheit_to_celsius_reverse(void){
    printf("\n\n==== [fahrenheit -> celsius] Reverse Table ====\n\n");
    printf("fahrenheit\tcelsius\n");
    for(float fahrenheit = 300; fahrenheit >= 0; fahrenheit -= 20){
        printf("%6.0f\t%14.2f\n", fahrenheit, (5.0/9.0) * (fahrenheit - 32.0));
    }
}

void fahrenheit_to_celsius_symbolic(void){
    printf("\n\n==== [fahrenheit -> celsius] Table: using symbolic name ====\n\n");
    printf("fahrenheit\tcelsius\n");
    for(float fahrenheit = Upper; fahrenheit >= LOWER; fahrenheit -= STEP){
        printf("%6.0f\t%14.2f\n", fahrenheit, (5.0/9.0) * (fahrenheit - 32.0));
    }
}

int main(void){
    fahrenheit_to_celsius();
    celsius_to_fahrenheit();
    fahrenheit_to_celsius_reverse();
    fahrenheit_to_celsius_symbolic();

    return 0;
}
