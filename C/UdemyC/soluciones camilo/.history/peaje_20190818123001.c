#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
#define TURISMO 500
#define AUTOBUS 3000
#define MOTO 300

int main()
{
    /*Seleccionar un tipo de vehículo e inducar el peaje a pagar según  un valor numérico
     1. turismo, peaje = $500
     2. autobus, peaje = $3000
     3. moto, peaje =  $300
     Si no aplica = Vehículo no autorizado */

    int peaje;
    char selector;
    printf("\nBienvenido a la calculadora de Peaje");
    printf("\n------------------------------------");
    printf("\n------------------------------------");
    printf("\nIngrese el numeral del tipo de Vehiculo: \n");
    scanf("%c", &selector);

    switch (selector)
    {
    case '1':
        peaje = TURISMO;
        printf("Vehiculo Turismo \n");
        printf("El valor a pagar es $ %i", peaje);

        break;
    case '2':
        peaje = AUTOBUS;
        printf("Vehiculo Autobus \n");
        printf("El valor a pagar es $ %i", peaje);
        break;
    case '3':
        peaje = MOTO;
        printf("Vehiculo Moto \n");
        printf("El valor a pagar es $ %i", peaje);
        break;
    default:
        printf("Vehiculo no autorizado");
        break;
    }

    return 0;
}
/*Fin de la funciòn C */