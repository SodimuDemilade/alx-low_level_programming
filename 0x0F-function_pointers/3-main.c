#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - check the code.
 *
 * @argv: check the parameters.
 *
 * @argc: check the code.
 *
 * Return: check the code.
 *
 */

int main(int argc, char *argv[])
{
	int (*operator)(int a, int b);
	int result;

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (((strcmp(argv[2], "/")) || (strcmp(argv[2], "%"))) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = operator(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
