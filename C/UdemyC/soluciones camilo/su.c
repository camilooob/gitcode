#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
// Sumar 1-2+3-4... n
int main()
{

    int i = 1, n = 0, suma, suma_par, suma_impar, negativo;
    printf("Digite total de numero a sumar:   ");
    scanf("%i", &n);

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            negativo = i * (-1);
            suma_par += negativo;
        }
        else
        {
            suma_impar += i;
        }

        i++; // i = i + 1; i+= 1;
    }
    suma = suma_impar + suma_par;

    printf("\n La suma total es: %i", suma);

    return 0;
}
/*Fin de la funciòn C */