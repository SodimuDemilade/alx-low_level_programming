#include "main.h"
#include <stdlib.h>

/**
 * memset - check the code.
 *
 * @s: check the parameters.
 *
 * @b: check the parameters.
 *
 * @n: check the parameters.
 *
 * Return: check the code.
 *

char *_memset(char *s, char *b, char *n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}*/

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
