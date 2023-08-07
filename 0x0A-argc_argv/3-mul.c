#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
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
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	return (0);
}
