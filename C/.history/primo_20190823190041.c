#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
int main()
{
    int numero, i, conteo = 0;

    printf("Determinador de Numeros Primos");
    printf("Digite un numero: \n");
    scanf("%i", &numero);

    // for(inicializacion; condicion; incremento)
    for (i = 1; i <= numero; i++)
    {

        if (numero % i == 0)
        {
            conteo++;
        }
    }
    if (conteo > 2)
    {
        printf("Es un numero compuesto");
    }
    else
    {
        printf("Es unn numero primo");
    }

    return 0;
}
/*Fin de la funciòn C */