#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - main
 *
 * @size: check
 *
 * @c: check
 *
 * Return: check
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *myarr;

	if (size == 0)
		return (NULL);
	myarr = malloc(sizeof(char) * size);
	if (myarr == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
	{
		myarr[i] = c;
	}
	return (myarr);
}
