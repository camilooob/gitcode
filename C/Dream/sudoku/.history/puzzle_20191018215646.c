
#include "sudoku.h"
int **createPuzzle()
{
	int **puzzle;
	int i, j; // Loop  counters
	//Create Array
	int array[9][9] = {0, 1, 9, 0, 0, 2, 0, 0, 0,
					   4, 7, 0, 6, 9, 0, 0, 0, 1,
					   0, 0, 0, 4, 0, 0, 0, 9, 0,

					   8, 9, 4, 5, 0, 7, 0, 0, 0,
					   0, 0, 0, 0, 0, 0, 0, 0, 0,
					   0, 0, 0, 2, 0, 1, 9, 5, 8,

					   0, 5, 0, 0, 0, 6, 0, 0, 0,
					   6, 0, 0, 0, 2, 8, 0, 7, 9,
					   0, 0, 0, 1, 0, 0, 8, 6, 0};
	//Allocate Memory // No podemos retornar el Array sin Asignar la memoria previamente
	puzzle = malloc(9 * sizeof(int *));
	return (array);
}
