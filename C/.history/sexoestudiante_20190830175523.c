#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* Funcion main inicia programa C*/
/*
Realice un programa que lea un array el sexo de los N estudiantes
del curso de Algoritmos y que determine cuantos hombres y cuantas mujeres 
se encuentran en el grupo, suponiendo que los datos son extraidos alumno por alumno.
*/

int main()
{
    int i = 0, chicos = 0, chicas = 0, numeroestudiantes = 0;
    char estudiantes[numeroestudiantes];

    printf("Digite el numero de estudiantes: \n");
    scanf("%i", &numeroestudiantes);

    // for(inicializacion; condicion; incremento)
    for (i = 1; i <= numeroestudiantes; i++)
    {
        //Linux - Mac limpiador
        while ((getchar()) != '\n')
            ;

        printf("Digite el sexo del estudiante No. %i: \n", i);
        get(estudiantes);
        //Codigo;

        if (strcmp(estudiantes, "m") == 0)
        {
            chicos++;
            printf("Agregado Correctamente a Chicos\n");
        }
        else if (strcmp(estudiantes, "f") == 0)
        {
            chicas++;
            printf("Agregada Correctamente a Chicas\n");
        }
    }
    printf("El total de Chicos es %i \n", chicos);
    printf("El total de Chicas es %i \n", chicas);

    return 0;
}
/*Fin de la funciòn C */