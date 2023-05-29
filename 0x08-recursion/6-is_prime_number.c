#include "main.h"

/**
 * is_prime_number - check the code.
 *
 * @n: parameter passed.
 *
 * Return: check the code.
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - check the code.
 *
 * @n: parameter passed.
 *
 * @i: iterator.
 *
 * Return: check the code.
 *
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
