#include <stdio.h>
#include <string.h>

int main() {
    int i, j;
    int matriz[3][4] = {
    //col0   1   2   3
        {0,  1,  2,  3},        // Fila 0
        {4,  5,  6,  7},        // Fila 1
        {8,  9,  10, 11}        // Fila 2
    };

    char cadenas[5][80] = {
                    //   0    1    2    3    4    5    6    7
        "string0",  // {'s', 't', 'r', 'i', 'n', 'g', '0', '\0'}
        "string1",
        "string2",
        "string3",
        "string4"
    };

    // Acceso individual de elementos de arreglo bidimensional
    for (i=0; i<3; i++) {       // Para cada una de las filas
        for (j=0; j<4; j++) {   // Recorrer cada uno de los elementos (columnas)
            printf("Posicion %d, %d: %d\n", i, j, matriz[i][j]);
        }
    }

    // Acceso de arreglo de strings
    for (i=4; i>=0; i--) {
        printf("%s\n", cadenas[i]);
    }

    return 0;
}
