#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: The Pointer
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nom = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nom++;
		h = h->next;
	}

	return (nom);
}

