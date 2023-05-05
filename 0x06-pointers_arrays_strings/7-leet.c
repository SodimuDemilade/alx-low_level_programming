#include "main.h"
#include <stdio.h>

/*
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
	}
}
