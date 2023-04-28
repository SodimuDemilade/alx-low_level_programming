#include "main.h"
#include <stdio.h>

/**
 * print_square - check the code.
 *
 * @size: check the parameter.
 *
 */

void print_square(int size)
{
	if (size <= 0)
		putchar('\n');
	else
	{
		int i, j;

		for (i = 1 ; i <= size ; i++)
		{
			for (j = 1 ; j <= size ; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
