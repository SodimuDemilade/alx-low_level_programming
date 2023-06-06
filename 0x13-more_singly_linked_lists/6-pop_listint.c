#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - check the code.
 *
 * @head: check the paramater.
 *
 * Return: check the code.
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *myval;
	int data;

	if (!head || !*head)
		return (0);
	data = (*head)->n;
	myval = (*head)->next;
	free(*head);
	*head = myval;
	return (data);
}
