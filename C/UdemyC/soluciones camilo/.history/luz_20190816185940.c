/* Visualizar la tarifa de la luz según el gasto de corriente eléctrica
Para un gasto menor de 1.000 Kwxh
La tarifa es 1.2, entre 1.000 y 1.850 Kwxh 1.0 y mayor a 1.850 es 0.9*/
#include <stdio.h>
#include <math.h>
#define TASA1 1.2
#define TASA2 1.0
#define TASA3 0.9

/* Funcion main inicia programa C*/
int main()
{
    float gasto, pago;

    printf("Ingrese consumo de electricidad: ");
    scanf("%f", &gasto);

    if (gasto < 1000)
    {
        pago = TASA1;
    }
    if (gasto > 1000 && gasto < 1850)
    {
        pago = TASA2;
    }
    if (gasto > 1850)
    {
        pago = TASA3;
    }

    printf("La tasa a pagar es %f", pago);

    return 0;
}
/*Fin de la funciòn C */