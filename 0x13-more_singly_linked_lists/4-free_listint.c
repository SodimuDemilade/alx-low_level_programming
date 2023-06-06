#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - check the code.
 *
 * @head: check the parameter.
 *
 */

void free_listint(listint_t *head)
{
	listint_t *myval;
	while (head != NULL)
	{
		myval = head->next;
		free(head);
		head = myval;
	}
}
