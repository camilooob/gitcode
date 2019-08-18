#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
int main()
{
    char tecla;

    printf("Programa de limpiado de pantalla\n");
    printf("--------------------------\n");
    printf("------------------------------\n");
    printf("Digite 1 para Iniciar: \n");
    scanf("%c", &tecla);

    if (tecla == '1')
    {
        system("clear");
        printf("Pantalla Limpia");
    }
    else
    {
        printf("No funciono, intente de nuevo\n");
        while ((getchar()) != '\n')
            ;
        /* Condicional Anidado*/
        printf("Digite el numero 1\n");
        scanf("%c", &tecla);
        if (tecla == '1')
        {
            system("clear");
            printf("Pantalla Limpia");
        }
        else
        {
            printf("No ha funcionado");
        }
    }

    return 0;
}
/*Fin de la funciòn C */