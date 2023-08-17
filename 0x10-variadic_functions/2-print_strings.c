#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - main
 *
 * @separator: check
 *
 * @n: check
 *
 * Return: check
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0 ; i < n ; i++)
	{
		if ((va_arg(ap, char*)) != NULL)
			printf("%s", va_arg(ap, char*));
		else
			printf("(nil)");
		if (i == (n - 1))
			printf("\n");
		else
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
}
