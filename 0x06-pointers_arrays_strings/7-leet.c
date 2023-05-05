#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - check the code.
 *
 * @str: check the parameter.
 *
 * Return: check the code.
 */

char *leet(char *str)
{
	unsigned long int i;

	for (i = 0 ; i < strlen(str) ; i++)
	{
		if (str[i] == 'A' || str[i] == 'a')
			str[i] = '4';
		else if (str[i] == 'E' || str[i] == 'e')
			str[i] = '3';
		else if (str[i] == 'O' || str[i] == 'o')
			str[i] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			str[i] = '7';
		else if (str[i] == 'l' || str[i] == 'L')
			str[i] = '1';
	}
	return (str);
}
