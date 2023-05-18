#include <stdlib.h>
#include "main.h"
#include <stdlib.h>

/**
 **_realloc - This program will reallocate a block of memory
 *@ptrEsther: This will point to the memory initially issued using malloc
 *@old_size: The pointer size of the memory issued
 *@new_size: The new size of the new memory issued
 *Return: The pointer to the new memory space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrEsther1;
	char *ptrEsther;
	unsigned int b;

	if (new_size == old_size)
		return(ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptrEsther1 = malloc(new_size);
	if (!ptrEsther1)
		return (NULL);

	ptrEsther1 = ptr;

	if (new_size < old_size)
	{
		for (b = 0; b < new_size; b++)
			ptrEsther1[b] = ptrEsther[b];
	}

	if (new_size > old_size)
	{
		for (b = 0; b < old_size; b++)
			ptrEsther1[b] = ptrEsther[b];
	}

	free(ptrEsther);
	return (ptrEsther1);
}

