#include "main.h"
#include "main.c"

/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
        int i;

        for (i = 'a' ; i <= 'z' ; i++)
        {
                putchar(i);
        }
        putchar('\n');
}
