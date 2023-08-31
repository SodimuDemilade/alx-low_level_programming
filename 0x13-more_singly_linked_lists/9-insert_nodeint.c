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
	listint_t *curr, *prev, *new;
	unsigned int count = 0;

	prev = *head;
	curr = prev->next;
	new = malloc(sizeof(listint_t));
	new->n = n;
	while (curr != NULL)
	{
		if (count == idx)
		{
			prev->next = new;
			new->next = curr;
			return (new);
		}
		count++;
		prev = prev->next;
		curr = curr->next;
	}
	return (NULL);
}
