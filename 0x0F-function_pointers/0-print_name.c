#include <stdio.h>

/**
 * print_name - main
 *
 * @name: check
 *
 * @f: check
 *
 * Return: check
 *
 */

void print_name(char *name, void (*f)(char *a))
{
	if (f == NULL)
		return;
	f(name);
}
