#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - check the code.
 *
 * @b: check the parameter.
 */

void *malloc_checked(unsigned int b)
{
	int *space =(int *)malloc(sizeof(unsigned int);
	if (space == NULL)
		return 98;
	return space;
}
