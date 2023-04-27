#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - check the code.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (islower(c) == '0')
	{
		return ('0');
	}
	else
	{
		return( '1');
	}
}
