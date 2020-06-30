#include "ejemplos.c"

// <tipo_retorno> <nombre_func>(<tipo_arg> <nombre_arg>) {
//     <definicion de variables>
//     <algoritmo>
//     return <valor de retorno> 
// }

/* Función principal */
int main(int argc, char* argv[]) {
    // Definicion de variables
    
    // <tipo_dato> <nombre>;
    int a; // Tengo disponible en memoria la variable a, pero tiene información basura
    char b;
    char c;
    // <tipo_dato> <nombre> = <valor_inicial>;
    int contador = 10;
    int i;
    int resultado;

    // Algoritmo
    a = 15;
    b = 'b';
    c = 34; // 'c'

    // Lo de adentro del paréntesis tiene que dar V o F
    // ==, !=, <, >, <=, >=
    if ((a == b) || (c > a)) {
        a = 32;
    } else {
        a = a + 1;
    }
    
    while (contador > 0) {
        // contador = contador - 1;
        // contador -= 1;
        contador--;
    }

    // for (<instruccion inicial>; <condicion de permanencia>; <instruccion post vuelta>)
    for (i=0; i<15; i++) {
        a *= 2;
        b /= 1;
        // 9 % 4 = divido 9 por 4 (2) y me quedo con el resto: 1
        // 9 % 4 = 1

        // 15 % 2 = 1  =>  15 es impar
        // 14 % 2 = 0  =>  14 es par
    }

    resultado = sumarMacro(a);

    // Retorno
    return 0;
}
