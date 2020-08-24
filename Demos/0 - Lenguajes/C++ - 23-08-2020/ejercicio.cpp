#include <iostream>

int doble(int num);
int cuadrado(int num);

int main() {
    // Para los numeros entre 1 y 10:
    //  - calcular el doble e imprimir
    //  - elevar al cuadrado e imprimir
    for (int i=1; i<=10; i++) {
        std::cout << "Numero " << i 
            << ", doble " << doble(i)
            << ", cuadrado " << cuadrado(i)
            << std::endl;
    }
    return 0;
}

int doble(int num) {
    return num*2;
}

int cuadrado(int num) {
    return num*num;
}
