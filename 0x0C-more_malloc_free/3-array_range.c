#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - main
 *
 * @min: check
 *
 * @max: check
 *
 * Return: check
 *
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 2));
	if (arr == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);

}
