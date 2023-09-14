#include "lists.h"

/**
 * add_dnodeint - func adds a new node at the beginning
 * of a doubly dlistint_t list
 *
 * @head: the head pointer
 * @n: the value
 * Return: this returns address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *hp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	hp = *head;

	if (hp != NULL)
	{
		while (hp->prev != NULL)
			hp = hp->prev;
	}

	new_node->next = hp;

	if (hp != NULL)
		hp->prev = new_node;

	*head = new_node;

	return (new_node);
}
