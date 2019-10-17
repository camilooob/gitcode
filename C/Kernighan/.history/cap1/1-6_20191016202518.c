#include <stdio.h>
/* Copia la entrada y la salida */
int main(void)
{
	int c;

	c = getchar() != EOF;
	putchar(c);
	printf("%d\n", c);
}
