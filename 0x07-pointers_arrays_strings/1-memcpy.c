#include "main.h"
#include <stdio.h>

/**
  *_memcpy - This program copies memory area
  *@n : The needed bytes
  *@src: The initial memory area
  *@dest: The new memory area
  *Return: pointer to @dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

