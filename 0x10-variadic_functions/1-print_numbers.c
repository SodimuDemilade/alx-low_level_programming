#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - main
 *
 * @separator: check
 *
 * @n: check
 *
 * Return: check
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		putchar('\n');
	va_start(ap, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i == (n - 1))
			putchar('\n');
		else
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
}
