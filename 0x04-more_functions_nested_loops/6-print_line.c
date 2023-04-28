#include "main.h"
#include <stdio.h>

/**
 * print_line - check the code.
 *
 * @n: check the parameter.
 */

void print_line(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int i;

		for (i = 0 ; i <= n ; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
