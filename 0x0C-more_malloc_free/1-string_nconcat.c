#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - check the code.
 *
 * @s1: check the parameters.
 *
 * @s2: check the parameters.
 *
 * @n: check the parameters.
 *
 * Return: check the code.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	nstr = malloc(sizeof(char *) * (n  + strlen(s1)));
	if (nstr == NULL)
		return (NULL);
	strcpy(nstr, s1);
	strncat(nstr, s2, n);
	return (nstr);
}
