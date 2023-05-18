#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  **array_range - This program will create an array of integers
  *@min: The values to be used
  *@max: The values to be used
  *Return: The pointer to the new array
  */
int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);
	}

	int size = (max - min) + 1;
	int *Esther = malloc(size * sizeof(int));

	if (Esther == NULL)
	{
		return (NULL);
	}

	int eb;

	for (eb = 0; min <= max; eb++)
	{
		Esther[eb] = min + eb;
	}

	return (Esther);
}

