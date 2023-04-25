#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i = 'a';
	int count = '0';

	while (count < '9')
	{
		i = 'a';
		while (i <= 'z')
		{
			putchar(i);
			i++;
		}
		putchar('\n');
		count++;
	}
}
