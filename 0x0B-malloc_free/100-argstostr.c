#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - main
 *
 * @ac: check
 *
 * @av: check
 *
 * Return: check
 *
 */

char *argstostr(int ac, char **av)
{
	char *b;
	int i, total = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		total += strlen(av[i]) + 1;
	}
	b = malloc((sizeof(char) * total) + 1);
	if (b == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		strcat(b, av[i]);
		strcat(b, "\n");
	}
	return (b);
}
