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
head = &n1;
n1.ste = &n2;
n2.ste = &n3;
n3.ste = NULL;

 // Add new node
node n4
n4.dato = 13;
n4.ste = &n3;
n2.ste = &n4;

agregar(head);

return (0);

}
