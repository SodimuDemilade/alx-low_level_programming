#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - check the code.
 *
 * @head: check.
 *
 * @idx: check.
 *
 * @n: check
 *
 * Return: check.
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *var;
	listint_t *value = *head;

	var = malloc(sizeof(listint_t));
	if (!var || !head)
		return (NULL);
	var->n = n;
	var->next = NULL;
	if (idx == 0)
	{
		var->next = *head;
		*head = var;
		return (var);
	}
	for (count = 0 ; value && count < idx ; count++)
	{
		if (count == idx - 1)
		{
			var->next = value->next;
			value->next = var;
			return (var);
		}
		else
			value = value->next;
	}
	return (NULL);
}
