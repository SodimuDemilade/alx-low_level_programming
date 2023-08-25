#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - main
 *
 * @head: input
 *
 * Return: check
 *
 */

void free_list(list_t *head)
{
	list_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
