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
	long int a = 1;
	long int b = 2;
	long int c;

	printf("%li, %li", a, b);
	while (count < 50)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %li", b);
		count++;
	}
	putchar('\n');
	return (0);
}
