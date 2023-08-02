#include "main.h"

int prime(int a, int b);

/**
 * is_prime_number - main
 *
 * @n: check 
 *
 * Return: check
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - main
 *
 * @a: check
 *
 * @b: check
 *
 * Return: check
 *
 */

int prime(int a, int b)
{
	if (b == 1)
		return (1);
	if (a % b == 0 && b > 0)
		return (0);
	return (prime(a, b - 1));
}
