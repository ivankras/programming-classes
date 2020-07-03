#include <stdio.h>

#define CANT_REPETICIONES 1500

int main() {
    int i;

    for (i=0; i < CANT_REPETICIONES; i++) {
        printf("Repeticion numero: %d\n", i+1);

        if (i % 3 == 0) {
            // 1 --> (3 == 0) : 0 (F)
            // 2 --> (3 == 0) : 0 (F)
            // 3 --> (0 == 0) : 1 (V)
            printf("    yay\n");
        }
    }

    printf("Cantidad de repeticiones: %d\n", i);

    int suma = 0;
    for (i=2; i <= 230; i+=2) {
        suma += i;
    }
    
    i = 2;
    suma = 0;
    while (i <= 230) {
        suma += i;
        i += 2;
    }

    printf("Suma de los numeros pares del 2 al 230: %d\n", suma);

    return 0;
}
