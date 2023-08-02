#include "main.h"

int check(char *a, int b, int count);
int _strlen(char *c);

/**
 * is_palindrome - check
 *
 * @s: check
 *
 * Return: check
 *
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _strlen(s)));
}

/**
 * _strlen - check
 *
 * @c: check
 *
 * Return: check
 *
 */

int _strlen(char *c)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * check - main
 *
 * @a: check
 *
 * @b: check
 *
 * Return: check
 *
 */

int check(char a, int b, int count)
{
	if (*(a + b) != *(a + count - 1))
		return (0);
	if (a >= count)
		return (1);
	return (check(a, b + 1, count - 1));
}
