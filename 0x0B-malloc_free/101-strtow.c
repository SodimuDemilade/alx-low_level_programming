#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * strtow - check the code.
 *
 * @str: check the parameters.
 *
 * Return: check the code.
 *
 */

char **strtow(char *str)
{
	char **arr;
	char *token;
	int count = 0;
	char nstr[10000];

	strcpy(nstr, str);
	if (nstr == NULL)
		return (NULL);
	arr = malloc(sizeof(char *) * strlen(str));
	if (arr == NULL)
		return (NULL);
	token = strtok(nstr, " ");
	while (token != NULL)
	{
		arr[count] = token;
		token = strtok(NULL, " ");
		count++;
	}
	return (arr);
}
