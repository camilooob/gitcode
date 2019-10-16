#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
//Encontrar el Factorial de un numero
int main()
{
    int i, numero1 = 0, numero2 = 0, factorial = 1;
    printf("Suma  de Numeros Factoriales\n");
    printf("Escriba el primer numero: \n");
    scanf("%i", &numero1);
    printf("Escriba el primer numero: \n");
    scanf("%i", &numero2);

    // for(inicializacion; condicion; incremento)
    for (i = 1; i <= numero; i++)
    {

        factorial *= i;
    }
    printf("\nEl factorial del numero es %i", factorial);

    return 0;
}
/*Fin de la funciòn C */