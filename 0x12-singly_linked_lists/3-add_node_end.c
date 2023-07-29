#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - This function adds a new node at the end of a list_t 
 * @head: The double double pointer to the list_t list
 * @str: The string to put in the new node
 *
 * Return: This Returns the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}

