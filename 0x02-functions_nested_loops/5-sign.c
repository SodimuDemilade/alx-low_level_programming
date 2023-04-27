#include "main.h"
#include <stdio.h>

/**
 * sign - check the code
 *
 * Return: Always 0.
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return ('+1');
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (1);
	}
}
