#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - check the code.
 *
 * @ac: check the parameters.
 *
 * @av: check the parameters.
 *
 * Return: check the code.
 */

char *argstostr(int ac, char **av)
{
	char *nstr;
	unsigned int tlen;
	int count;
	char str;

	if (ac == 0 || av == NULL)
		return (NULL);
	tlen = strlen(*av) + strlen(str);
	nstr = malloc(sizeof(char) * tlen);
	if (nstr == NULL)
		return (NULL);
	strcpy(nstr, *av);
	strcat(nstr, str);
	return (nstr);
}
