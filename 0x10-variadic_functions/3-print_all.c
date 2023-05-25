#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - check the code.
 *
 * @format: check the parameter.
 *
 */

void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	va_list mylist;
	int index = 0;

	va_start(mylist, format);
	while(format[index] != '\0')
	{
		if(format[index] == 'c')
		{
			c = (char)va_arg(mylist, int);
			printf("%c", c);
			putchar(',');
			putchar(' ');
		}
		else if(format[index] == 'i')
		{
			i = va_arg(mylist, int);
			printf("%i", i);
			putchar(',');
			putchar(' ');
		}
		else if (format[index] == 'f')
		{
			f = (float)va_arg(mylist, double);
			printf("%f", f);
			putchar(',');
			putchar(' ');
		}
		else if (format[index] == 's')
		{
			s = va_arg(mylist, char *);
			if (s != NULL)
			{
				printf("%s", s);
			}
			else
				printf("(nil)");
			putchar(',');
			putchar(' ');
		}
		index++;
	}
	va_end(mylist);
	printf("\n");
}
