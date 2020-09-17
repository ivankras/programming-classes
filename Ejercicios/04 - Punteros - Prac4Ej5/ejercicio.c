#include <stdio.h>

void imprimirArreglo(int*, int);
void invertir(int*, int*);  // conocida en otros lados como "swap"
void invertirArreglo(int*, int);

int main() {
    int prueba1[] = {1, 2, 4, 9, 5};
    int prueba2[] = {1, 2, 4, 8, 9, 5};
    int prueba3[] = {};
    int prueba4[] = {5};

    printf("Prueba 1\n");
    imprimirArreglo(prueba1, 5);
    invertirArreglo(prueba1, 5);
    imprimirArreglo(prueba1, 5);
    printf("\n");

    printf("Prueba 2\n");
    imprimirArreglo(prueba2, 6);
    invertirArreglo(prueba2, 6);
    imprimirArreglo(prueba2, 6);
    printf("\n");

    printf("Prueba 3\n");
    imprimirArreglo(prueba3, 0);
    invertirArreglo(prueba3, 0);
    imprimirArreglo(prueba3, 0);
    printf("\n");

    printf("Prueba 4\n");
    imprimirArreglo(prueba4, 1);
    invertirArreglo(prueba4, 1);
    imprimirArreglo(prueba4, 1);
    printf("\n");

    return 0;
}

// Funcion que recibe arreglo unidimensional y lo imprime por consola
void imprimirArreglo(int* arreglo, int longitud) {
    int i;
    for (i=0; i<longitud; i++) {
        printf("%d |", *arreglo);
        arreglo++;
    }
    printf("\n");
}

void invertir(int* pos1, int* pos2) {
    int aux = *pos1;
    *pos1 = *pos2;
    *pos2 = aux;
}

// Funcion que recibe arreglo unidimensional y lo invierte
void invertirArreglo(int* arreglo, int longitud) {
    int i;
    for (i=0; i<longitud/2; i++) {
        invertir(arreglo + i, arreglo + (longitud - 1) - i);
    }
}

// 1   5   4   5   7           => longitud/2 = 2
// 7   5   4   5   1               (hasta i=1)

// 2   8   7   6   3   4       => longitud/2 = 3
// 4   3   6   7   8   2           (hasta i=2)
        
// 7   8   1   2   6   4   5   => longitud/2 = 3
// 5   4   6   2   1   8   7       (hast i=2)
