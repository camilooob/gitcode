#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
int main()
{
    int saldo = 1000;
    int opcion, agregar, retirar, clave;
    printf("\t----- Bienvenido -----\n");
    printf("\t----- Cajero Electronico Banco Northen -----\n");
    printf("Seleccione el numero de la operación que desea realizar: ");
    printf("\n 1. Consulta de Saldo");
    printf("\n 2. Retirar");
    printf("\n 3. Consignar");
    printf("\n 4. Salir\n");
    scanf("%i", &opcion);
    printf("\n Ingrese su clave: ");
    scanf("%i", &clave);

    switch (opcion)
    {
    case 1:
        printf("\n El saldo de su cuenta es: $%i ", saldo);
        break;

    case 2:
        printf("\n Cuanto dinero desea retirar:  ");
        scanf("%i", &retirar);
        if (retirar > saldo)
        {
            printf("No tiene dinero suficiente.");
            printf("Intente de nuevo.");
        }
        else
        {
            saldo -= retirar;
            printf("\n bip bip Retirando Saldo");
            printf("\n Ha retirado $%i ", retirar);
            printf("\n Su saldo ahora es $%i ", saldo);
        }
        break;
    case 3:
        printf("\n Cuanto dinero desea consignar:  ");
        scanf("%i", &agregar);
        saldo += agregar;
        printf("\n Ahora el saldo en su cuenta es: $%i ", saldo);
        break;
    case 4:
        printf("Ha sido un placer");
        printf("Vuelva Pronto");

        break;
    default:
        printf("Opción Invalida, intente de nuevo");
        break;
    }

    return 0;
}
/*Fin de la funciòn C */