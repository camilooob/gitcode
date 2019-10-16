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
    /*pregunta de nuevo*/
    else if (edad == 17)
    {
        printf("Sorry, casi eres mayor de edad\n");
    }
    /* si no entonces */
    else
    {
        printf("No es mayor de edad\n");
    }
    return 0;
}
/*No olvidar copilar con "gcc nombrearchivo.c -o nombre.out" ejecutar "./hola.out" */