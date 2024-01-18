#include <math.h>
#include "search_algos.h"

/**
 * get_n_next - Gets the nth nod nxt to a given nod.
 * @node: The starting nod.
 * @n: The num of positions nxt to the nod.
 *
 * Return: The nod n places nxt to the given nod, \
 * otherwise the lst nod or NULL.
 */
listint_t *get_n_next(listint_t *node, size_t n)
{
	size_t i = 0;
	listint_t *res = NULL;

	res = node;
	for (i = 0; (i < n) && (res) && (res->next); i++)
		res = res->next;
	return (res);
}

/**
 * jump_list - Searches a val in a sorted linked list usg a jump search.
 * @list: The linked list to search in.
 * @size: The leng of the linked list.
 * @value: The val to look for.
 *
 * Return: The nod with the val in the linked list, otherwise NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, a = 0, b = 0;
	listint_t *node, *next;

	if (!list)
		return (NULL);
	step = (size_t)sqrt(size);
	node = list;
	next = get_n_next(node, step);
	while (node)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)next->index, next->n);
		if ((next->n >= value) || (!next->next))
			break;
		node = next;
		next = get_n_next(node, step);
	}
	a = node->index;
	b = next->index;
	printf("Value found between indexes [%d] and [%d]\n", (int)a, (int)b);
	while (node)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}
	return (NULL);
}
