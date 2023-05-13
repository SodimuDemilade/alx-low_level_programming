#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - check the code.
 *
 * @s: check the parameter.
 *
 */

unsigned long int length;
unsigned long int count = 0;
void _puts_recursion(char *s)
{
	length = strlen(s);
	if (count >= length)
		putchar('\n');
	putchar(s[count]);
	count++;
	_puts_recursion(s);
}
