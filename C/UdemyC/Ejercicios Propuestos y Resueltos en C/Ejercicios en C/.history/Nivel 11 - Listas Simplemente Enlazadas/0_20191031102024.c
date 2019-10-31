//Singly Linked lists
#include <stdio.h> // Libreria Standar 
#include <stdlib.h> //con esta libreria podemos usar NULL 

typedef mystru {
	int dato;  //tipo de dato que manejare y el nombre 
	mystru nodo *siguiente; // Estructura anidada donde el puntero apunta al siguente posicion de la lista
}nodo; // Nodo sera el nombre de la estructura

//Le creamos dos variables primero y ultimo al nodo y las iniciamos en Null para evitar basura 
nodo *primero = NULL;
nodo *ultimo = NULL;
// Ahora creamos una funcion que agrega datos a la lista 
void agregar (nodo *position)
// Verificamos si la lista esta vacia o no, si esta vacia significa que es el primer elemento, si no esta vacia significa que agrego elelmentos despues de ese elemento que ya tiene info. 
if (primero == NULL)
{
	// si esta vacio le asigno el valor que me envian en este caso 5
	// si solo hay un elemento en la lista este sera el primero y ultimo 
	primero = position;
	ultimo = position;
}





