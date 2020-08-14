#include <stdio.h>

int procesarSecuenciaA();
int procesarSecuenciaB();
int sumaDigitosEsPar(int);
int esPar(int);

int main() {
    // Leer numeros hasta que llegue el 999
    // Cumplir con el patron: A 0 B 999
    // 0 seguro existe
    // A = secuencia de al menos 6 numeros
    // B = secuencia de numeros donde la suma de los digitos de cada uno es par

    // Secuencia A
    if (procesarSecuenciaA() < 6) {
        printf("\nNo llegaron 6 numeros antes del 0");
        return 1;
    }

    // Secuencia B
    if (!procesarSecuenciaB()) {
        printf("\nNo hubo una secuencia de numeros 
            donde la suma de los digitos de cada uno fuera par entre el 0 y el 999");
        return 2;
    }

    printf("\nLa secuencia ingresada cumple con el patron requerido!! Ganaste perri :)");
    return 0;
}

/**
 * procesarSecuenciaA
 *      parametros de entrada: ninguno
 *      resultado: cantidad de numeros leidos antes de que llegue el 0
**/
int procesarSecuenciaA() {
    int numero;
    int contadorA = 0;

    printf("Ingrese un numero entero (para terminar A: 0): ");
    scanf("%d", &numero);
    fflush(stdin);
    
    while (numero != 0) {
        contadorA++;

        printf("Ingrese un numero entero (para terminar A: 0): ");
        scanf("%d", &numero);
        fflush(stdin);
    }

    return contadorA;
}

/**
 * procesarSecuenciaB
 *      parametros de entrada: ninguno
 *      resultado: 1 si cumplio con la consigna
 *                 0 si no cumplio con la consigna
**/
int procesarSecuenciaB() {
    int numero;
    int controlPrimerNumero = 0;

    printf("Ingrese un numero entero (para terminar B: 999): ");
    scanf("%d", &numero);
    fflush(stdin);

    if (numero != 999) {
        // Llego por lo menos un numero
        controlPrimerNumero = 1;
    }

    while (numero != 999) {
        // Comprobar que la suma de los digitos del numero es par
        if (!sumaDigitosEsPar(numero)) {
            return 0;    // false
        }

        printf("Ingrese un numero entero (para terminar B: 999): ");
        scanf("%d", &numero);
        fflush(stdin);
    }

    return controlPrimerNumero;    // true
}

/**
 * sumaDigitosEsPar
 *      parametros de entrada: numero (int)
 *      resultado: 1 si la suma de los digitos de numero es par
 *                 0 si la suma de los digitos de numero es impar
**/
int sumaDigitosEsPar(int numero) {
    // 1534 => 1 + 5 + 3 + 4 = 13 => false
    int sumaDigitos = 0;

    while (numero != 0) {
        sumaDigitos += numero % 10;  // resto de 1534/10 = 1534 % 10 = 4
        numero /= 10;
    }

    return sumaDigitos % 2 == 0;
    // return esPar(sumaDigitos);
}


int esPar(int nro) {
    // int esPar = nro % 2 == 0;
    // return esPar;
    // ---------------------
    // if (nro % 2 == 0) {
    //     return 1;
    // } else {
    //     return 0;
    // }
    // ---------------------
    // ESTA ALTERNATIVA ES ALTAMENTE REPUDIABLE
    // TOXICA
    // CACA
    // BUUUUUU
    // int esPar = nro % 2 == 0;
    // switch (esPar) {
    //     case 1:
    //         return 1;
    //     case 0:
    //         return 0;
    // }
    // ---------------------
    return nro % 2 == 0;
}
