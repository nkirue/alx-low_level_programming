#include "lists.h"

/**
 * print_dlistint - this func prints all the elements of a
 * doubly list
 *
 * @h: head the pointer
 * Return: this return the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int cnt = 0;


	if (h == NULL)
		return (cnt);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		cnt++;
		h = h->next;
	}

	return (cnt);
}
