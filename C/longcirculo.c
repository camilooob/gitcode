#include <stdio.h>
#include <math.h>
/* Funcion main inicia programa C*/
int main()
{
    float pi, diametro, longitud;

    pi = 3.14159265358979323846;
    printf("Ingrese el diametro: ");
    scanf("%f", &diametro);

    longitud = (pi * diametro);

    printf("La longitud del circulo es : %.2f", longitud);
    return 0;
}
/*Fin de la funciòn C */