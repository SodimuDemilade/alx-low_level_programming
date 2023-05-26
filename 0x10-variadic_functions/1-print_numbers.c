#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers.
 *
 * @separator: check the code.
 *
 * @n: n.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list mylist;

	va_start(mylist, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(mylist, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(mylist);
}
