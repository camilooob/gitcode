#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* Funcion main inicia programa C*/

void funcion_aleatorea();
int main()
{
    int par[];
    funcion_aleatorea();

    return 0;
}
/*Fin de la funciòn C */
void funcion_aleatorea()
{
    int numero, i, inicio = 1, fin = 1000;
    printf("Generador Numeros Aleatoreos \n");
    printf("100 Numeros de 1 a 1000 \n \n");

    srand(time(NULL));
    for (i = 1; i <= 100; i++)
    {
        numero = inicio + rand() % ((fin + 1) - 1); // Genera  100 numeros entre 1 a 1000
        printf("%i \n", numero);

        if (numero % 2 == 0)
        {
            par[i] = numero;
        }
        else
        {
            impar[i] = numero;
        }
    }
}
