#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * infinite_add - check the code.
 *
 * @n1: so.
 *
 * @n2: so.
 *
 * @r: so.
 *
 * @size_r: so.
 *
 * Return: so.
 *
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned long int sum;
	int mysize;

	sum = atoi(n1) + atoi(n2);
	printf("%ld\n", sum);
	mysize = sizeof(sum);
	printf("%d\n", mysize);
	if (mysize > size_r)
	{
		return (0);
	}
	else
	{
		sprintf(r,"%ld", sum);
		return (r);
	}
}
