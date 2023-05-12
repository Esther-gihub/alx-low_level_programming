#include "main.h"
#include <stdio.h>

/**
  *_strchr - This programwill locate a character in the string
  *@c: It returns the pointer to the first occurence of a character
  *@s: The string being used
  *Return: null if the character is not found or otherwise
  */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

