#include <stdio.h>

int main() {
    char car;
    // int suma_car = 0;
    
    char caracter_anterior = 'g';
    int suma_sa = 0;
    
    // Leer caracteres hasta que se ingrese un '.'
    // Informar cantidad de caracteres 'A' leidos

    // do {
    //     // Leer caracter
    //     printf("Ingrese un caracter (corte = .): ");
    //     scanf("%c", &car);
    //     fflush(stdin);

    //     if (car == 'A') {
    //         // Contar caracter leido
    //         suma_car++;
    //     }
    //     printf("\n");
    // } while (car != '.');

    //printf("La cantidad de caracteres 'A' leidos es %d", suma_car);

    do {
        // Leer caracter
        printf("Ingrese un caracter (corte = .): ");
        scanf("%c", &car);
        fflush(stdin);

        if (car == 'a' && caracter_anterior == 's') {
            // Contar grupo "sa"
            suma_sa++;
        }
        printf("\n");

        // guardo el caracter
        caracter_anterior = car;
    } while (car != '.');

    printf("La secuencia \"sa\" fue ingresada %d veces", suma_sa);

    return 0;
}