#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - check the code.
 *
 * @dest: check the parameters.
 *
 * @src: check the parameters.
 *
 * @n: check teh parameters.
 *
 * Return: check the code.
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
