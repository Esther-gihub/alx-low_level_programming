#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  **malloc_checked - This program shares memory using malloc
  *@b: The allocated number of bytes
  *Return: Pointer to the memory allocated
  */
void *malloc_checked(unsigned int b)
{
	void *ptEsther = malloc(b);

	if (ptEsther == NULL)
	{
		exit(98);
	}
	return (ptEsther);
}

