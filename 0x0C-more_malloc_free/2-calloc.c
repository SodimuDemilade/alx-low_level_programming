#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - main
 *
 * @nmemb: check
 *
 * @size: check
 *
 * Return: check
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	memset(arr, 0, nmemb * size);
	return (arr);
}
