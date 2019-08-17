#include <stdio.h>
/* Funcion main inicia programa C*/
int main()
{
    float pi = 3.14159265358979323846, diametro, longitud;

    printf("Ingrese el diametro: ");
    scanf("%f", &diametro);

    longitud = (pi * diametro);

    printf("La longitud del circulo es : %.2f", diametro);
    return 0;
}
/*Fin de la funciòn C */