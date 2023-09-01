#include <stdio.h>

/**
 * flip_bits - main
 *
 * @n: input
 *
 * @m: input
 *
 * Return: ouput
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, result;

	result = n ^ m;
	while (result)
	{
		count += result & 1;
		result  >>= 1;
	}
	return (count);
}
