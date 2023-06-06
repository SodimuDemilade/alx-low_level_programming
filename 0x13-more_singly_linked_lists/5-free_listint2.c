#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - check the code.
 *
 * @head: check the parameter.
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *myval;

	if (head == NULL)
		return;
	while (*head)
	{
		myval = (*head)->next;
		free(*head);
		*head = myval;
	}
	*head = NULL;
}
