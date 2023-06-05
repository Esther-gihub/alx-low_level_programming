#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_listint - This will free an element in the list
 *@head: listint_t list to be freed
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

