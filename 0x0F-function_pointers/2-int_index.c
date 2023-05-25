#include "function_pointers.h"
#include <stdio.h>


/**
 *int_index - This program displays an integer after comparison
 *@array: This is the arrary in question
 *@size: This size contains contents of the array
 *@cmp: The compared pointer function
 *Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int es;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (es = 0; es < size; es++)
	{
		if (cmp(array[es]))
			return (es);
	}
	return (-1);
}

