#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - main
 *
 * @head: input
 *
 * @idx: input
 *
 * @n: input
 *
 * Return: inserted node
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr, *new;
	unsigned int count = 0;

	curr = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = curr;
		*head = new;
		return (new);
	}
	if (head == NULL)
		return (NULL);
	while (curr != NULL)
	{
		if (count == idx - 1)
		{
			new->next = curr->next;
			curr->next = new;
			return (new);
		}
		count++;
		curr = curr->next;
	}
	return (NULL);
}
