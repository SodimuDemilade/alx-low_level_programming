#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - main
 *
 * @head: input
 *
 * @index: input
 *
 * Return: the nth node
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *curr = head, *node;

	if (head == NULL)
		return (NULL);
	while (curr != NULL)
	{
		if (count == index)
		{
			node = curr;
			return (node);
		}
		count++;
		curr = curr->next;
	}
	return (NULL);
}
