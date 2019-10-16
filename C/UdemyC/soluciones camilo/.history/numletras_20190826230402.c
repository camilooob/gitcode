#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
void menu();

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
        printf("Digite el numero que desea convertir: \n");
        printf("De 1 a 10: \n");
        printf("Digite 11 para salir: \n");
        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Uno\n");
            break;
        case 2:
            printf("Dos\n");
            break;
        case 3:
            printf("Tres\n");
            break;
        case 4:
            printf("Cuatro\n");
            break;
        case 5:
            printf("Cinco\n");
            break;
        case 6:
            printf("Seis\n");
            break;
        case 7:
            printf("Siete\n");
            break;
        case 8:
            printf("Ocho\n");
            break;
        case 9:
            printf("Nueve\n");
            break;
        case 10:
            printf("Diez\n");
            break;
        }

    } while (opcion != 11);
}
/*Fin de la funciòn C */