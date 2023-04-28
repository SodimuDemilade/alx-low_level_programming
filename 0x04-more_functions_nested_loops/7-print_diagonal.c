#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - check the code.
 *
 * @n: check the parameter.
 */

void print_diagonal(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int i, count;

		for (i = 1 ; i <= n ; i++)
		{
			putchar('\\');
			if (i != n)
			{
				putchar('\n');
				count = 1;
				while (count <= i)
				{
					putchar(' ');
					count++;
				}
			}
		}
		putchar('\n');
	}
}
