#include "lists.h"

/**
 * sum_listint - check the code;
 *
 * @head: check the parameter.
 *
 * Return: check the code.
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *currnode = head;
	
	if (currnode == NULL)
		return (0);
	while (currnode != NULL)
	{
		sum += currnode->n;
		currnode = currnode->next;

	}
	return (sum);
}
