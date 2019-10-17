#include <stdio.h>
/* Copia la entrada y la salida */
/* Press enter to see the 1 */
int main(void)
{
	int c;

	c = getchar() != EOF;
	putchar(c);
	printf("%d\n", c);
}
