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
	f(name);
}
