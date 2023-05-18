#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * alloc_grid - check the code.
 *
 * @width: check the parameters.
 *
 * @height: check the parameters.
 *
 * Return: check the code.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int**)malloc(height * sizeof(*int));
	for (i = 0 ; i < height ; i++)
		arr[i] = (int*)malloc(width * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
