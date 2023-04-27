#include "main.h"
#include <unistd.h>

/**
 * _putchar : test the function.
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
