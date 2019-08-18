#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
/*Dada una nota mediante un examen mediante un código escribir el literal que le corresponde a la nota 
 A - Excelente
 B - Notable 
 C - Aprobado
 D y F - Reprobado */

int main()
{
    char nota;
    printf("Digite la nota: ");
    scanf("%c", &nota);

    switch (nota)
    {
    case 'A':
        printf("Excelente");
        break;
    case 'B':
        printf("Notable");
        break;
    case 'C':
        printf("Aprobado");
        break;
    case 'D':
    printf("Reprobado");
    break;
    case 'F':
    printf("Reprobado");
    break;
    default:
    printf("Error, ingrese una nota valida");

        break;
    }

    return 0;
}
/*Fin de la funciòn C */