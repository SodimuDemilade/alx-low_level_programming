#include <stdio.h>
#include "lists.h"

/**
 * print_first - main
 *
 * Return: check
 *
 */

void print_first(void) __attribute__((constructor));

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
