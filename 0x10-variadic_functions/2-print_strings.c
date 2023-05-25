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

	va_start(mylist, n);
	for (i = 0 ; i < n ; i++)
	{
		/*if ((va_arg(mylist, char*)) == NULL)
		{
			printf("%s", va_arg(mylist, char*));
			printf("(nil)");
		}*/
		
		
			printf("%s", va_arg(mylist, char*));
			
		if (i != (n - 1))
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(mylist);
}
