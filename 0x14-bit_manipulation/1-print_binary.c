#include <stdio.h>

/**
 * print_binary - main
 *
 * @n: input
 *
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
