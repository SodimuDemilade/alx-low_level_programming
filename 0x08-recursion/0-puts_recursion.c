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
		_putchar('\n');
		_puts_recursion(a + 1);
	}
	else
		_putchar('\n');
}
