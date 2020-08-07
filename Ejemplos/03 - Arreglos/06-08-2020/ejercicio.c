#include <stdio.h>
#include <string.h>
#define TAMANO 4

int main() {
    // Declaración de variables
    int i;
    int a[TAMANO];
    char hola[10] = "holaaa";
    char hola2[10] = "Hollaa2";

    // Algoritmo

    // Leer valores para el arreglo
    for (i=0; i<=TAMANO-1; i++) {
        printf("Ingrese un valor para la posicion %d del arreglo: ", i);
        scanf("%d", &a[i]);
        fflush(stdin);
    }
    // Imprimir arreglo
    for (i=0; i<TAMANO; i++) {
        printf("Posicion del arreglo %d: valor %d\n", i, a[i]);
    }

    // Comparar strings
    if (strcmp(hola, hola2) == 0) {
        printf("Son iguales");
    } else {
        if (strcmp(hola, hola2) < 0) {
            printf("hola esta antes alfabeticamente");
        } else {
            printf("hola esta despues alfabeticamente");
        }
    }

    // Asignar strings
    strcpy(hola, "holaaaaa");

    // Imprimir string
    printf("El string es: %s", hola);

    // Retorno
    return 0;
}