#include "lists.h"

/**
 * sum_listint - Sum of all the data (n) of a listint_t linked list.
 * @head: Pointer to the first node in the listint_t list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int calc = 0;
	listint_t *temp_ = head;

	while (temp_)
	{
		calc += temp_->n;
		temp_ = temp_->next;
	}

	return (calc);
}
