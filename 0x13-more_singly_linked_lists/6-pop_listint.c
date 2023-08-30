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
	listint_t *myhead = *head;

	if (head == NULL)
		return (0);
	*head = myhead->next;
	free(myhead);
	return (myhead->n);
}
