#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	long int sum = 0;

	sum += 2;
	while (a < 4000000 && b < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			sum += a;
	}
	printf("%li", sum);
	putchar('\n');
	return (0);
}
