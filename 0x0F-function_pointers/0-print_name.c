#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - check the code.
 *
 * @name: check the parameters.
 *
 * @f: check the parameters.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
