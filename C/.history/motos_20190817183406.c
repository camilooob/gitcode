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
        preciofinal = precio * HONDA;
            descuento = precio - preciofinal;
        printf("\nEl descuento es $ %i", descuento);
        printf("\nEl precio final es $ %i", preciofinal);
    }
    else
    {
        if (strcmp(marca, "yamaha") == 0 || strcmp(marca, "Yamaha") == 0)
        {
            preciofinal = precio * YAMAHA;
            descuento = precio - preciofinal;
            printf("\nEl descuento es $ %i", descuento);
            printf("\nEl precio final es $ %i", preciofinal);
        }
        else
        {
            if (strcmp(marca, "suzuki") == 0 || strcmp(marca, "Suzuki") == 0)
            {
                preciofinal = precio * SUZUKI;
            descuento = precio - preciofinal;
                printf("\nEl descuento es $ %i", descuento);
                printf("\nEl precio final es $ %i", preciofinal);
            }
            else
                {
                    printf("\nOtras Marcas");
                    preciofinal = precio * OTROS;
            descuento = precio - preciofinal;
                    printf("\nEl descuento es $ %i", descuento);
                    printf("\nEl precio final es $ %i", preciofinal);
                
                
                
                    
                }
            }
        }
    }
    /*Fin de la funciòn C */