#include <stdio.h>
#include <math.h>
#include <string.h>
/* Funcion main inicia programa C*/
int main()
{
    char tipo[5];
    int numero;
    printf("Ingrese un numero: ");
    scanf("%i", &numero);
  


    if (numero % 2 == 0)
    {
         strcpy(tipo,"Par");
    }
    if (numero % 2 != 0)
    {
         strcpy(tipo,"Imp");
    }
    printf("El numero es: %s",tipo);

    return 0;
}
/*Fin de la funciòn C */