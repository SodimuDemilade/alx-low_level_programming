#include <stdio.h>

/**
 * get_bit - main
 *
 * @n: input
 *
 * @index: input
 *
 * Return: output
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
			return (-1);
	return ((n >> index) & 1);
}
