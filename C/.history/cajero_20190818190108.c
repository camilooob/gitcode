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
    printf("\t----- Bienvenido -----\n");
    printf("\t----- Cajero Electronico Banco Northen -----\n");
    printf("Seleccione el numero de la operación que desea realizar: ");
    printf("\n 1. Consulta de Saldo");
    printf("\n 2. Retirar");
    printf("\n 3. Consignar");
    printf("\n 4. Salir\n");
    scanf("%i", &opcion);

    switch (opcion)
    {

    case 2:
        printf("\n Cuanto dinero desea retirar:  ");
        scanf("%i", &retirar);
        if (retirar > saldo)
        {
            printf("No tiene saldo suficiente.");
        }
        else
        {
            saldo -= retirar;
            printf("\n bip bip Retirando Saldo");
            printf("\n Ha retirado %i", retirar);
            printf("\n Su saldo ahora es %i", saldo);
        }
        break;
    case 3:
        printf("\n Cuanto dinero desea consignar:  ");
        scanf("%i", &agregar);
        saldo += agregar;
        printf("\n Ahora el saldo en su cuenta es: %i", saldo);
        break;
    case 4:
        /*Codigo*/
        break;
    default:
        printf("Opción Invalida, intente de nuevo");
        break;
    }

    return 0;
}
/*Fin de la funciòn C */