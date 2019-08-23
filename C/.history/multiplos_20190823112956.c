#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
int main()
{
    // Multiplos de 3 hasta n

    int n, i = 1;

    printf("Digite el total de numeros a comprobar:  ");
    scanf("%i", &n);

    while (i <= n)
    {
        if (i % 3 == 0)
        {
            printf("%i.\n", i); //Codigo while de 1 hasta 10
        }
        i++; // i = i + 1; i+= 1;
    }

    return 0;
}
/*Fin de la funciòn C */