#include <stdio.h>
#include <math.h>

int sumar(int a, int b);
int miPotencia(int a, int b);

int main() {
    int a, b;

    printf("SUMA DE DOS NUMEROS ENTEROS\n\n");
    printf("Ingrese el primer numero a sumar: ");
    scanf("%d", &a);
    fflush( stdin );
    printf("\nIngrese el segundo numero a sumar: ");
    scanf("%d", &b);
    fflush( stdin );
    printf("\n\n");

    int suma1 = sumar(a, b);
    int suma2 = a + b;

    if (suma1 == suma2) {
        printf("Dan lo mismo\n");
        printf("%d -- %d", suma1, suma2);
    } else {
        printf("No dan lo mismo\n");
        printf("%d -- %d", suma1, suma2);
    }

    return 0;
}

int sumar(int a, int b) {
    return a + b;
}