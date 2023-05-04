#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - check the code.
 *
 * @a: check the parameters.
 *
 * @n: check the parameters.
 *
 */

void reverse_array(int *a, int n)
{
	int i, m, b, k;

	m = n / 2;
	k = n - 1;
	for (i = 0 ; i < m ; i++)
	{
		b = a[i];
		a[i] = a[k - i];
		a[k - i] = b;
	}
}
