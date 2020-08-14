#include <stdio.h>

int procesarSecuenciaV();
int procesarSecuenciaQ();
int procesarSecuenciaW();

int main() {
    // Leer secuencia de caracteres, terminada en *
    // Cumplir con el patron V&Q%W
    // & existe
    // % existe
    // V: secuencia de palabras que comienzan con "op"
    // Q: secuencia de palabras de longitud máxima 8
    // W: secuencia de palabras de longitud 5, con tres 's'

    if (!procesarSecuenciaV()) {
        printf("No llegaron todas palabras comenzadas en op, antes del &");
        return 1;
    }

    if (!procesarSecuenciaQ()) {
        printf("No llegaron todas palabras de hasta 8 caracteres, entre el & y el %%");
        return 2;
    }

    if (!procesarSecuenciaW()) {
        printf("No llegaron todas palabras de longitud 5 con tres s, entre el %% y el *");
        return 3;
    }

    printf("Se cumplio el patron. Aguante todo!");
    return 0;
}

int procesarSecuenciaV() {
    char car;
    char carAnterior = ' ';
    char carAnteriorAnterior = ' ';
    int controlOP = 0;    // false

    printf("Ingrese caracter (fin de V: &): ");
    scanf("%c", &car);
    fflush(stdin);

    while(car != '&') {
        // Verificar si es el segundo caracter de la palabra (ej = ' ', 'o', 'p' => " op")
        if (carAnteriorAnterior == ' ' && carAnterior != ' ') {
            // Verificar si los dos primeros caracteres de la palabra son "op"
            if (car == 'p' && carAnterior == 'o') {
                controlOP = 1;    // true: la palabra empieza con op
            } else {
                return 0;    // false: no se cumple con V
            }
        }
        
        carAnteriorAnterior = carAnterior;
        carAnterior = car;

        printf("Ingrese caracter (fin de V: &): ");
        scanf("%c", &car);
        fflush(stdin);
    }

    return controlOP;
}

int procesarSecuenciaQ() {
    // TODO
    return 1;
}

int procesarSecuenciaW() {
    char car;
    char carAnterior = '*';
    int longitudPalabra = 0;
    int contadorS = 0;

    printf("Ingrese caracter (fin de W: *): ");
    scanf("%c", &car);
    fflush(stdin);

    while(car != '*') {
        if (car == 's') {
            contadorS++;
        } else {
            // Fin de palabra
            if (car == ' ' && carAnterior != ' ') {
                if (longitudPalabra != 5 || contadorS != 3) {
                    return 0;    // false: no cumple W
                }
                longitudPalabra = 0;
                contadorS = 0;
            }
        }

        if (car != ' ') {
            if (++longitudPalabra > 5) {
                return 0;    // false: palabras mas largas que 5
            }
        }
        carAnterior = car;

        printf("Ingrese caracter (fin de W: *): ");
        scanf("%c", &car);
        fflush(stdin);
    }

    return carAnterior != '*';
}