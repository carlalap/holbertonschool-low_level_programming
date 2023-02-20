#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  creates a 2D array of integers
 * @width: width of the grid
 * @height: height of grid
 * Description: create a 2D, initialize to 0
 * Return: 2D array, NULL if fail.
 **/
int **alloc_grid(int width, int height)
{
	int **grid;
	int row, colu;

	/*Check for invalid input*/
	if (width <= 0 || height <= 0)
		return (NULL);

/*Allocate memory for the 2d array */
	grid  = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

/*Allocate memory for each row of the 2D array */
	for (row = 0; row < height; row++)
	{
	grid[row] = (int *)malloc(width * sizeof(int));
		if (grid[row] == NULL)
		{
/* Free previously allocated memory if allocation fails */
			for (colu = 0; colu <= row; colu++)
				free(grid[colu]);

			free(grid);
			return (NULL);
		}
	}
/* Initialize all element of the 2D array to 0 */
	for (colu = 0; colu < height; colu++)
	{
		for (row = 0; row < height; row++)
			grid[colu][row] = 0;
	}
/* Return the 2D array */
	return (grid);
}
