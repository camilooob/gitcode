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
        printf("\nEligir la Opción que desea: ");
        printf("\n 1.Convertir a Fahrenheit");
        printf("\n2.Convetir a Kelvin");
        printf("\n3.Salir");

        switch (opcion)
        {
        case 1:
            fahrenheit(float C);
            break;
        case 2:
            kelvin(float C);
            break;
        case 3:
            /*Codigo*/
            break;
        default:
            /*Codigo*/
            break;
        }

    } while (opcion != 3);

    return 0;
}
/*Fin de la funciòn C */