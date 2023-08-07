#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check the code.
 *
 * @c: check the parameter.
 *
 * Return: check the code.
 */

int _isdigit(int c)
{
	if (isdigit(c) == 0)
		return (0);
	else
		return (1);
}
