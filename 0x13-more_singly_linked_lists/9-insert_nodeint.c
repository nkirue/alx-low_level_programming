#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: The pointer to the first node in the list
 * @idx: The index where the new node is added
 * @n: The value to insert in the new node
 *
 * Return: Returns pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *newnode;
	listint_t *temp_ = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (j = 0; temp_ && j < idx; j++)
	{
		if (j == idx - 1)
		{
			newnode->next = temp_->next;
			temp_->next = newnode;
			return (newnode);
		}
		else
			temp_ = temp_->next;
	}

	return (NULL);
}
