#include <stdio.h>
#include <stdlib.h>

int _atoi(char *a);

/**
 * _atoi - check the code.
 *
 * @a: check the parameter.
 *
 * Return: check the code.
 *
 */

int _atoi(char *a)
{
	int i = 0, j = 0, k = 0, count = 0, l = 0, num = 0;

	while (a[count] != '\0')
		count++;

	while (i < count && l == 0)
	{
		if (a[i] == '-')
			++j;
		if (a[i] >= '0' && a[i] <= '9')
		{
			num = a[i] - '0';
			if (j % 2)
				num = -num;
			k = k * 10 + num;
			l = 1;
			if (a[i + 1] < '0' || a[i + 1] > '9')
				break;
			l = 0;
		}
		i++;
	}
	if (l == 0)
		return (0);
	return (k);
}

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
	int result, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
		a = _atoi(argv[1]);
		b = _atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	return (0);
}
