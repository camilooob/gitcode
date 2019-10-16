#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
int main()
//hacer un do que imprima las letras minusculas del abc

{
    char letra = 'a';
    do
    {
        //Linux - Mac limpiador
        while ((getchar()) != '\n')
            ;
        //Windows limpiador
        fflush(stdin);
        //Codigo
        printf("%c.\n", letra);
        letra++;

    } while (letra <= 'z'); // Condición para que se repita codigo en do

    return 0;
}
/*Fin de la funciòn C */