#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
int main()
{
    int numero, unidades, decenas, centenas, miles;

    printf("Digite el numero para convertir a Romano");
    scanf("%i", &numeros);

    /* si tienes 199 de número, al dividirlo en 10 te da 19.9, el programa tomará ese .9 y lo utilizará como 9 entero */

    unidades = numero % 10;
    unidades = numero / 10;
    decenas = numero % 10;
    decenas = numero / 10;
    centenas = numero % 10;
    centenas = numero / 10;
    miles = numero % 10;
    miles = numero / 10;

    switch (miles)
    {
    case '1':
        printf("M");
        break;
    case '2':
        printf("MM");
        break;
    case '3':
        printf("MMM");
        break;
    }
    switch (centenas)
    {
    case '1':
        printf("M");
        break;
    case '2':
        printf("MM");
        break;
    case '3':
        printf("MMM");
        break;
    case '4':
        printf("MMM");
        break;
    case '5':
        printf("MMM");
        break;
    case '6':
        printf("MMM");
        break;
    case '7':
        printf("MMM");
        break;
    case '8':
        printf("MMM");
        break;
    case '9':
        printf("MMM");
        break;
    }
    switch (decenas)
    {
    case '1':
        printf("M");
        break;
    case '2':
        printf("MM");
        break;
    case '3':
        printf("MMM");
        break;
    case '4':
        printf("MMM");
        break;
    case '5':
        printf("MMM");
        break;
    case '6':
        printf("MMM");
        break;
    case '7':
        printf("MMM");
        break;
    case '8':
        printf("MMM");
        break;
    case '9':
        printf("MMM");
        break;
    }
    switch (unidades)
    {
    case '1':
        printf("M");
        break;
    case '2':
        printf("MM");
        break;
    case '3':
        printf("MMM");
        break;
    case '4':
        printf("MMM");
        break;
    case '5':
        printf("MMM");
        break;
    case '6':
        printf("MMM");
        break;
    case '7':
        printf("MMM");
        break;
    case '8':
        printf("MMM");
        break;
    case '9':
        printf("MMM");
        break;
    }

    return 0;
}
/*Fin de la funciòn C */