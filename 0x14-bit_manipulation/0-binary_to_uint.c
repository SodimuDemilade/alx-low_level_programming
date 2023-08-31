#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - main
 *
 * @b: input
 *
 * Return: output
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, result = 0, count;

	if (b == NULL)
		return (0);
	len = strlen(b);
	count = len - 1;
	for (i = 0 ; i < len ; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result += ((b[i] - '0') << count);
		count--;
	}
	return (result);
}
