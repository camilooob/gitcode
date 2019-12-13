#include <stdio.h>
void duplicar( int *a )
{
	*a *= 2;
}

int main()
{
 int a = 5;
 printf("Valor actual de a es: %d\n", a);
 duplicar(&a);
 printf("Valor despues es: %d\n", a);

// Pasaje por referencia ( se realiza con punteros en C)


}
