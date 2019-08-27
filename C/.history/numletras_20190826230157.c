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
            printf("Uno");
            break;
        case 2:
            printf("Dos");
            break;
        case 3:
            printf("Tres");
            break;
        case 4:
            printf("Cuatro");
            break;
        case 5:
            printf("Cinco");
            break;
        case 6:
            printf("Seis");
            break;
        case 7:
            printf("Siete");
            break;
        case 8:
            printf("Ocho");
            break;
        case 9:
            printf("Nueve");
            break;
        case 10:
            printf("Diez");
            break;
        }

    } while (opcion != 11);
}
/*Fin de la funciòn C */