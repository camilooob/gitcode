#include <stdio.h>
/* Copia la entrada y la salida */
int main(void)
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);
	printf("%i", c);
}
