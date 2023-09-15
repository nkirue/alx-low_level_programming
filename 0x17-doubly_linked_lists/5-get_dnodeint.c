#include "lists.h"

/**
 * get_dnodeint_at_index - func returns the
 * nth node of a dlistint_t linked list
 * @head:the  pointer
 * @index: the index of the node
 * Return: returns the nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int siz = 0;
	dlistint_t *tmp_n;

	if (head == NULL)
	return (NULL);

	tmp_n = head;
	while (tmp_n)
	{
	if (index == siz)
	return (tmp_n);
	siz++;
	tmp_n = tmp_n->next;
	}
	return (NULL);
}
