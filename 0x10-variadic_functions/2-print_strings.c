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
	char *str;

	if (n == 0)
		putchar('\n');
	va_start(ap, n);
	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i == (n - 1))
		{
			printf("\n");
		}
		else
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
}
