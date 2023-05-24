#include <stdio.h>

/**
 * print_name - check the code.
 *
 * @name: check the parameters.
 *
 * @f: check the parameters.
 *
 */

void f(char *name)
{
	printf("%s", name);
}

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
