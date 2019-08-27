#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
float fahrenheit(float C);
float kelvin(float C);

/* Funcion main inicia programa C*/
int main()
{
    int opciones;
    float C = 0, F = 0, K = 0;

    printf("Digite temperatura en Celsius: \n");
    scanf("%f", &C);

    do
    {
        // Menu
        printf("\nEligir la Opción que desea: ");
        printf("\n1.Convertir a Fahrenheit");
        printf("\n2.Convetir a Kelvin");
        printf("\n3.Salir\n");
        scanf("%i", &opciones);
        switch (opciones)
        {
        case 1:
            F = fahrenheit(C);
            printf("\nEl equivalente en Fahrenheir es:\n %f", F);
            break;
        case 2:
            K = kelvin(C);
            printf("\nEl equivalente en Kelvin es:\n %f", K);

            break;
        }

    } while (opciones != 3);

    return 0;
}
/*Fin de la funciòn C */
float fahrenheit(float C)
{
    float F = 0;
    F = (9 * C) / 5 + 32;
    return F;
}
float kelvin(float C)
{
    float K = 0;
    K = C + 273.15;
    return K;
}