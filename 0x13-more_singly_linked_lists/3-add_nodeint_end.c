#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - check the code.
 *
 * @head: check the parameters.
 *
 * @n: check the parameters.
 *
 * Return: check the code.
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		listint_t *last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = node;
	}
	return (node);
}
