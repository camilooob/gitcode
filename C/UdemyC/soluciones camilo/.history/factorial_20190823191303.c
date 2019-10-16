#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
//Encontrar el Factorial de un numero
int main()
{
    int i, numero, factorial = 1;
    printf("Determinador de Numeros Factoriales");
    printf("Escriba un numero: ");
    scanf("%i", &numero);

    // for(inicializacion; condicion; incremento)
    for (i = 1; i <= numero; i++)
    {

        factorial *= i;
    }
    printf("\El factorial del numero es %i", factorial);

    return 0;
}
/*Fin de la funciòn C */