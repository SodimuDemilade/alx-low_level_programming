#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code.
 *
 * @s1: check the parameters.
 *
 * @s2: check the parameters.
 *
 * Return: check the code.
 */

char *str_concat(char *s1, char *s)
{
	char *nstr;
	unsigned int tlen = strlen(s1) + strlen(s2);

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	strcat(s1, s2);
	nstr = malloc(sizeof(char) * tlen);
	if (nstr == NULL)
		return (NULL);
	nstr = s1;
	return (nstr);
}
