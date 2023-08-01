#include "lists.h"
#include <stdio.h>

size_t looped_listint_leng(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_leng - func counts the number of unique nodes
 * In a looped listint_t .
 * @head: The pointer to the head of the listint_t list to check.
 *
 * Return: returns if the list is not looped - zero.
 * Otherwise - it returns the number of unique nodes in the list.
 */
size_t looped_listint_leng(const listint_t *head)
{
	const listint_t *tortois, *har;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortois = head->next;
	har = (head->next)->next;

	while (har)
	{
		if (tortois == har)
		{
			tortois = head;
			while (tortois != har)
			{
				node++;
				tortois = tortois->next;
				har = har->next;
			}

			tortois = tortois->next;
			while (tortois != har)
			{
				node++;
				tortois = tortois->next;
			}

			return (node);
		}

		tortois = tortois->next;
		har = (har->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - that prints a listint_t linked list.
 * @head: A pointer.
 *
 * Return: returns the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, indx = 0;

	node = looped_listint_leng(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (indx = 0; indx < node; indx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
