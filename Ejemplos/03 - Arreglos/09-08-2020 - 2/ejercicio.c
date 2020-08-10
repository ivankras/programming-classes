#include <stdio.h>
#include <string.h>

void pedirString(char[]);
void procesarString(char[]);
int esVocal(char);

int main() {
    char arreglo[50];
    pedirString(arreglo);
    procesarString(arreglo);
    return 0;
}

void pedirString(char arreglo[]) {
    printf("Ingrese un string (hasta 49 caracteres): ");
    scanf("%49[^\n]", arreglo);
    fflush(stdin);
}

void procesarString(char arreglo[]) {
    // Calcular longitud string
    // Contar vocales
    char auxiliar;
    int i = 0;
    int vocales = 0;
    
    printf("Longitud del string (strlen): %d\n", strlen(arreglo));

    auxiliar = arreglo[i];
    while (auxiliar != '\0') {
        if (esVocal(auxiliar)) {
            vocales++;
        }
        auxiliar = arreglo[++i];
    }
    
    printf("Longitud del string (contador): %d\n", i);
    printf("Cantidad de vocales: %d\n", vocales);
}

int esVocal(char c) {
    return (
        c == 'a' || c == 'A' ||
        c == 'e' || c == 'E' ||
        c == 'i' || c == 'I' ||
        c == 'o' || c == 'O' ||
        c == 'u' || c == 'U'
    );
}
