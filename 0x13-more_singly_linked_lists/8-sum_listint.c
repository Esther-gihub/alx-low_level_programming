#include "lists.h"

/**
 *sum_listint - This will sum all the members in the list
 *@head: The first node in the list
 *Return: The sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

