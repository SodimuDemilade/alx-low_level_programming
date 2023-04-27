#include "main.h"
#include <stdio.h>

/**
 * print_times_table - check the code.
 *
 * Description: 'the program's description'
 *
 * @n : check the parameter.
 *
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
	int i, j, a, b, c;

	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			a = i * j;
			b = a / 10 + '0';
			if (j != 0)
			{
				putchar(' ');
				if (b != '0')
				{
					putchar(b);
				}
				else
					putchar(' ');
			}
			putchar((a % 10) + '0');
			if (j != n)
			putchar(',');
		}
		putchar('\n');
	}
	}
}
