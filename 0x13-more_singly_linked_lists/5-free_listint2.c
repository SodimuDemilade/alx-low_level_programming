#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - main
 *
 * @head: input
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
	}
	*head = NULL;
}
