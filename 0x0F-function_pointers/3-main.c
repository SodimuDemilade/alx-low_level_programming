#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

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
	int (*operator)(int a, int b);
	int result, n1, n2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	op = argv[2];
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if ((!strcmp(op, "/") || !strcmp(op, "%")) && (n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = operator(n1, n2);
	printf("%d\n", result);
	return (0);
}
