#include <stdio.h>
#include <math.h>

float calcularPi(int);
double calcularPiMejorada(int);

int main() {
    int terminos;
    float resultado;
    
    printf("Aproximacion del numero pi, a partir de la serie de Nilakantha\n\n");
    printf("Ingrese el numero de terminos de la serie a utilizar: ");
    scanf("%d", &terminos);
    fflush(stdin);

    resultado = calcularPi(terminos);
    printf("\nValor de pi, calculado utilizando %d terminos de la serie de Nilakantha (float)\n%.6f", terminos, resultado);

    return 0;
}

float calcularPi(int N) {
    int i;
    float resultadoParcial = 3;

    for (i=1; i<=N; i++) {
        resultadoParcial += 4*pow(-1, i-1)/(2*i*(2*i+1)*(2*i+2));
    }

    return resultadoParcial;
}
