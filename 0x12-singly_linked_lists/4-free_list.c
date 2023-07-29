#include <stdlib.h>
#include "lists.h"

/**
 * free_list - This func frees a list_t
 * @head: Pointer
 */
void free_list(list_t *head)
{
	list_t *tempr;

	while (head)
	{
		tempr = head->next;
		free(head->str);
		free(head);
		head = tempr;
	}
}
