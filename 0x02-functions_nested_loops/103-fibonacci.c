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
	long int c = 0;
	long int sum;

	while (a < 4000000 && b < 4000000)
	{
		if (a % 2 == 0)
			sum += a;
		if (b % 2 == 0)
			sum += b;
		c = a + b;
		a = b;
		b = c;
	}
	printf("%li", sum);
	putchar('\n');
	return (0);
}
