//Singly Linked lists
#include <stdio.h> // Libreria Standar 
#include <stdlib.h> //con esta libreria podemos usar NULL 

typedef mystru {
	int dato;  //tipo de dato que manejare y el nombre 
	mystru nodo *siguiente; // Estructura anidada donde el puntero apunta al siguente posicion de la lista
}nodo; // Nodo sera el nombre de la estructura

//Le creamos dos variables al nodo y las iniciamos en Null para evitar basura 
nodo *primero = NULL;
nodo *segundo = NULL; 


