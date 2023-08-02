#include "main.h"

/**
 * print_rev_recursion - main
 *
 * @s: check
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
