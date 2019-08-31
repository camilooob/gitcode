#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* Funcion main inicia programa C*/
int main()
{
    int len;
    char texto[50];

    printf("Digite una palabra:\n ");
    scanf("%s", texto);

    len = strlen(texto); // strlen devuelve cuenta arrays
    printf("La longitud del texto es %i", len);
    strrev(texto);
    printf("Texto al reves: \n %s", strrev(texto));

    return 0;
}
/*Fin de la funciòn C */