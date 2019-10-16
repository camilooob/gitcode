#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
int main()
{
    int i, suma = 0;

    // for(inicializacion; condicion; incremento)
    for (i = 0; i <= 10; i += 2)
    {
        suma += i;

        //Codigo;
    }
    printf("\n La suma de los numeros pares es: %i", suma);

    return 0;
}
/*Fin de la funciòn C */