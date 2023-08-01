#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head:The pointer
 *
 * Return:a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next_ = NULL;

	while (*head)
	{
		next_ = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next_;
	}

	*head = previous;

	return (*head);
}
