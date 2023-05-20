#include <stdio.h>

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
	int i;

	for (i = 0 ; i < argc ; i++)
	{	
		printf("%s\n", argv[i]);
	}
	return (0);
}
