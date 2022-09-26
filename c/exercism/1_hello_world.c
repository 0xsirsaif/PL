// Include the standard definitions header from the standard library, so that we
// have access to 'NULL'. This can be removed if your changes remove the need.
// for 'NULL'.

#include <stdio.h>
#include "hello_world.h"

const char *hello(void){
    return "Hello, World!";
}

int main(void){
    printf("%s\n", hello());
    return 0;
}