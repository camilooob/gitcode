#include <stdio.h>
int main()
{
    int n1, n2, suma = 0, resta = 0, multi = 0, div = 0;

    printf("Escriba dos numeros: "); /* Imprime en pantalla solicitud */
    scanf("%i %i", &n1, &n2);        /* Guarda los valores en n1 y n2 */


    suma = n1 + n2; 
    resta = n1-n2;
    multi = n1*n2;
    div = n1/n2;

    printf("La suma es %i",suma);
    printf("La resta es %i",resta);
    printf("La multiplicación es %i",multi);
    printf("La división es %i",div);

    return 0;
}