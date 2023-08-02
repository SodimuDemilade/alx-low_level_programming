#include "main.h"

/**
 * factorial - check
 *
 * @n: check
 *
 * Return: check
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
