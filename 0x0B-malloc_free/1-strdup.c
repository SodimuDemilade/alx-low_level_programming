#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - main
 *
 * @str: check
 *
 * Return: check
 *
 */

char *_strdup(char *str)
{
	char *mystr;

	if (str == NULL)
		return (NULL);
	mystr = malloc(sizeof(*str));
	if (mystr == NULL)
		return (NULL);
	mystr = strdup(str);
	return (mystr);
}
