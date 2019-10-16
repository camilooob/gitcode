#include <stdio.h>
int main()
{
    /*Declaramos variable edad*/
    int edad;
    /*Imprimimos en consola*/
    printf("ingresa tu edad\n");
    /*guardamos el dato*/
    scanf("%d", &edad);
    /*generamos unna condicion*/
    if (edad >= 18)
    {
        printf("Es mayor de edad\n");
    }
    else
    {
        printf("No es mayor de edad\n");
    }
}