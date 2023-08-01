#include "lists.h"

/**
 * free_listint - This func frees a listint_t list
 * @head: The pointer
 */
void free_listint(listint_t *head)
{
	listint_t *temp_;

	while (head)
	{
		temp_ = head->next;
		free(head);
		head = temp_;
	}
}
