#include <stdio.h>

/**
 * get_endiannes - main
 *
 * Return: result
 *
 */

int get_endianness(void)
{
	union
	{
		int integer;
		char bytes[sizeof(int)];
	} check_endian;

	check_endian.integer = 1;
	return check_endian.bytes[0] == 1 ? 1 : 0;
}
