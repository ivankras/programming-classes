#include <stdio.h>

int main() {
    // Leer caracteres hasta que llegue un '.'
    // Contar grupos "ae" y "ea"

    char car;               // Para leer caracter
    int contador = 0;       // Para contar grupos de caracteres validos
    char carAnterior = '@'; // Para llevar el contador anterior

    // Leer caracter
    printf("Ingrese caracter (corta con '.'): ");
    scanf("%c", &car);
    fflush(stdin);

    while (car != '.') {
        // Verificar si se ingreso "ae" o "ea"
        if ((car == 'e' && carAnterior == 'a') || (car == 'a' && carAnterior == 'e')) {
            contador++;
        }

        carAnterior = car;

        // Leer caracter
        printf("Ingrese caracter (corta con '.'): ");
        scanf("%c", &car);
        fflush(stdin);
    }

    printf("Cantidad de grupos \"ea\" o \"ae\": %d", contador);

    return 0;
}