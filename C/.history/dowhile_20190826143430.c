#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
int main()
{

    char opc;

    do
    {
        //Linux - Mac limpiador
        while ((getchar()) != '\n')
            ;
        //Windows limpiador
        fflush(stdin);
        //Codigo
        printf("Hola Bienvenido");
        printf("\n Digite 'S' para que lo vuelva a saludar: \n");
        scanf("%c", &opc);

    } while (opc == 's' || opc == 'S'); // Condición para que se repita codigo en do
    return 0;
}
/*Fin de la funciòn C */