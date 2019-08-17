#include <stdio.h>
#include <math.h>
#include <string.h>
/* Funcion main inicia programa C*/
/* Ingresar un nombre y signo de cualquier persona, e impria el nombre 
 solo si la persona es signo aries.*/
int main()
{
    char nombre[20], signo[20];
    printf("Digite su nombre");
    gets(nombre);
    printf("Escriba su signo: ");
    gets(signo);
    // strcmp se utiliza para comparar cadenas de texto.
    // signo como variable, aries == 0 esta preguntando si signo es igual a aries. si quieres preguntar si es distinto se coloca ==1, 0 para igual 1 distinto.
    if (strcmp(signo, "aries") == 0)

        return 0;
}
/*Fin de la funciòn C */