#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * _atoi - check the code.
 *
 * @s: check the parameter.
 *
 * Return: check the code.
 *
 */

int _atoi(char *s)
{
	int i, length;

	length = strlen(s);
	for (i = 0 ; i < length ; i++)
	{
		if (isdigit(s[i]) == 0)
			s[i] = ' ';
	}
	return (atoi(s));
}
