#include <stdio.h>
#include <ctype.h>

char *alloc(int);
void afree(char *);

#define ARRLEN 1000
static char array[ARRLEN];
static char *free_spot = array;

char *alloc(int num_of_req_slots){
    if (array + ARRLEN - free_spot >= num_of_req_slots){
        free_spot += num_of_req_slots;
        return free_spot - num_of_req_slots;
    } else {
        printf("No Free spaces for %d, only %ld\n", num_of_req_slots, (array + ARRLEN - free_spot));
        return NULL;
    }
}

void afree(char *p){
    if (p >= array && p <= array + ARRLEN){
        free_spot = p;
    }
}

int strlen_1(char *s, char s2[]){
    /*
     int len = 0;
     while (*(s2++) != '\0'){
        len++;
    }
    */
    int n, len;
    n = len = 0;
    while (s[n++] != '\0'){
        len++;
    }
    return len;
}


int main(void){
    alloc(950);
    alloc(950);
    afree(array+950);
    alloc(950);

    printf("%d\n", strlen_1("mohamed", "mohamed"));

    char array[7] = "mohamed";
    printf("%d\n", strlen_1(array, array));

    char *ptr;
    ptr = array;
    printf("%d\n", strlen_1(ptr, ptr));

    return 0;
}