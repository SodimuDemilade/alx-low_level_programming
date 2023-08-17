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

	if (array == NULL || action == NULL)
		return;
	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
