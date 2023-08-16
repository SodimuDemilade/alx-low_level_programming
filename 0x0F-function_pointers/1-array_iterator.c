#include <stdio.h>

/**
 * array_iterator - main
 *
 * @array: check
 *
 * @size: check
 *
 * @action: check
 *
 * Return: check
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
