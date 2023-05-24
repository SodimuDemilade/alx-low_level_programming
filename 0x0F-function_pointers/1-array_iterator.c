#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - check the code.
 *
 * @array: check the parameters.
 *
 * @size: check the parameters.
 *
 * @action: check the parameters.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for(i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
