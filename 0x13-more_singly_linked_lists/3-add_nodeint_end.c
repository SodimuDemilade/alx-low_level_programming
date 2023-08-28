#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - main
 *
 * @head - input
 *
 * @n: input
 *
 * Return: address of new node
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, last;

	last = *head;
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (new->n == NULL)
	{
		free(new);
		return (new);
	}
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = n;
	return (new);
}
