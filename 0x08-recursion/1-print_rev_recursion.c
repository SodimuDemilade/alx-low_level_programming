#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _print_rev_recursion - check the code.
 *
 * @s: check the parameter.
 *
 */

void _print_rev_recursion(char *s)
{
	int num;

	num = atoi(s);
	if (num == 0)
		return;
	putchar(num % 10);
	_print_rev_recursion(num / 10);
}
