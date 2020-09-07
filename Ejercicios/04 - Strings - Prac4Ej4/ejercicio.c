#include <stdio.h>

unsigned int strlen(char[]);

int main() {
    // Implementar la función strlen
    //  (que devuelva la longitud de un string)
    char palabra[1532];

    printf("Ingresame la palabra, que te voy a decir su longitud porque soy re piola:\n");
    scanf("%s", palabra);
    fflush(stdin);

    printf("Aca esta tu largo: %d", strlen(palabra));

    return 0;
}

unsigned int strlen(char string[]) {
    unsigned int i;
    
    for (i=0; string[i] != '\0'; i++);
    
    return i;
}