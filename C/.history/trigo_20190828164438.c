/* Funciones Trigonomtricas: 

acos(x) -> Calcular el arco de coseno de x.
asin(x) -> Calcula el arco seno de x.
atan(x) -> Calcula el arco tangente de x.
cos(x)  -> calcula el coseno del angulo x, en radianes.
sin(x)  -> Calcula el seno del angulo x, en radianes.
tan(x)  -> Devuelve la tangente del angulo x, en radianes.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void funcion_trigonometrica();
/* Funcion main inicia programa C*/
int main()
{
    funcion_trigonometrica();

    return 0;
}
/*Fin de la funciòn C */
void funcion_trigonometrica()
{
    float x, cambio = 0;
    printf("Digite un numero: \n");
    printf("Entre -1 y 1\n");
    scanf("%f", &x);

    cambio = acos(x);
    printf("%.2f", cambio);
}
