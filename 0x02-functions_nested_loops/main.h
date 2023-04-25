#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(void)
{
	int letter;
	letter = '_';
        putchar(letter);
	letter = 'p';
        putchar(letter);
	letter = 'u';
        putchar(letter);
	letter = 't';
        putchar(letter);
	letter = 'c';
        putchar(letter);
	letter = 'h';
        putchar(letter);
	letter = 'a';
        putchar(letter);
	letter = 'r';
        putchar(letter);
	return (0);
}

int print_alphabet(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
#endif
