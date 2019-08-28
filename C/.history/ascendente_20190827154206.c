#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
int main()
{
    int a, b, c;
    printf("Digite 3 numeros: ");

    return 0;
}
/*Fin de la funciòn C */
void ascendente(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            printf("%i %i %i", c, b, a);
        }
        else
        {
            printf("%i %i %i", b, c, a);
        }
    }
    if (b >= a && b >= c)
        if (a >= c)
        {
            printf("%i %i %i", c, a, b);
        }
        else
        {
            printf("%i %i %i", a, c, b);
        }
    if (c >= a && c >= b)
    {
        if (a >= b)
        {
            printf("%i %i %i", b, a, c);
        }
        else
        {
            printf("%i %i %i", a, b, c);
        }
    }
}
}