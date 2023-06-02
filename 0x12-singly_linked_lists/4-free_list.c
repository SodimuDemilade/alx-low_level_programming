#include <stdlib.h>
#include "lists.h"

/**
 * free_list - check the code.
 *
 * @head: check the paarmeter.
 *
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
