#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - check.
 *
 * @head: check.
 *
 * Return: check.
 *
 */

size_t free_listint_safe(listint_t **h)
{
	int sub;
	size_t count = 0;
	listint_t *var;

	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
	{
		sub = *h - (*h)->next;
		if (sub > 0)
		{
			var = (*h)->next;
			free(*h);
			*h = var;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
