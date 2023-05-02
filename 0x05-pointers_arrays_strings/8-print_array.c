#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code.
 *
 * @a: check the parameter.
 *
 * @n: check the parameter.
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
}
