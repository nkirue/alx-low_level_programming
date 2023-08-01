#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h:Thei pointer
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t leng = 0;
	int dif;
	listint_t *temp_;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temp_ = (*h)->next;
			free(*h);
			*h = temp_;
			leng++;
		}
		else
		{
			free(*h);
			*h = NULL;
			leng++;
			break;
		}
	}

	*h = NULL;

	return (leng);
}
