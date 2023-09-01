#include <stdio.h>

/**
 * get_endianness - main
 *
 *
 * Return: result
 *
 */

int get_endianness(void)
{
	union
	{
		int num;
		char bytes[sizeof(int)];
	} check;

	check.num = 1;
	return (check.bytes[0] == 1 ? 1 : 0);
}
