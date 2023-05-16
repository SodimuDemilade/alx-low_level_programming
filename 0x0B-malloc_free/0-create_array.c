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
	int i;

	myarr = malloc(sizeof(char) * size);
	for (i = 0 ; i < size ; i++)
	{
		myarr[i] = c;
	}
	return (myarr);
}
