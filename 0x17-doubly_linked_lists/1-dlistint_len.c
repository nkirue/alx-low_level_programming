#include "lists.h"

/**
 * dlistint_len - func returns the number of elements in
 *double linkedlist
 *
 * @h: The head pointer
 * Return: returns the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cnt = 0;


	if (h == NULL)
		return (cnt);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
