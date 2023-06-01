#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node_end - check the code.
 *
 * @head: check the parameter.
 *
 * @str: check the parameter.
 *
 * Return: check the code.
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t*) malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return NULL;
	}
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		list_t *last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return(new);
}
