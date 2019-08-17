#include <stdio.h>
#include <math.h>
#include <string.h>
/* Funcion main inicia programa C*/
int main()
{
    char nombre[20], sexo[20];
    int edad;
    printf("Ingrese su nombre: ");
    gets(nombre);

    printf("Ingrese su sexo: ");
    gets(sexo);
    printf("Ingrese su edad: ");
    scanf("%i", &edad);

    if (strcmp(sexo, "masculino") == 0 && (edad > 18)
    {
        printf("Su sexo es Masculino, mayor de edad y su nombre es %s", nombre);
    }
    else
    {
        printf("No es mayor de edad ni Hombre");
    }

    return 0;
}
/*Fin de la funciòn C */