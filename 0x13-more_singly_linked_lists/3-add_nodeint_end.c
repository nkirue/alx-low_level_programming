#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a listint_t list
 * @head: The pointer to the first node
 * @n: data to insert in the new node
 *
 * Return: Returns pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp_ = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp_->next)
		temp_ = temp_->next;

	temp_->next = newnode;

	return (newnode);
}


