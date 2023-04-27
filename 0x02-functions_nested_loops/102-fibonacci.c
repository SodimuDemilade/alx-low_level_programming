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
	int count = 0;
	int a = 1;
	int b = 2;
	int c;

	printf("%lli, %lli", a, b);
	while (count < 50)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %lli", b);
		count++;
	}
	putchar('\n');
	return (0);
}
