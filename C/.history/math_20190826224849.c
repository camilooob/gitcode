#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
/* Hacer un programa que muestre un menu, con las opciones sumar, restar, multiplicar y dividir,
 el programa solicitara una opción y realizara la tarea elegida, se debe utilizar procedimiento 
 */
void menu();
void sumar();
void restar();
void multiplicar();
void dividir();

int main()
{
    menu();
    return 0;
}

void menu()
{
    int opcion;

    do
    {
        //Codigo
        printf("\nBienvenido a MiniCalculadora");
        printf("\n ¿Que operación desea realizar?");
        printf("\n1. Sumar");
        printf("\n2. Restar");
        printf("\n3.Multiplicar");
        printf("\n4.Dividir");
        printf("\n5. Salir");
        printf("\nSeleccionar Opcion: ");
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
    int a, b, suma = 0;

    printf("Digite dos numeros: \n");
    scanf("%i %i", &a, &b);

    suma = a + b;

    printf("El resultado de la suma es: \n %i", suma);
}
void restar()
{
    int a, b, resta = 0;

    printf("Digite dos numeros: \n");
    scanf("%i %i", &a, &b);

    resta = a - b;

    printf("El resultado de la resta es: \n %i", resta);
}
void multiplicar()
{
    int a, b, multiplica = 0;

    printf("Digite dos numeros: \n");
    scanf("%i %i", &a, &b);

    multiplica = a * b;

    printf("El resultado de la multiplicacion es: \n %i", multiplica);
}
void dividir()
{
    int a, b, divide = 0;

    printf("Digite dos numeros: \n");
    scanf("%i %i", &a, &b);

    divide = a / b;

    printf("El resultado de la division es: \n %i", divide);
}

/*Fin de la funciòn C */