#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
int main()
{
    int numero = 0, mult = 0, suma = 0;
    printf("Digite un numero:   ");
    scanf("%i", &numero);
    int i;

    i = 1;

    if (numero <= 10)
    {

        while (i <= numero)
        {
            mult = mult * i; //Codigo while de 1 hasta 10
            i++;             // i = i + 1; i+= 1;
        }
        printf("\n La multiplicación de los primeros 10 numeros es: %i", mult);
    }
    else
    {
        while (i <= numero)
        {
            suma += i; //Codigo while de 1 hasta 10
            i++;       // i = i + 1; i+= 1;
        }
        printf("\n La suma de los numeros es: %i", suma);
    }

    return 0;
}
/*Fin de la funciòn C */