#include <stdio.h>

int cuadrado(int x);

int main() {
    int a, b;

    printf("Ingrese numero a elevar al cuadrado: ");
    scanf("%d", &a);
    fflush(stdin);

    b = cuadrado(a);    

    printf("\n%d^2 = %d", a, b);

    return 0;
}

// f(x) = x^2
int cuadrado(int x) {
    return x*x;
}
