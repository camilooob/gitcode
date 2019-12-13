#include <stdio.h>
#include <stdlib.h>
// Estructura de numeros linked list 
typedef struct Node
{
	int number;
	struct Node *next;
}NODE; //tipo NODE 

// Creamos una funcion que crea nuevos nodos

NODE *createNode(int number)
{
	NODE *newNode;
	newNode = malloc(sizeof(NODE));
	
}
