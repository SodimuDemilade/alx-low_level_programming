#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code.
 *
 * @a: check the parameter.
 *
 * @b: check the parameter.
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
