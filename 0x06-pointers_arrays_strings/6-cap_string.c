#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * cap_string - check the code.
 *
 * Description: something
 *
 * @str: check the parameter.
 *
 * Return: check the code.
 */

char *cap_string(char *str)
{
	unsigned long int i, j;
	char arr[12] = {',', ';', '.', '?', '"', '(', ')', '{', '}', '\n', ' ', '	'};

	for (i = 0 ; i < strlen(str) ; i++)
	{
		if (str[i] == '\t')
			str[i] = ' ';
		for (j = 0; j < strlen(arr) ; j++)
		{
			if (str[i] == arr[j])
			{
				str[i + 1] = toupper(str[i + 1]);
			}
		}
	}
	return (str);
}
