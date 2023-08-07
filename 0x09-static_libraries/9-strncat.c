#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - check the code.
 *
 * @dest: check the parameter.
 *
 * @src: check the parameter.
 *
 * @n: check the parameter.
 *
 * Return: check the code.
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
