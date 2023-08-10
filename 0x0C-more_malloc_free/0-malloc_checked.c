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
	void *num = malloc(b);

	if (num == NULL)
		exit (98);
	return (num);
}
