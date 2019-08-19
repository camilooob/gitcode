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
        printf("M"); /* 1000*/
        break;
    case '2':
        printf("MM"); /* 2000*/
        break;
    case '3':
        printf("MMM"); /* 3000*/
        break;
    }
    switch (centenas)
    {
    case '1':
        printf("C"); /* 100*/
        break;
    case '2':
        printf("CC"); /* 200*/
        break;
    case '3':
        printf("CCC"); /* 300*/
        break;
    case '4':
        printf("CD"); /* 400*/
        break;
    case '5':
        printf("D"); /* 500*/
        break;
    case '6':
        printf("DC"); /* 600*/
        break;
    case '7':
        printf("DCC"); /* 700*/
        break;
    case '8':
        printf("DCCC"); /* 800*/
        break;
    case '9':
        printf("CM"); /* 900*/
        break;
    }
    switch (decenas)
    {
    case '1':
        printf("X"); /* 10*/
        break;
    case '2':
        printf("XX"); /* 20*/
        break;
    case '3':
        printf("XXX"); /* 30*/
        break;
    case '4':
        printf("XL"); /* 40*/
        break;
    case '5':
        printf("L"); /* 50*/
        break;
    case '6':
        printf("LX"); /* 60*/
        break;
    case '7':
        printf("LXX"); /* 70*/
        break;
    case '8':
        printf("LXXX"); /* 80*/
        break;
    case '9':
        printf("XC"); /* 90*/
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