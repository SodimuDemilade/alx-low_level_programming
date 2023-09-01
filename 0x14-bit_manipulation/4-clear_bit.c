#include <stdio.h>

/**
 * clear_bit - main
 *
 * @n: input
 *
 * @index: input
 *
 * Return: output
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, one = 1;
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = one << index;
	*n &= ~mask;
	return (1);
}
