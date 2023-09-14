#include "lists.h"

/**
 * add_dnodeint_end - func adds a new node at the end
 * of a doubly dlistint_t list
 *
 * @head: the pointer
 * @n: the value
 * Return: return address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hp;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	hp = *head;

	if (hp != NULL)
	{
		while (hp->next != NULL)
			hp = hp->next;
		hp->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	new_node->prev = hp;

	return (new_node);
}
