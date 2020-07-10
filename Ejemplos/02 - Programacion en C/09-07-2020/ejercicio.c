#include <stdio.h>
// #define TAMANO 25

int main() {
    int i, j, tam;

    // for (k = 1; k < 10; k++)
    //     switch(k) {
    //     case 9:
    //     case 1:
    //         printf("    *    \n");
    //         break;
    //     case 8:
    //     case 2:
    //         printf("   ***   \n");
    //         break;
    //     case 7:
    //     case 3:
    //         printf("  *****  \n");
    //         break;        
    //     case 6:
    //     case 4:
    //         printf(" ******* \n");
    //         break;
    //     case 5:
    //         printf("*********\n");
    //         break;
    //     default:
    //         break;
    //     }

    // printf("    *    \n");  // primera linea (tam/2 - 0 == 4) espacios antes y después del asterisco.
    // printf("   ***   \n");  // segunda linea (tam/2 - 1 == 3) espacios antes y después de los asteriscos
    // printf("  *****  \n");  // tercera linea (tam/2 - 2 == 2) espacios antes y despues de los asteriscos
    // printf(" ******* \n");  // cuarta linea  (tam/2 - 3 == 1) espacios antes y después de los asteriscos
    // printf("*********\n");  // quinta linea  (tam/2 - 4 == 0) 
    // printf(" ******* \n");  // sexta linea (tam/2 - 3 == 1) espacios a y d de los ast
    // printf("  *****  \n");
    // printf("   ***   \n");
    // printf("    *    \n");

    printf("Ingrese el tamano (impar) del rombo: ");
    scanf("%d", &tam);
    fflush(stdin);
    // tam = TAMANO;

    // Si el tamaño ingresado es impar
    if (tam % 2 == 1) {
        // Creciente
        for (i=0; i<(tam/2)+1; i++) {
            // Imprimir (tam/2 - i) espacios
            for (j=0; j < (tam/2 - i); j++)
                printf(" ");
            // Imprimir (2*i + 1) asteriscos
            for (j=0; j < (2*i + 1); j++)
                printf("*");
            // Imprimir (tam/2 - i) espacios
            for (j=0; j < (tam/2 - i); j++)
                printf(" ");
            // Imprimir nueva línea
            printf("\n");
        }
        // Decreciente
        for (i=(tam/2)-1; i>=0; i--) {
            // Imprimir (tam/2 - i) espacios
            for (j=0; j < (tam/2 - i); j++)
                printf(" ");
            // Imprimir (2*i + 1) asteriscos
            for (j=0; j < (2*i + 1); j++)
                printf("*");
            // Imprimir (tam/2 - i) espacios
            for (j=0; j < (tam/2 - i); j++)
                printf(" ");
            // Imprimir nueva línea
            printf("\n");
        }
    } else {
        printf("\nEl tamano ingresado no es impar");
    }

    return 0;
}
