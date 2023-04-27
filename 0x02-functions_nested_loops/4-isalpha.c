#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * isalpha - check the code.
 *
 * @c: check the parameter.
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (isalpha(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
