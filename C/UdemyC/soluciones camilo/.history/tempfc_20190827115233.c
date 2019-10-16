#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
int main()
{
    int opciones;
    float C, F, K;

    printf("Digite temperatura en Celsius: \n");
    scanf("%f", &C);

    do
    {
        // Menu
        printf("Eligir la Opción que desea: ")
            printf("\n1.Convertir a Fahrenheit");
        printf("\n2.Convetir a Kelvin");
        printf("\n3.Salir");
    } while (opcion != 3);

    return 0;
}
/*Fin de la funciòn C */