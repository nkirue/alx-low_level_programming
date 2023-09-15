#include "lists.h"

/**
 * sum_dlistint - func returns the sum of all the data (n)
 * of a dlistint_t doubly linked list
 * @head: head Pointer
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_data = 0;


	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum_data += head->n;
			head = head->next;
		}
	}

	return (sum_data);
}


