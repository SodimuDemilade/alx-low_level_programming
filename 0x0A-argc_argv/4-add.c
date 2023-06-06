#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int check_number(char *str);

/**
 * check_number - check the code.
 *
 * @str: check the parameter.
 *
 * Return: check the code,
 *
 */

int check_number(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

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
	int j;
	int add = 0;

		for (i = 1 ; i < argc ; i++)
		{
			if (check_number(argv[i]))
			{
				j = atoi(argv[count]);
				add += j
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
		return (0);
}
