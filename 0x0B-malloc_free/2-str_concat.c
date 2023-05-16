#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - check the code.
 *
 * @s1: check the parameters.
 *
 * @s2: check the parameters.
 *
 * Return: check the code.
 */

char *str_concat(char *s1, char *s2)
{
	char *nstr;
	unsigned int tlen;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	tlen = strlen(s1) + strlen(s2);
	nstr = malloc(sizeof(char) * (tlen + 1));
	if (nstr == NULL)
		return (NULL);
	strcpy(nstr, s1);
	strcat(nstr, s2);
	return (nstr);
}
