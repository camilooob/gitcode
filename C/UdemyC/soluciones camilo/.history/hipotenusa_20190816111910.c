#include <stdio.h>
#include <math.h>
/* Funcion main inicia programa C*/
int main()
{
    float, cateto1, cateto2, hipotenusa;

    printf("Ingrese los dos catetos del trianngulo: ");
    scanf("%f %f", &cateto1, &cateto2);

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    return 0;
}
/*Fin de la funciòn C */