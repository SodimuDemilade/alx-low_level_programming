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
	unsigned long int count = 0;
	unsigned long int length;

	length = strlen(s);
	if (count < length) {
	putchar(s[count]);
	count++;
	putchar('\n');
	_puts_recursion(s);
	}
}
