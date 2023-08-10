#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - main
 *
 * @s1: check
 *
 * @s2: check
 *
 * @n: check
 *
 * Return: check
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *comb;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2) + 1;
	comb = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (comb == NULL)
		return (NULL);
	strcpy(comb, s1);
	strncat(comb, s2, n);
	return (comb);
}
