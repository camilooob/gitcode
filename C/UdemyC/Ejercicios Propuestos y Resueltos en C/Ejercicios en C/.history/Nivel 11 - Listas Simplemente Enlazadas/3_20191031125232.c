#include <stdlib.h>
#include <stdio.h>

typedef struct list {
int value;
struct list* ste;
}node;

int main()
{
node n1, n2, n3;
node *head;

n1.value = 45;
n2.value = 8;
n3.value = 32;

// Orden
head = &n3;
n3.ste = &n2;
n2.ste = &n1;
n1.ste = NULL; // Where list stop

return (0);

}
