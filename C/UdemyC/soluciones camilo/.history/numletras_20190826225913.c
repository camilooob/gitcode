#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
int main()
{
    menu();
    return 0;
}

void menu()
{
    int opcion;
    do
    {
        printf("Bienvenido a Convertidor\n");
        printf("de numero a Letras\n");
        printf("*Solo valido de 1 a 10\n");
        printf("------------------------\n");
        printf("------------------------\n");
        printf("Digite el numero que desea convertir: ");
        printf("De 1 a 10:");
        printf("Digite 11 para salir: ");
        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Uno");
            break;
        case 2:
            printf("Dos");
            break;
        case 3:
            printf("Tres");
            break;
        case 4:
            printf("Tres");
            break;
        case 5:
            printf("Tres");
            break;
        case 6:
            printf("Tres");
            break;
        case 7:
            printf("Tres");
            break;
        case 8:
            printf("Tres");
            break;
        case 9:
            printf("Tres");
            break;
        case 10:
            printf("Tres");
            break;
        }

    } while (opcion == 11);
}
/*Fin de la funciòn C */