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
	int i, j, a;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			a = i * j;
			putchar((a/10)+'0');
			putchar((a%10)+'0');
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
}
