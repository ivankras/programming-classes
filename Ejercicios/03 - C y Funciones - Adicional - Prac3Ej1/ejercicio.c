#include <stdio.h>
#include <string.h>

#define PAISES_A_EVALUAR 3
#define MIN_ESPECIES 40

// typedef struct person
// {
//     char nombre[30];
//     unsigned int edad;
// } persona;

// persona p1;

// persona p2 = {"Olga", 56};

// strcpy(p1.nombre, "Luis");
// p1.edad = 16;

// persona* ptrP1 = &p1;
// *ptrP1.edad += 1;
// ptrP1->edad += 1;

// -------------------------------------

// typedef <tipo_de_dato> <nuevo_nombre>;
typedef struct TipoRegAves
{
    char nombre_pais[30];
    unsigned int cantidad_aves;
} RegistroAves;

// typedef int entero;

void cargarDatosPais(RegistroAves*);
void procesarResultados(RegistroAves*);

int main() {

    // struct TipoRegAves registro[PAISES_A_EVALUAR];
    RegistroAves registro[PAISES_A_EVALUAR];
    
    int i;

    // Leer cantidad de especies de aves de 14 paises de America
    for (i=0; i<PAISES_A_EVALUAR; i++) {
        cargarDatosPais(&(registro[i]));
    }

    procesarResultados(registro);

    return 0;
}

// int arreglo[5] = {0, 5, 4, 6, 8};
// arreglo[0];  --> 0
// arreglo[4];  --> 8
// &(arreglo[3]) --> arreglo + 3  [int*]

void cargarDatosPais(RegistroAves* reg) {
    // Pedir nombre pais
    printf("Ingrese el nombre de un pais de America (max. 30 caracteres): ");
    scanf("%s", reg->nombre_pais);
    fflush(stdin);

    // Pedir cantidad de aves
    printf("Ingrese la cantidad de aves en ese pais: ");
    scanf("%d", &(reg->cantidad_aves));
    fflush(stdin);

    printf("\n");
}

void procesarResultados(RegistroAves* regio) {
    RegistroAves minimo = {"", 9899954};
    RegistroAves casiMinimo = {"", 9899954};
    int i, contador = 0;

    for (i=0; i<PAISES_A_EVALUAR; i++) {
        // Comprobar minimos
        if (regio[i].cantidad_aves < minimo.cantidad_aves) {
            
            // casiMinimo = minimo;
            casiMinimo.cantidad_aves = minimo.cantidad_aves;
            strcpy(casiMinimo.nombre_pais, minimo.nombre_pais);

            // minimo = regio[i];
            minimo.cantidad_aves = regio[i].cantidad_aves;
            strcpy(minimo.nombre_pais, regio[i].nombre_pais);

        } else if (regio[i].cantidad_aves < casiMinimo.cantidad_aves) {
            
            casiMinimo.cantidad_aves = regio[i].cantidad_aves;
            strcpy(casiMinimo.nombre_pais, regio[i].nombre_pais);
        
        }

        // Contar si el pais tiene mas de 40 especies
        if (regio[i].cantidad_aves > MIN_ESPECIES) {
            contador++;
        }
    }


    // Informar los 2 paises con menor cantidad de especies.
    printf("Pais con menor cantidad de especies: %s\n", minimo.nombre_pais);
    printf("Pais con casi menor cantidad de especies: %s\n", casiMinimo.nombre_pais);

    // Informar porcentaje de paises con mas de 40 especies.
    printf("Porcentaje de paises con mas de 40 especies: %%%.2f", 100.0*contador/PAISES_A_EVALUAR);
}
