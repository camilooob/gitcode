#include <stdlib.h>
#include <stdio.h>

typedef struct list {
int dato;
struct list* ste;
}node;

void agregar(node *head)
{
node *i = head;
while (i != NULL)
{
printf("%d - ", i -> dato);
i = i -> ste;
}
printf("\n");
}


int main()
{
node n1, n2, n3;
node *head;

n1.dato = 45;
n2.dato = 8;
n3.dato = 32;

// Orden
head = &n3;
n3.ste = NULL;
n2.ste = &n1;
n1.ste = &n2; // Where list stop

agregar(head);

return (0);

}
