#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int word_len(char *a);

/**
 * word_len - check the code.
 *
 * @a: check the parameter.
 *
 * Return: check the code.
 *
 */

int word_len(char *a)
{
	int count, i, j;

	count = 0;
	i = 0;
	for (j = 0 ; a[j] != '\0' ; j++)
	{
		if (a[j] == ' ')
			count = 0;
		else if (count == 0)
		{
			count = 1;
			i++;
		}
	}
	return (i);
}

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
	int k, j = 0, count = 0, words, l = 0, begin, end;

	while (*(str + count))
		count++;
	words = word_len(str);
	if (words == 0)
		return (NULL);
	arr = (char**)malloc((words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	for (k = 0 ; k <= count ; k++)
	{
		if (str[k] == ' ' || str[k] == '\0')
		{
			if (l)
			{
				end = k;
				token = (char *)malloc((l + 1) * (sizeof(char)));
				if (token == NULL)
					return (NULL);
				while (begin < end)
					*token++ = str[begin++];
				*token = '\0';
				arr[j] = token - l;
				j++;
				l = 0;
			}
		}
		else if (l++ == 0)
			begin = k;
	}
	arr[j] = NULL;
	return (arr);
}
