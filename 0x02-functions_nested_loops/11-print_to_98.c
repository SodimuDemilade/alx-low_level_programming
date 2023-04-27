#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * Description: 'the program's description'
 *
 * @n: check parameter.
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int i, b, c;

	for (i = n ; i <= 98 ; i++)
	{
		if (i > 9)
		{
			b = i / 10;
			c = i % 10;
			putchar('0' + b);
			putchar('0' + c);
		}
		else
			putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
}
