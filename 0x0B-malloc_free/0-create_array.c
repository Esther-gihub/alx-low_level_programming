#include "main.h"
#include <stdlib.h>

/**
  *create_array - This program creates an array of characters
  *@size: size of array
  *@c: The character to assign
  *Return: pointer to the array or otherwise
  */
char *create_array(unsigned int size, char c)
{
	char *ptEsther;
	unsigned int o;

	ptEsther = malloc(size * sizeof(char));

	for (o = 0; o < size; o++)

	ptEsther[o] = c;

	return (ptEsther);
}
