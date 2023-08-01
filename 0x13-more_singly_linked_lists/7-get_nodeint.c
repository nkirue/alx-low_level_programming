#include "lists.h"

/**
 * get_nodeint_at_index - func that returns the nth node of a listint_t list.
 * @head: The Pointer that point to the first node in the linked list
 * @index: The index of the node to return
 *
 * Return: Returns pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp_ = head;

	while (temp_ && j < index)
	{
		temp_ = temp_->next;
		j++;
	}

	return (temp_ ? temp_ : NULL);
}
