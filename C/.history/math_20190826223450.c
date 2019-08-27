#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
/* Hacer un programa que muestre un menu, con las opciones sumar, restar, multiplicar y dividir,
 el programa solicitara una opción y realizara la tarea elegida, se debe utilizar procedimiento 
 */
int main()
{

    return 0;
}

void menu()
{
    int opcion;

    do
    {
        //Codigo
        printf("\n1. Sumar");
        printf("\n2. Restar");
        printf("\n3.Multiplicar");
        printf("\n4.Dividir");
        printf("\n5. Salir");
        printf("Seleccionar Opcion: ");
        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:
            sumar();
            break;
        case 2:
            restar();
            /*Codigo*/
            break;
        case 3:
            multiplicar();
            break;
        case 4:
            dividir();
            break;
        }

    } while (opcion != 5); // Condición para que se repita codigo en do
}
void sumar()
{
    int a, b;

    printf("Digite dos numeros: ");
    scanf("%i %i", &a, &b);
}
/*Fin de la funciòn C */