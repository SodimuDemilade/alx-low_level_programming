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
	unsigned count = 0;
	if (index == 0)
	{
		return (head->n);
		count++;
	}
	while (head != NULL)
	{
		head = head->next;
		if (count == index)
			return (head->n);
		count++;
	}
	return (NULL);
}
