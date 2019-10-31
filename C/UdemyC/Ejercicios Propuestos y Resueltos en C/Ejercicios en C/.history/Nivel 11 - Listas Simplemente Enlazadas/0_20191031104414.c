//Singly Linked lists
#include <stdio.h>             // Libreria Standar 
#include <stdlib.h>            //con esta libreria podemos usar NULL 

typedef struct
{
	int dato;                 //tipo de dato que manejare y el nombre 
	struct nodo *siguiente;   // Estructura anidada donde el puntero apunta al siguente posicion de la lista
}nodo;                        // Nodo sera el nombre de la estructura

                               //Le creamos dos variables primero y ultimo al nodo y las iniciamos en Null para evitar basura 
nodo *primero = NULL;
nodo *ultimo = NULL;
                               // Ahora creamos una funcion que agrega datos a la lista 
void agregar (nodo *position)
{
                               // Para que siempre se mueva a la siguente posicion. 
position -> siguiente = NULL;
                                // Verificamos si la lista esta vacia o no, si esta vacia significa que es el primer elemento, si no esta vacia significa que agrego elelmentos despues de ese elemento que ya tiene info. 
if (primero == NULL)
{
	                            // si esta vacio le asigno el valor que me envian en este caso 5
	                            // si solo hay un elemento en la lista este sera el primero y ultimo 
	primero = position;
	ultimo = position;
}
else                            //En caso de que la lista ya tenga datos
{                               //ultimo ya esta ocupado asi que muevase a la siguente posision
ultimo -> siguiente = position;
ultimo = position;
}
}

int main ()
{
                                 // En el main ponemos los nodos que queremos agregar a al lista.

                                 // Declaro datos 
nodo *primerNodo = malloc(sizeof(nodo));
primerNodo -> dato = 5;

nodo *segundoNodo = malloc(sizeof(nodo));
primerNodo -> dato = 7;

                                  // llamo a la funcion agregar para incluirlos en la lista 
agregar(primerNodo);
agregar(segundoNodo);

                                  // Para imprimir los valor se usa loops


nodo *i = primerNodo;
while (i != NULL)
{
	printf("%i\n",i -> dato);
	i = i-> siguiente;
}


return (0);

}
