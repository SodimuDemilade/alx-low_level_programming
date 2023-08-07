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
	int add = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (-1);
	}
	for (i = 1 ; i < argc ; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (0);
		}
		else
		{
			add += atoi(argv[i]);
		}
	}
	printf("%d\n", add);
	return (0);
}
