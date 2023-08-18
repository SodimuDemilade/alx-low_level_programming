#include <stdio.h>
#include <stdarg.h>

/**
 * process_format - main
 *
 * @format: check
 *
 * @ap: check
 *
 */

void process_format(const char * const format, va_list ap)
{
	int i = 0;
	char e;
	char *d;

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				{
					printf("%c", va_arg(ap, int));
					break;
				}
			case 'i':
				{
					printf("%d", va_arg(ap, int));
					break;
				}
			case 'f':
				{
					printf("%f", (float)va_arg(ap, double));
					break;
				}
			case 's':
				{
					d = va_arg(ap, char *);
					if (d == NULL)
						d = "(nil)";
					printf("%s", d);
					break;
				}
			default:
				break;
		}
		i++;
		e = format[i];
		if (e != '\0' && (e == 'c' || e == 'i' || e == 'f' || e == 's'))
			printf(", ");
	}
}

/**
 * print_all - main
 *
 * @format: check
 *
 */

void print_all(const char * const format, ...)
{
	va_list ap;

	va_start(ap, format);
	process_format(format, ap);
	printf("\n");
	va_end(ap);
}
