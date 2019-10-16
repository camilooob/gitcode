#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
int main()
{
    int opcion;
    int saldo = 1000;
    int agregar, retirar;
    printf("\tBienvenido a su Cajero Electronico");
    printf("Seleccione el numero de la operación que desea realizar: ");
    printf("\n 1. Consulta de Saldo");
    printf("\n 2. Retiros");
    printf("\n 3. Salir");
    scanf("%i", &opcion);

    switch (variable)
    {
    case 1:
        printf("\n Cuanto dinero desea consignar:  ");
        scanf("%i", agregar);
        saldo += agregar;
        printf("\n Ahora el saldo en su cuenta es: %i", saldo);
        break;
    case 2:
        printf("\n Cuanto dinero desea retirar:  ");
        scanf("%i", retirar);
        break;
    case 3:
        /*Codigo*/
        break;
    default:
        /*Codigo*/
        break;
    }

    return 0;
}
/*Fin de la funciòn C */