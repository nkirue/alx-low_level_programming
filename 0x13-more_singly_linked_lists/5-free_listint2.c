#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: The pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
        listint_t *temp_;

        if (head == NULL)
                return;

        while (*head)
        {
                temp_ = (*head)->next;
                free(*head);
                *head = temp_;
        }

        *head = NULL;
}
