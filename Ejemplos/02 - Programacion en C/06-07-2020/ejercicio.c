#include <stdio.h>

#define PRUEBA 10

int main() {
    int a = PRUEBA;
    char car;

    // switch(a) {
    //     case 0:
    //         printf("Es cero");
    //         break;
    //     case 1:
    //         printf("Es uno");
    //         break;
    //     case 8:
    //         printf("Es ocho");
    //         break;
    //     case 10:
    //         printf("A: Anda a la cancha, bobo");
    //     default:
    //         printf("\nB: El gordo se la come");
    // }

    // do {
    //     printf("Sigue dando vueltas hasta que ingreses el 1\n");
    //     scanf("%d", &a); // <- 1
    //     fflush(stdin);
    //     printf("%d \n", a); // <- 1
    // } while(a++ != 1); // (1 != 1) ? false  ...  a (1) = 1 + 1 = 2

    // printf("%d \n", a);

    car = 65;  // 'A' => 65 en ASCII
    a = car;    // a => 65 (es un entero, no va a ser 'A' nunca)

    printf("char: %c -- int: %d\n", car, a);
    printf("char: %c -- int: %d\n", car, car);

    return 0;
}
