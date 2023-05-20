#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 *
 * @argc: check the parameters.
 *
 * @argv: check the parameters.
 *
 * Return: check the code.
 *
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc > 1)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
