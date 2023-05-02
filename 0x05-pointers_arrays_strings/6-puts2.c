#include "main.h"
#include <stdio.h>

/**
 * puts2 - check the code.
 *
 * @str: check the parameter.
 *
 */


void puts2(char *str)
{
	int i;

	for (i = 0 ; i <= strlen(str) ; i = i + 2)
	{
		putchar(str[i]);
	}
}
