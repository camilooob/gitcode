#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* Funcion main inicia programa C*/
int main()
{
    float caja[2];
    int i;
    // for(inicializacion; condicion; incremento)
    for (i = 0; i < 2; i++)
    {
        printf("Abriendo Caja\n");
        printf("Que elementos deseas guardar: ");
        scanf("%f", &caja[i]);

        //Codigo;
    }
    printf("\n \n");

    for (i = 0; i < 2; i++)
    {

        printf("%.2f", caja[i]);

        //Codigo;
    }
    return 0;
}
/*Fin de la funciòn C */