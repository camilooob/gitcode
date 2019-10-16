#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
int main()
{
    int i = 1, n = 0, m = 0, suma;
    printf("Suma pares desde n hasta m");
    printf("Ingrese n");
    scanf("%i", &n);
    printf("Ingrese m");
    scanf("%i", &m);

    while (n <= m)
    {
        if (n % 2 == 0)
        {
            suma += n;
        }

        n++; // i = i + 1; i+= 1;
    }

    return 0;
}
/*Fin de la funciòn C */