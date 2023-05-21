#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 *
 * @argv: check the parameters
 *
 * @argc: check the parameters.
 *
 * Return: check the code.
 *
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
	{
		printf("Error\n");
		exit(98);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result); 
	return (0);
}
