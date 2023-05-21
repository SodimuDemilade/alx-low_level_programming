#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - check the code.
 *
 * @b: check the parameter.
 *
 * Return: check the code.
 */

void *malloc_checked(unsigned int b)
{
	int *space = malloc(b);

	if (space == NULL)
		exit(98);
	return (space);
}
