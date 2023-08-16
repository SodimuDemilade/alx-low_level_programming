#include <stdio.h>

/**
 * print_name - main
 *
 * @name: check
 *
 * @f: check
 *
 * @a: check
 *
 * Return: check
 *
 */

void print_name(char *name, void (*f)(char *a))
{
	f(name);
}
