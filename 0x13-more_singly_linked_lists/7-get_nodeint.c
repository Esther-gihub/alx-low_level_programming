#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *get_nodeint_at_index - This will display the node at a point
 *index
 *@head: first node in the linked list
 *@index: index of the node to return
 *Return: The pointer to the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

