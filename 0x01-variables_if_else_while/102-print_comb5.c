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
	int i, j, k, l;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			putchar(' ');
			for (k = '0' ; k <= '9'; k++)
			{
				for (l = '0' ; l <= '9' ; l++)
				{
					if (l > j)
					{
						putchar(k);
						putchar(l);
						putchar(',');
						putchar(' ');
					}
					else
					{
						continue;
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
