#include "lists.h"

/**
 * listint_len - Func returns the number of elements in a listint_t
 * @h:The pointer
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nom = 0;

	while (h)
	{
		nom++;
		h = h->next;
	}

	return (nom);
}

