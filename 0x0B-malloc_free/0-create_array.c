#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - check the code.
 *
 * @size: check the parameters.
 *
 * @c: check the parameters.
 *
 * Return: check the code.
 */

char *create_array(unsigned int size, char c)
{
	char *myarr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	myarr = malloc(INT_MAX);
	if (myarr == NULL)
	{
		return (NULL);
	}
	myarr = malloc(sizeof(char) * size);
	for (i = 0 ; i < size ; i++)
	{
		myarr[i] = c;
	}
	return (myarr);
}
