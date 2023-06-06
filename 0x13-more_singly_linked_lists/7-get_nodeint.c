#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - check the code.
 *
 * @head: check the parameter.
 *
 * @index: check the parameter.
 *
 * Return: check the code.
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *var = head;

	while (var && count < index)
	{
		var = var->next;
		count++;
	}
	return (var ? var : NULL);
}
