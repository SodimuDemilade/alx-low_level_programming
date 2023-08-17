#include <stdio.h>

/**
 * int_index - check
 *
 * @array: check
 *
 * @size: check
 *
 * @cmp: check
 *
 * Return: check
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (NULL);
	if (size <= 0)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
