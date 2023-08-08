#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - main
 *
 * @s1: check
 *
 * @s2: check
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *dest;

	dest = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest = s1;
	strcat(dest, s2);
	return dest;
}
