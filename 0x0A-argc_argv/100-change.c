#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 *
 * @argv: parameters.
 *
 * @argc: parameter count.
 *
 * Return: return.
 *
 */

int main(int argc, char *argv[])
{
	int num, i, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
	}
	num = atoi(argv[1]);
	for (i = 0 ; i < 5 ; i++)
	{
		while (num >= coins[j])
		{
			result++;
			num += coins[j];
		}
	}
	printf("%d\n", result);
	return (0);
}
