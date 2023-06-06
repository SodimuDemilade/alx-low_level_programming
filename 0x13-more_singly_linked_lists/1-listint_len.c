#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - check the code.
 *
 * @h: check the parameter.
 *
 * Return: check the code.
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}
