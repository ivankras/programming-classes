#include <stdio.h>

int cuadrado(int x);

int main() {
    int a, par;

    printf("Ingrese numero a elevar al cuadrado: ");
    scanf("%d", &a);
    fflush(stdin);

    par = cuadrado(&a);

    printf("\n%d^2 = %d", a);

    return 0;
}

// f(x) = x^2
int cuadrado(int* x) {
    // Calcular el cuadrado de x y guardarlo en x
    *x = (*x) * (*x); 

    if ((*x) % 2 == 0) {
        // Devolver 1 si x es par
        return 1;
    } else {
        // Devolver 0 si x es impar
        return 0;
    }
    // return (*x) % 2 == 0;
}


int funcionResta(int comienzo) {
    if (comienzo <= 0) {
        return 0;   // caso base
    } else {
        return funcionResta(comienzo-1);  // caso recursivo
    }
}

unsigned int factorial(unsigned int n) {
    if (n == 0) {
        return 1;  // !0 = 1
    } else {
        return n * factorial(n - 1);  // !n = n * !(n - 1)
    }
    // !5 = 5 * !4 = 120        
    // !4 = 4 * !3 = 24
    // !3 = 3 * !2 = 6          factorial(3) => return 3 * factorial(2)
    // !2 = 2 * !1 = 2          factorial(2) => return 2 * factorial(1)
    // !1 = 1 * !0 = 1          factorial(1) => return 1 * factorial(0)
    // !0 = 1                   factorial(0) => return 1
}


