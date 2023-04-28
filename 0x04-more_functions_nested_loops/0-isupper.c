#include "main.h"
#include <ctype.h>

/**
 * _isupper - check the code.
 *
 * @c: check the parameter.
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (isupper(c) == 0)
		return (0);
	else
		return (1);
}
