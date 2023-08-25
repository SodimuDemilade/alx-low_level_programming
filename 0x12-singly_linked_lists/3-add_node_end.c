#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - main
 *
 * @head: input
 *
 * @str: input
 *
 * Return: address of element
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	list_t *last = *head;

	if (str == NULL || head == NULL)
		return (NULL);
	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	dup_str = strdup(str);
	new_node->str = dup_str;
	if (new_node->str == NULL)
	{
		free(new_node);
		return (new_node);
	}
	new_node->len = strlen(dup_str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
