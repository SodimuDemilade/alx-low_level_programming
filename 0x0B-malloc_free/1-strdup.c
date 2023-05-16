#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - check the code.
 *
 * @str: check the parameter.
 *
 * Return: check the code.
 *
 */

char *_strdup(char *str)
{
	char *nstr;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	nstr = malloc(sizeof(char) * strlen(str) - 1);
	if (nstr == NULL)
		return (NULL);
	nstr = strdup(str);
	return (nstr);
}
