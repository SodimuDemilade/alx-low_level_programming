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
	int i;
	int count = 0;
	int p[strlen(s)];

	for (i = (strlen(s) - 1) ; i >= 0 ; i--)
	{
		p[count] = s[i];
		count++;
	}
	*s = p;
}
