#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - check the code.
 *
 * @min: check the parameters.
 *
 * @max: check the parameters.
 *
 * Return: check the code.
 *
 */

int *array_range(int min, int max)
{
	int *marr;
	int count = 0;
	int i;

	if (min > max)
		return (NULL);
	marr = malloc(sizeof(int) * (max - min + 1));
	if (marr == NULL)
		return (NULL);
	for (i = min ; i <= max ; i++)
	{
		marr[count] = i;
		count++;
	}
	return (marr);
}
