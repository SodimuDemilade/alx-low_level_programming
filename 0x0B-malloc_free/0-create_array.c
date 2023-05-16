#include "main.h"
#include <stdio.h>

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
	myarr = malloc(sizeof(char) * size);
	myarr[0] = c;
	return (myarr);
}
