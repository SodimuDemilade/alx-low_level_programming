#include "main.h"
#include <stdio.h>

/**
 * times_table - check the code.
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			putchar(i * j);
			putchar(',');
			putchar(':');
		}
		putchar('\n');
	}
}
