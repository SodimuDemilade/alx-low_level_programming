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
		list_t *mytemp = head;

		head = head->next;
		free(mytemp->str);
		free(mytemp);
	}
}
