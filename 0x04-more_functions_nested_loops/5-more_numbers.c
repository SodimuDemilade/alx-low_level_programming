#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check the code.
 *
 */

void more_numbers(void)
{
	int i;
	int count = 0;

	while (count < 10)
	{
	for (i = 0 ; i <= 14 ; i++)
	{
		if (i > 9)
		{
			putchar((i / 10) + '0');
		}
		putchar((i % 10) + '0');
	}
	putchar('\n');
	count++;
	}
}
