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
	int i, j;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{
			if (a[i][j] == ' ')
				continue;
			putchar(a[i][j]);
		}
		if (i != 8)
			putchar('\n');
	}
}
