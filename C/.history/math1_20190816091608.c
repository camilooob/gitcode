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

    return 0;
}