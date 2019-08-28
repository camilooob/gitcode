#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/* Funcion main inicia programa C*/
/* Funciones Matematicas: 
Nota: Estas funciones no necesitan a Math.h se pueden hacer solo con stdio.h
ceil(x) -> Redondea al priximo entero mas cercano. 2.1 lo redondea a 3 
fabs(x) -> Devuelve el valor absoluto de x.  -4 lo convierte a 4
floor(x) -> Redondea por defecto al entero mas priximo. 4.9 lo redondea a 4
fmod(x,y) -> Calcula el resto de la division de x/y . calcua el mod(residuo)  entre dos numeros.
pow(x,y) -> Calcula x elevado a la potencia y. 
sqrt(x) -> Devuelve la raiz cuadrada de x. 
*/

void funcion_matematica();

int main()
{
    funcion_matematica();
    return 0;
}
void funcion_matematica()
{
    float x, cambio = 0;

    printf("Digite un numero: \n");
    scanf("%f", &x);
    cambio = ceil(x); // Redondea al proximo numero mas cercano.

    printf("%.2f", cambio); //De el float solo mostrar dos decimales despues del punto
}
/*Fin de la funciòn C */