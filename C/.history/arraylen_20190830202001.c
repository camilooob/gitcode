#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* Funcion main inicia programa C*/
int main()
{
    int len;
    char texto[100], revstr[100];
    unsigned short start = 0, end = 0;

    printf("Digite una palabra:\n ");
    scanf("%s", texto);

    len = strlen(texto); // strlen devuelve cuenta arrays
    printf("La longitud del texto es \n %i \n", len);
    // count the number of characters
    while (texto[end] != '\0')
        end++;

    // backward assignment, starting from the last character
    while (end > 0)
    {
        revstr[start] = texto[end - 1];
        end--;
        start++;
    }

    revstr[start] = '\0';

    printf("Texto al reves: \n %s", revstr);

    return 0;
}
/*Fin de la funciòn C */