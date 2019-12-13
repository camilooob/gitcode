#include <stdio.h>

int main()
{
char *name = "Camilo";
// Print the value and the adress
printf("Nombre %s, (%p)\n", name, name);
// Imporimos todas las direcciones de memoria del array
for (int i =0; i < 6; i++ )
{
printf("Name[%d] (%p) = %c\n", i, name + i, *(name + i));
}
}
