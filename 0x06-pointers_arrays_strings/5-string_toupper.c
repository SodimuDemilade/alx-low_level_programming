#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - check the code.
 *
 *@str: check the parameter.
 *
 * Return: check the code.
 */

char *string_toupper(char *str)
{
	unsigned long int i;

	for (i = 0 ; i < strlen(str) ; i++)
	{
		if (isupper(str[i]) == 0)
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
