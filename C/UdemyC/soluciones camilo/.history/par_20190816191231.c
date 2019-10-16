#include <stdio.h>
#include <math.h>
/* Funcion main inicia programa C*/
int main()
{
    char tipo;
    int numero;
    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    if (numero % 2 == 0)
    {
        tipo = par;
    }
    if (numero % 2 != 0)
    {
        tipo = impar;
    }
    printf("El numero es: %c", tipo);

    return 0;
}
/*Fin de la funciòn C */