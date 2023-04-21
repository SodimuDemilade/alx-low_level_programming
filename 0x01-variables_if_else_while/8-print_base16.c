# include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}
	for (j = 'a' ; j <= 'f' ; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
