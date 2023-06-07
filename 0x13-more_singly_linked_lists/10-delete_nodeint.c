#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - check.
 *
 * @head: check.
 *
 * @index: check.
 *
 * Return: check.
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *var = *head;
	listint_t *currnode = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(var);
		return (1);
	}
	while (count < index - 1)
	{
		if (!var || !(var->next))
			return (-1);
		var = var->next;
		count++;
	}
	currnode = var->next;
	var->next = currnode->next;
	free(currnode);
	return (1);
}
