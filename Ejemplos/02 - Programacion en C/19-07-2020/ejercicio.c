#include <stdio.h>

void ejercicio3Practica1(void);
int cuadrado(int* x);

int main() {
    // int a, par;

    // printf("Ingrese numero a elevar al cuadrado: ");
    // scanf("%d", &a);
    // fflush(stdin);

    // par = cuadrado(&a);

    // printf("\n%d^2 = %d", a);
    
    ejercicio3Practica1();

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

void ejercicio3Practica1(void) {
    int i;
    int a;
    int a_acum;

    // 10 veces
    for (i=0; i<10; i++) {
        // Leer un entero
        printf("Ingrese el entero a procesar (i=%d):", i+1);
        scanf("%d", &a);
        fflush(stdin);

        // Sumar todos los digitos
        a_acum = 0;
        while (a != 0) {
            a_acum += a % 10;
            a /= 10;

            if (a == 0) {
                if (a_acum < 10) {
                    // El resultado es de un digito
                    printf("%d\n", a_acum);
                } else {
                    // El resultado es de mas de un digito
                    // Empezar de nuevo con el nuevo a_acum
                    a = a_acum;
                    a_acum = 0;
                }
            } 
        }
    }
}
