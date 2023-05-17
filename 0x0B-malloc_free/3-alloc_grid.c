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
	int i;

	if (width <= 0 || height <= 0)
		return NULL;
	arr = malloc(sizeof(int) * (width * height));
	if (arr == NULL)
		return NULL;
	for (i = 0 ; i < (width * height) ; i++)
		arr[i] = 0;
	return (arr);
}
