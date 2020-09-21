#include <stdio.h>

#define DEBUG

#define FALSE 0
#define TRUE !FALSE

#ifndef NULL
    #define NULL 0
#endif

#if !defined(NULL)
    #define NULL 0
#endif

int main() {
    
    int a = 3;

    a++;
    #ifdef DEBUG
        printf("Valor intermedio de a: %d\n", a);
    #endif

    a++;
    #ifdef DEBUG
        printf("Valor intermedio de a: %d\n", a);
    #endif

    #ifndef DEBUG
    printf("Valor final de a: %d", a);
    #endif

    // Se compila el printf si A está definido y B no lo está
    #ifdef A
        #ifndef B
            printf("Hola");
        #endif
    #endif

    return 0;
}