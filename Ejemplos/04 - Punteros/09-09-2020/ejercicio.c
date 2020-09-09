#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int *ptr = &a;


    printf("a: %d -- &a: %d\n", a, &a);
    printf("b: %d -- &b: %d\n", b, &b);
    printf("ptr: %d -- *ptr: %d\n\n", ptr, *ptr);

    printf("Variable a: %d\n", a);
    printf("Variable b: %d\n", b);
    printf("Valor apuntado por ptr: %d\n\n", *ptr);

    *ptr = 6;
    printf("Variable a: %d\n", a);
    printf("Variable b: %d\n", b);
    printf("Valor apuntado por ptr: %d\n\n", *ptr);

    a = 7;
    printf("Variable a: %d\n", a);
    printf("Variable b: %d\n", b);
    printf("Valor apuntado por ptr: %d\n\n", *ptr);

    ptr = &b;
    printf("Variable a: %d\n", a);
    printf("Variable b: %d\n", b);
    printf("Valor apuntado por ptr: %d\n\n", *ptr);

    printf("a: %d -- &a: %d\n", a, &a);
    printf("b: %d -- &b: %d\n", b, &b);
    printf("ptr: %d -- *ptr: %d\n\n", ptr, *ptr);

    // Retorno
    return 0;
}