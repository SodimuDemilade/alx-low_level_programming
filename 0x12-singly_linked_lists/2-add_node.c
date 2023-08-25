#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - main
 *
 * @head: input
 *
 * @str: input
 *
 * Return: address of new element
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup_str;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	dup_str = strdup(str);
	new->str = dup_str;
	if (new->str == NULL)
	{
		free(new);
		return (new);
	}
	new->len = strlen(dup_str);
	new->next = *head;
	*head = new;
	return (new);
}
