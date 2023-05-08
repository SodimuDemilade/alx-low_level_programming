#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - check the code.
 *
 * @a: check the parameter.
 */

void print_chessboard(char (*a)[8])
{
	unsigned long int i, j;

	for (i = 0 ; i < strlen(a) ; i++)
	{
		for (j = 0 ; j < strlen(a) ; j++)
		{
			if (a[i][j] == ' ')
				continue;
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
