#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings.
 *
 * @separator: separator.
 *
 * @n: n.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list mylist;
	char *mystr;

	va_start(mylist, n);
	for (i = 0 ; i < n ; i++)
	{
		mystr = va_arg(mylist, char*);
		if (mystr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", mystr);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(mylist);
}
