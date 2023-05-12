#include "main.h"
#include <stdio.h>

/**
  *_memset - This program fills memory with a constant byte
  *@b: The constant byte to be filled
  *@n: The bytes needed
  *@s: The memory area to be filled
  *Return: The pointer returns to memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}
	return (s);
}
