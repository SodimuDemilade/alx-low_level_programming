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
	int reverse = 0;
	
	if (n == 0)
		putchar('0');
	else
	{
	while (n != 0)
	{
		reverse = reverse * 10;
		reverse = reverse + n % 10;
		n = n / 10;
	}
	while (reverse != 0)
	{	
		putchar((reverse % 10) + '0');
		reverse = reverse / 10;
	}
	}
}
