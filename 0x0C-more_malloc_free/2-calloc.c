#include "main.h"
#include <stdlib.h>

/**
 * _calloc - check the code.
 *
 * @nmemb: check the parameters.
 *
 * @size: check the parameters.
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);
	*a = 0;
	return (a);
}
