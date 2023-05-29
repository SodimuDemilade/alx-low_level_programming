#include "main.h"

/**
 * _strlen_recursion - check the code.
 *
 * @s: parameter passed.
 *
 * Return: check the code.
 *
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
}
