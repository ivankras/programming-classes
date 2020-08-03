#include <stdio.h>

int main() {
    // Leer caracteres hasta que llegue '#'
    // Contar palabras de longitud 6
    // Contar palabras que empiecen con "PA"
    // Contar palabras que terminen con "SA"
    // Contar palabras que empiecen con "MI" terminen con "CA"
    char car;                       // Para leer caracteres
    char carAnterior = '^';         // Para llevar el caracter anterior
    char carAnteriorAnterior = '^'; // Para llevar el caracter anterior al anterior
    int longitud = 0;               // Para contar longitud de palabra
    int controlMI = 0;
    int controlPA = 0;
    int contador6 = 0;
    int contadorPA = 0;
    int contadorSA = 0;
    int contadorMICA = 0;

    do {
        // Leer un caracter
        printf("Ingrese un caracter (corta con '#'): ");
        scanf("%c", &car);
        fflush(stdin);

        // Verificar si empezo con MI
        if (longitud == 1) {
            if (car == 'I' && carAnterior == 'M') {
                controlMI = 1; // (verdadero)
            } else if (car == 'A' && carAnterior == 'P') {
                controlPA = 1;
            }
        }

        // Verificar si es fin de palabra
        if ((car == ' ' || car == '#') && longitud > 0) {
            if (longitud == 6) {
                contador6++;
                printf("De 6 agregada!\n");
            }
            if (carAnterior == 'A') {
                if (carAnteriorAnterior == 'S') {
                    // terminadas en SA
                    contadorSA++;
                    printf("Terminada en SA agregada!\n");
                } else if (controlMI != 0 && carAnteriorAnterior == 'C') {
                    // empezadas en MI, terminadas en CA
                    contadorMICA++;
                    printf("MICA agregada!\n");
                }
            }
            if (controlPA != 0) {
                // empezadas en PA
                contadorPA++;
                printf("Empezada en PA agregada!\n");
            }

            longitud = 0;
            controlMI = 0; // (falso)
            controlPA = 0; // (falso)
        }
        
        if (car != ' ') {
            longitud++;
        }
        carAnteriorAnterior = carAnterior;
        carAnterior = car;

    } while (car != '#');

    printf("Cantidad de palabras de longitud 6: %d\n", contador6);
    printf("Cantidad de palabras empezadas en PA: %d\n", contadorPA);
    printf("Cantidad de palabras empezadas en MI y terminadas en CA: %d\n", contadorMICA);
    printf("Cantidad de palabras terminadas en SA: %d\n", contadorSA);

    return 0;
}