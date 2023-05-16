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
	myarr = malloc(sizeof(char) * size);
	myarr[0] = c;
	return (myarr);
}
