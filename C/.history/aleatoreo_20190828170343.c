#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* Funcion main inicia programa C*/

void funcion_aleatorea();
int main()
{

    funcion_aleatorea();

    return 0;
}
/*Fin de la funciòn C */
void funcion_aleatorea()
{
    int numero;

    srand(time(NULL));

    numero = 1 + rand() % ((10 + 1) - 1); // Generaq numero entre 1 a 10
    printf("%i", numero);
}