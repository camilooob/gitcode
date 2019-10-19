
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
	puzzle = (int **)malloc(9 * sizeof(int *));

	for (i = 0; i < 9; i++)
	{
		puzzle[i] = (int *)malloc(9 * sizeof(int *));

		for (j = 0; j < 9; j++)
		{
			puzzle[i][j] = array[i][j];
		}
	}
	return (puzzle);
}

void printPuzzle(int **puzzle)
{
	int i, j;

	printf("----------------------\n");
	for (i = 0; i < 9; i++)
	{
		// Print Rows
		for (j = 0; j < 9; j++)
		{
			printf(" %d ", puzzle[i][j]);
			if (((j + 1) % 3) == 0)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i % 3 == 0)
		{
			printf("------------------------\n");
		}
	}
}
