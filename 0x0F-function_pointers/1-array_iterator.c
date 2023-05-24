#include <stdio.h>
#include "function_pointers.h"

/**
  *array_iterator - This function gives parameters on the elements of an array
  *@size: This represents the array size
  *@array: The array being used
  *@action: This is the pointer to the function in question
  *Return: Always 0
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int es;

	if (array == NULL || action == NULL)
		return;

	for (es = 0; es < size; es++)
	{
		action(array[es]);
	}
}
