#include <stdio.h>
#include <math.h>
/* Funcion main inicia programa C*/
int main()
{
    char par, impar, numero;
    printf("Ingrese un numero: ");
    scanf("%c", &numero);

    if (numero % 2 == 0)
    {
        numero = par;
    }
    if (numero % 2 != 0)
    {
        numero = impar;
    }
    printf("El numero es: %c", numero);

    return 0;
}
/*Fin de la funciòn C */