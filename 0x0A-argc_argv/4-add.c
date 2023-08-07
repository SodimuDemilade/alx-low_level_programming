#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
	int i, j;
	int len;
	char *num;

	if (argc == 1)
	{
		printf("0\n");
		return (-1);
	}
	for (i = 1 ; i < argc ; i++)
	{
		len = strlen(argv[i]);
		num = argv[i];
		for (j = 0 ; j < len ; j++)
		{
			if (isdigit(num[j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
			add += atoi(num);
	}
	printf("%d\n", add);
	return (0);
}
