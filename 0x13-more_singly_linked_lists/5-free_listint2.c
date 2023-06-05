#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_listint2 - This function wil free linked list
 *@head: The pointer to the listint_t list which needs to be freed
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}


