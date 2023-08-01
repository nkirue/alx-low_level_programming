#include "lists.h"

/**
 * find_listint_loop - func that finds the loop in a linked list
 * @head: The pointer
 *
 * Return: The address of the node where the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ = head;
	listint_t *fast_ = head;

	if (!head)
		return (NULL);

	while (slow_ && fast_ && fast_->next)
	{
		fast_ = fast_->next->next;
		slow_ = slow_->next;
		if (fast_ == slow_)
		{
			slow_ = head;
			while (slow_ != fast_)
			{
				slow_ = slow_->next;
				fast_ = fast_->next;
			}
			return (fast_);
		}
	}

	return (NULL);
}




