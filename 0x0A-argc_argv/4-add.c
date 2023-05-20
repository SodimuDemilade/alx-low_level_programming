#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - check the code.
 *
 * @argv: check the parameters.
 *
 * @argc: check the parameters.
 *
 * Return: check the code.
 *
 */

int main(int argc, char *argv[])
{
	int i;
	int add = 0;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (1);
	}
}
