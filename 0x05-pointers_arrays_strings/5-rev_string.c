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
	int length = strlen(s);

	for (i = (length - 1) ; i >= 0 ; i--)
	{
		s[count] = s[i];
		count++;
	}
}