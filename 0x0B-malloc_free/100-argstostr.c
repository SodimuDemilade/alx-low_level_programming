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

	if (ac == 0 || av == NULL)
		return (NULL);
	tlen = strlen(*av) + strlen(ac);
	nstr = malloc(sizeof(char) * tlen);
	if (nstr == NULL)
		return (NULL);
	strcpy(nstr, av);
	strcat(nstr, ac);
	return (nstr);
}
