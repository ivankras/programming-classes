#include <stdio.h>

int doble(int num);
int cuadrado(int num);

int main() {
    // Para los numeros entre 1 y 10:
    //  - calcular el doble e imprimir
    //  - elevar al cuadrado e imprimir
    int i;
    for (i=1; i<=10; i++) {
        printf("Numero %d, doble %d, cuadrado %d\n", i, doble(i), cuadrado(i));
    }    

    return 0;
}

int doble(int num) {
    return num*2;
}

int cuadrado(int num) {
    return num*num;
}
