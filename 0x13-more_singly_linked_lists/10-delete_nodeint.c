#include "lists.h"

/**
 * delete_nodeint_at_index -deletes the node at index index of a listint_t
 * @head: The pointer to the first element in the list
 * @index: The index of the node to delete
 *
 * Return: Returns 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_ = *head;
	listint_t *current_ = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_);
		return (1);
	}

	while (j < index - 1)
	{
		if (!temp_ || !(temp_->next))
			return (-1);
		temp_ = temp_->next;
		j++;
	}


	current_ = temp_->next;
	temp_->next = current_->next;
	free(current_);

	return (1);
}

