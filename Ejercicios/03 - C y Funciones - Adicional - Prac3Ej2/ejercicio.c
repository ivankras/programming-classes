#include <stdio.h>
#include <string.h>

void imprimirBinarioIterativo(int);
void imprimirBinarioRecursivo(int);

int main() {
    int num;

    // Leer un numero natural
    printf("Ingrese el numero a convertir a binario: ");
    scanf("%d", &num);
    fflush(stdin);

    // Imprimir su representacion binaria
    printf("Procesamiento iterativo: \n");
    imprimirBinarioIterativo(num);
    printf("\n\n");
    printf("Procesamiento recursivo: \n");
    imprimirBinarioRecursivo(num);

    return 0;
}

void imprimirBinarioIterativo(int numero) {
    char representacion[33] = "";
    char auxiliar[2] = "0";

    while (numero > 0) {
        // Agregar el resto al final de la cadena binaria
            // numero % 2 == 0   =>   '0'   (48)
            // numero % 2 == 1   =>   '1'   (49)
        auxiliar[0] = '0' + numero % 2;
        strcat(representacion, auxiliar);

        // Guardamos el nuevo numero (dividido por 2)
        numero /= 2;
    }

    // Invertir e imprimir la cadena resultante
    printf("La representacion del numero ingresado en binario es:\n%s", strrev(representacion));
}


void imprimirBinarioRecursivo(int numero) {
    // 9
    // -> 4
    //   -> 2
    //     -> 1
    //       -> 0  (base)
    if (numero > 0) {
        // Caso recursivo
        imprimirBinarioRecursivo(numero/2);
        // imprimir al volver del llamado recursivo evita que tengamos que invertir la cadena resultante
        printf("%c", '0' + numero % 2);
    } else {
        // Caso base (numero es 0 -> termine de dividir)
        printf("La representacion del numero ingresado en binario es: \n");
    }
}
