#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - check the code.
 *
 * @s: check the parameter.
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
