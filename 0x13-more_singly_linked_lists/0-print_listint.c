#include "lists.h"

/**
 *print_listint - This will output members of a list
 *@h: The character in question
 *Return: The nodes available
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

