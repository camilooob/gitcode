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
	// Creamos puntero
	NODE *newNode;
	// Asignamos memoria
	newNode = malloc(sizeof(NODE));
	// Obligatorio iniciar el siguiente Nodo en Null
	newNode->next = NULL;
	//Asigno el valor al nodo 
	newNode->number = number;
}
