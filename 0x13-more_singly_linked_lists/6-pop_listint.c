#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - main
 *
 * @head: input
 *
 * Return: deleted data
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *curr, *myhead = *head;

	curr = myhead->next;
	while (curr != NULL)
	{
		curr = curr->next;
	}
	return (myhead->n);
}
