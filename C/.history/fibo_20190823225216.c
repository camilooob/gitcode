#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
int main()
{
    int numero, i, x = 0, y = 1, z = 1;

    printf("Digite el numero de elementos: ");
    scanf("%i", &numero);
    printf("1, ");
    // for(inicializacion; condicion; incremento)
    for (i = 1; i <= numero; i++)
    {
        z = x + y;
        x = y;
        y = z;

        printf("%i, ", z);
        //Codigo;
    }

    return 0;
}
/*Fin de la funciòn C */