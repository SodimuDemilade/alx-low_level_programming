#include <stdio.h>
#include "lists.h"

size_t listint_len_loop(const listint_t *head);

/**
 * listint_len_loop - check.
 *
 * @head: check.
 *
 * Return: check.
 *
 */

size_t listint_len_loop(const listint_t *head)
{
	size_t a = 1;
	const listint_t *first, *second;

	if (head == NULL || head->next == NULL)
		return (0);

	first = head->next;
	second = (head->next)->next;
	while (second)
	{
		if (first == second)
		{
			first = head;
			while (first != second)
			{
				a++;
				first = first->next;
				second = second->next;
			}
			first = first->next;
			while (first != second)
			{
				a++;
				first = first->next;
			}
			return (a);
		}
		first = first->next;
		second = (second->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - check.
 *
 * @head: check.
 *
 * Return: check.
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count, a = 0;

	a = listint_len_loop(head);
	if (a == 0)
	{
		for (; head != NULL ; a++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (count = 0 ; count < a ; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (a);
}
