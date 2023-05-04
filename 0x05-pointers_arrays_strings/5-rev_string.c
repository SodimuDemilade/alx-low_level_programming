#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - check the code.
 *
 * @s: check the parameter.
 *
 */

void rev_string(char *s)
{
	int i, m, b, a;
	int length = strlen(s);

	m = length - 1;
	b = length / 2;
	for (i = 0 ; i < b ; i++)
	{
		a = s[i];
		s[i] = s[m - i];
		s[m - i] = a;
	}
}
