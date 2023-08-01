#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: The pointer
 * @n: The data to insert in that new node
 *
 * Return: Returns pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
