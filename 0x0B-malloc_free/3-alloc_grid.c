#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - main
 *
 * @width: check
 *
 * @height: check
 *
 * Return: check
 *
 */

int **alloc_grid(int width, int height)
{
	int **myarr;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	myarr = (int**)malloc(sizeof(int*) * height);
	if (myarr == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		myarr[i] = (int*)malloc(sizeof(int) * width);
		if (myarr[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
		{
			myarr[i][j] = 0;
		}
	}
	return myarr;
}
