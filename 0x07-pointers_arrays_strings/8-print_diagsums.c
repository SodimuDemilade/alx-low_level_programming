#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - check the code.
 *
 * @a: check teh parameters.
 *
 * @size: check the parameters.
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int diag1 = 0;
	int diag2 = 0;
	int asize = size - 1;
	int *cptr = NULL;
	int *iptr = NULL;

	cptr = &(a[0]);
	for (i = 0 ; i < size ; i++)
	{
		diag1 += (a[i][i];
	}
	for (j = 0 ; j < size ; j++)
	{		
		diag2 += a[j][asize - j];
	}
	printf("%d, %d", diag1, diag2);
}
