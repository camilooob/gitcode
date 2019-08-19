#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
int main()
{
    char tipo[10];
    int numero, opcion;

    printf("Seleccione la operación que desea realizar: ");
    printf("\n 1. Calcular Cubo Numero");
    printf("\n 2. Evaluar Par Impar");
    printf("\n 3. Salir\n");
    scanf("%i", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Ingrese un numero: ");
        scanf("%i", &numero);

        if (numero % 2 == 0)
        {
            strcpy(tipo, "Par");
        }
        if (numero % 2 != 0)
        {
            strcpy(tipo, "Impar");
        }
        printf("El numero es: %s", tipo);
        break;
    case 2:
        printf("Ingrese un numero: ");
        scanf("%i", &numero);
        numero = pow(numero, 3);
        printf("El cubo del numero es %i: ", numero);

        break;
    case 3:
        /*Codigo*/
        break;
    default:
        printf("Opción Invalidaa, intente de nuevo");
        break;
    }

    return 0;
}
/*Fin de la funciòn C */