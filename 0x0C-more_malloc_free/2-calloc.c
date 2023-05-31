#include "main.h"
#include <stdlib.h>

/**
 * _calloc - check the code.
 *
 * @nmemb: check the parameters.
 *
 * @size: check the parameters.
 *
 * Return: check the code.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);
	for (i = 0 ; i < (nmemb * size) ; i++)
	{
		a[i] = 0;
	}
	return (a);
}
