#include "main.h"
#include <stdio.h>
#include "main.c"

/**
 * print_triangle - check the code.
 *
 * @size: check the parameter.
 *
 */

void print_triangle(int size)
{
	if (size <= 0)
		putchar('\n');
	else
	{
		int i, a, j, k;

		for (i = 1 ; i <= size ; i++)
		{
			a = size - i;
			for (j = 1 ; j <= a ; j++)
			{
				putchar(' ');
			}
			for (k = 1 ; k <= i ; k++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
