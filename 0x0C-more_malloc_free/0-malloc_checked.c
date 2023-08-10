#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - main
 *
 * @b: check
 *
 */

void *malloc_checked(unsigned int b)
{
	unsigned int num;

	num = malloc(b);
	if (num == NULL)
		return (98);
	return (num);
}
