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

	if (str == NULL)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * strlen(str) * strlen(str));
	if (arr == NULL)
		return (NULL);
	token = strtok(str, " ");
	while (token != NULL)
	{
		arr[count] = token;
		token = strtok(NULL, " ");
		count++;
	}
	return (arr);
}
