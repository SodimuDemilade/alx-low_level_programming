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

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
