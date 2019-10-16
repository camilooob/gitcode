#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define HONDA 0.95
#define YAMAHA 0.92
#define SUZUKI 0.90
#define OTROS 0.98
/* Funcion main inicia programa C*/
int main()
{
    char marca[10];
    int descuento, precio, preciofinal;

    printf("Ingrese la marca de la Moto");
    gets(marca);
    printf("Ingrese el precio de la Moto");
    scanf("%i", &precio);

    if (strcmp(marca, "honda") == 0 || strcmp(marca, "Honda") == 0)
    {
        printf("Su signo es Aries, y su nombre es %s", nombre);
    }
    else
    {
        printf("Su signo no es Aries");
    }
    /*Fin de la funciòn C */