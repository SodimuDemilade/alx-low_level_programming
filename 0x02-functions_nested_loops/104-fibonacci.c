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
        int c;

        printf("%lli, %lli", a, b);
        while (count < 96)
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
