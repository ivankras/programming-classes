#include <stdio.h>
#include <stdlib.h>  // para la funcion rand()
#include <time.h>    // para la funcion time()

#define TAMANO 10

void inicializarArreglo(int[TAMANO]);
void procesarArreglo(int[TAMANO]);
int esPar(int);

int main() {
    // Generar 50 numeros enteros en forma pseudo-aleatoria
    // Almacenarlos en un arreglo unidimensional
    // Informar pares en posiciones impares
    // Informar impares en posiciones pares
    int arreglo[TAMANO];

    inicializarArreglo(arreglo);
    procesarArreglo(arreglo);
    return 0;
}

void inicializarArreglo(int arreglo[TAMANO]) {
    int i;
    srand(time(NULL)); // Inicializar secuencia de aleatorios
    for (i=0; i<TAMANO; i++) {
        // Generar numero para la posicion i del arreglo
        //      "Aleatorio" entre 0 y VAL_MAX-1:   rand() % VAL_MAX
        //      "Aleatorio" entre 2 y VAL_MAX+1:   (rand() % VAL_MAX) + 2
        arreglo[i] = rand() % 100;
        printf("%d:%d\t", i, arreglo[i]);
    }
    printf("\n");
}

// posicion   0  1  2  3  4  5  6  7  8  9
// arreglo  [10  5  6  3  8  4  1  5  3 89]
void procesarArreglo(int arreglo[TAMANO]) {
    int i;
    int posImparValPar = 0;
    int posParValImpar = 0;

    for (i=0; i<TAMANO; i++) {
        if (esPar(arreglo[i])) {
            if (!esPar(i)) {
                posImparValPar++;
            }
        } else {
            if (esPar(i)) {
                posParValImpar++;
            }
        }
    }

    printf("Valores pares en posiciones impares: %d\n", posImparValPar);
    printf("Valores impares en posiciones pares: %d\n", posParValImpar);
}

int esPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

// void procesarArreglo(int arreglo[50]) {
//     int i;
//     int posImparValPar = 0;
//     int posParValImpar = 0;

//     // Verificar posiciones pares
//     for (i=0; i<50; i+=2) {
//         if (arreglo[i] % 2 == 0) {
//             posParValImpar++;
//         }
//     }

//     // Verificar posiciones impares
//     for (i=1; i<50; i+=2) {
//         if (arreglo[i] % 2 == 0) {
//             posImparValPar++;
//         }
//     }

//     printf("Valores pares en posiciones impares: %d\n", posImparValPar);
//     printf("Valores impares en posiciones pares: %d\n", posParValImpar);
// }
