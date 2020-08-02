#include <stdio.h>

int main() {
    // Leer caracteres hasta que se ingrese '*'
    // Contar palabras de longitud >= 6,
    //  comenzadas y terminadas en 's',
    //  con exactamente dos 'o'
    char car;                   // para leer caracter
    char carAnterior = '#';     // para verificar que el ultimo caracter fue una 's'
    int controlS = 0;           // para controlar que la palabra empezo con 's'
    int longitud = 0;           // para controlar longitud de palabra
    int cantO = 0;              // para contar cantidad de 'o's
    int contadorPalabras = 0;   // para contar palabras acorde a la consigna

    // Leer caracter
    printf("Ingrese caracter (termina con '*'): ");
    scanf("%c", &car);
    fflush(stdin);

    while (car != '*') {
        // Verificar que el primer caracter es una s
        if (longitud == 0 && car == 's') {
            controlS = 1;
        }

        // Verificar si es fin de palabra
        if (car == ' ' && longitud != 0) {
            // Verificar condiciones de exito
            if (longitud >= 6 && controlS != 0 && carAnterior == 's' && cantO == 2) {
                contadorPalabras++;
                printf("Palabra contada!\n");
            }

            // Palabra procesada: volver parametros a valores por defecto
            longitud = 0;
            controlS = 0;
            cantO = 0;
        } else if (car == 'o') {
            cantO++;
        }

        if (car != ' ') {
            // Contar caracter de palabra
            longitud++;
        }
        carAnterior = car;
        
        // Leer siguiente caracter
        printf("Ingrese caracter (termina con '*'): ");
        scanf("%c", &car);
        fflush(stdin);
    }

    // Verificar condiciones de exito para la ultima palabra
    if (longitud >= 6 && controlS != 0 && carAnterior == 's' && cantO == 2) {
        contadorPalabras++;
        printf("Palabra contada!\n");
    }

    printf("\nCantidad de palabras de long >= 6 empezadas y terminadas en 's', con dos 'o': %d", contadorPalabras);

    return 0;
}