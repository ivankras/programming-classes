#include <stdio.h>

int main() {
    // b: puntero constante con la direccion del primer elemento del arreglo
    int b[5] = {1, 2, 3, 4, 5};

    // bPtr: puntero no constante,
    //  al que se le asigna la direccion del primer elemento del arreglo
    int *bPtr;
    bPtr = &b[0];
    // bPtr = b; // equivalente


    // Tienen que ser iguales (ver arriba)
    printf("b: %p, bPtr: %p\n", b, bPtr);


    printf("b[0] = %d o %d\n", b[0], *bPtr);
    printf("b[3] = %d o %d\n", b[3], *(bPtr + 3));
}