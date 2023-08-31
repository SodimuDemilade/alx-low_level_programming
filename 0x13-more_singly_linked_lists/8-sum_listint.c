#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - main
 *
 * @head: input
 *
 * Return: input
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr = head;

	if (head == NULL)
		return (0);
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
