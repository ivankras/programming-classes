#include <stdio.h>

int main() {
    // Leer valores de teclado hasta que llegue el 8888
    // Para cada valor leido, imprimir el mayor digito
    // Informar la suma de todas las unidades de los valores leidos
    
    int lectura;
    int aux;
    int max_digito;
    int suma_unidades = 0;
    
    // Se lee el primer valor
    printf("Ingrese un valor (corte -> 8888):");
    scanf("%d", &lectura);
    fflush(stdin);
    printf("\n");

    // Se itera hasta que se ingrese el 8888
    while (lectura != 8888) {
        // Se separa un digito (el menos significativo)
        aux = lectura % 10; // ej: 5234 % 10 = resto de (5234/10) = 4
        // Se agrega el digito unidad a la suma
        suma_unidades += aux;
        
        // Se busca el maximo digito de lectura
        max_digito = aux; // se considera el digito menos sign como el mayor 
        lectura /= 10; // se quita el valor menos significativo
        while (lectura != 0) {
            aux = lectura % 10; // 3 (se toma el nuevo valor menos signif.)
            // Se comprueba que el digito es efectivamente mayor
            if (aux > max_digito) {
                max_digito = aux; // Se asigna el nuevo mayor valor
            }
            lectura /= 10; // se quita el valor menos significativo
        }
        printf("\nMaximo digito: %d", max_digito);

        // Se lee un nuevo valor
        printf("Ingrese un valor (corte -> 8888):");
        scanf("%d", &lectura);
        fflush(stdin);
        printf("\n");
    }

    printf("\nSuma de las unidades de los valores ingresados: %d", suma_unidades);

    return 0;
}