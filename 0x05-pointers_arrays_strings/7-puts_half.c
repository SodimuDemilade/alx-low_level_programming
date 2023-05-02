#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - check the code.
 *
 * @str: check the parameter.
 *
 */

void puts_half(char *str)
{
	unsigned long int i, length, n;

	length = strlen(str);
	if (length % 2 == 0)
		n = length / 2;
	else
		n = ((length - 1) / 2) + 1;
	for (i = n ; i < length ; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
