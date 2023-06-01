#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add a node to the beginning of a list.
 *
 * @head: parameter head.
 *
 * @str: parameter str.
 *
 * Return: check the code.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new= malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->next = *head;
	head = &new;
	return (*head);
}
