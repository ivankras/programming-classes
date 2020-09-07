#include <stdio.h>
#include <string.h>

#define TAM_MAX 30
#define PEDIDO "Ingrese una palabra (corte: \"ZZZ\"): "

int longitud5(char[]);

int main() {
    // Leer palabras hasta que llegue "ZZZ"
    // Informar cantidad de palabras de longitud 5

    int contador = 0;
    char palabra[TAM_MAX];
    // palabra = dir(indice 0) (ej = 0xffa9)
    //   0    1    2    3    4
    // {'h', 'o', 'l', 'a', '\0'}

    // char h = 'h';
    // char o = 'o';
    // char l = 'l';
    // char a = 'a';
    // char fin = '\0';
    // char* palabra = &h; // si, en memoria, h -> o -> l -> a -> \0

    // (Equivalente - clase de punteros - todavia sin explicar jeje)
    // char* palabra;
    // malloc(palabra, TAM_MAX*sizeof(char));

    printf(PEDIDO);
    scanf("%s", palabra);
    fflush(stdin);

    // El "!= 0" podria no estar (por que?)
    while (strcmp(palabra, "ZZZ") != 0) {
        // El "!= 0" (0 re falso) podria no estar (por que?)
        if (longitud5(palabra) != 0) {
            contador++;
        }

        printf(PEDIDO);
        scanf("%s", palabra);
        fflush(stdin);
    }

    printf("\nLa cantidad de palabras de longitud 5 es %d", contador);

    return 0;
}

// Esta funcion verifica si la palabra "pal" es de longitud 5
// return:
//      1 si "pal" es de longitud 5 (true)
//      0 si "pal" no es de longitud 5 (false)
int longitud5(char pal[]) {
    return strlen(pal) == 5;
}
