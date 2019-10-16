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

        switch (opciones)
        {
        case 1:
            fahrenheit(float C);
            break;
        case 2:
            kelvin(float C);
            break;
        }

    } while (opciones != 3);

    return 0;
}
/*Fin de la funciòn C */
float fahrenheit(float C)
{
    float F;
    F = (9 * C) / 5 + 32;
    return F;
}
float kelvin(float C)
{
    float K;
    K = (9 * C) / 5 + 32;
    return K;
}