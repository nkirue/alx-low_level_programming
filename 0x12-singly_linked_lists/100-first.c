lude <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *  * add_node - Function that add a new node at the beginning of a list_t list
 *   * @head: The head double pointer to the list_t list
 *    * @str: New string to add in the node
 *     *
 *      * Return: Returns the address of the new element, or NULL if it fails
 *       */
list_t *add_node(list_t **head, const char *str)
{
		list_t *newnode;
			unsigned int lenght = 0;

				while (str[lenght])
							lenght++;

					newnode = malloc(sizeof(list_t));
						if (!newnode)
									return (NULL);

							newnode->str = strdup(str);
								newnode->lenght = lenght;
									newnode->next = (*head);
										(*head) = newnode;

											return (*head);
}


