#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *alloc_grid - This program returns a pointer to a two dimensional
  *integer arrays
  *@width: The input to be made
  *@height: The input to be made
  *Return: Pointer should return two dimensional array
  */
int **alloc_grid(int width, int height)
{
	int **Esther, b, y;

	if (width <= 0 || height <= 0)

		return (NULL);

	Esther = malloc(sizeof(int *) * height);

	if (Esther == NULL)

		return (NULL);

	for (b = 0; b < height; b++)
	{
		Esther[b] = malloc(sizeof(int) * width);

		if (Esther[b] == NULL)
		{
			for (; b >= 0; b--)

				free(Esther[b]);

			free(Esther);

			return (NULL);
		}

	}

	for (b = 0; b < height; b++)
	{
		for (y = 0; y < width; y++)

			Esther[b][y] = 0;
	}

	return (Esther);

}

