#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: The pointer to the first element in the linked list
 *
 * Return: returns the head node’s data (n),
 * or zero if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_;
	int nom;

	if (!head || !*head)
		return (0);

	nom = (*head)->n;
	temp_ = (*head)->next;
	free(*head);
	*head = temp_;

	return (nom);
}

