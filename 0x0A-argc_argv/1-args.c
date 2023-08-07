#include <stdio.h>

/**
 * main - check
 *
 * @argv: check
 *
 * @argc: check
 *
 * Return: check
 *
 */

int main(int argc, char *argv[])
{
	int new;

	(void)(argv);
	new = argc - 1;
	printf("%d", new);
	putchar('\n');
	return (0);
}
