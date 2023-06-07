#include "lists.h"

/**
 * reverse_listint - check.
 *
 * @head: check.
 *
 * Return: check.
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *var1 = NULL;
	listint_t *var2 = NULL;

	while (*head)
	{
		var2 = (*head)->next;
		(*head)->next = var1;
		var1 = *head;
		*head = var2;
	}

	*head = var1;
	return (*head);
}
