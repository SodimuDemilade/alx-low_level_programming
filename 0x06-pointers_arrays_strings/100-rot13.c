#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * rot13 - check the code.
 *
 * @str: check the paarmeter.
 *
 * Return: check the code.
 */

char *rot13(char *str)
{
	unsigned long int i, j;
	char arr1[53] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
			'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e',
			'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
			'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
			'x', 'y', 'z'};
	char arr2[53] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F',
			'G', 'H', 'I', 'J', 'K', 'L', 'M', 'n', 'o',
			'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
			'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
			'h', 'i', 'j', 'k', 'l', 'm'};
	for (i = 0 ; i < strlen(str) ; i++)
	{
		for (j = 0 ; j < strlen(arr1) ; j++)
		{
			if (str[i] == arr1[j])
					str[i] = arr2[j];
		}
	}
	return (str);
}
