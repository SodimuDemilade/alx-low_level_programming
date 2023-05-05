#include "main.h"
#include <stdio.h>

/**
 * print_number - check the code.
 *
 * @n: check the parameter.
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

    /* Remove the last digit and recur*/
	if (n / 10)
		print_number(n / 10);

    /* Print the last digit*/
	putchar(n % 10 + '0');
}
