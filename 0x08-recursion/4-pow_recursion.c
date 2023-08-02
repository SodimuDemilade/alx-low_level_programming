#include "main.h"

/**
 * _pow_recursion - main
 *
 * @x: check
 *
 * @y: check
 *
 * Return: check
 *
 */

int _pow_recursion(it x, int y)
{
	if (x < 0)
		return (-1);
	else if (x == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1);
}
