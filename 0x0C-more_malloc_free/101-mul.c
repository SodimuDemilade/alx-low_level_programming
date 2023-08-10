#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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
	unsigned long int mult;
	char *num1, *num2;
	unsigned int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];
	for (i = 0 ; i < strlen(argv[1]) ; i++)
	{
		if (isdigit(num1[i]) == 0)
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (j = 0 ; j < strlen(argv[2]) ; j++)
	{
		if (isdigit(num2[j]) == 0)
		{
			printf("Error\n");
			exit(98);
		}
	}
	mult = strtoul(argv[1], NULL, 10) * strtoul(argv[2], NULL, 10);
	printf("%lu\n", mult);
	return (0);
}
