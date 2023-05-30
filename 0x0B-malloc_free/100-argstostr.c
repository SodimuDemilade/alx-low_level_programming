#include "main.h"
#include <stdlib.h>

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
	int i, n, r = 0, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (n = 0 ; av[i][n] ; n++)
		{
			l++;
		}
	}
	l += ac;

	nstr = malloc(sizeof(char) * l + 1);
	if (nstr == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (n = 0 ; av[i][n] ; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (nstr);
}
