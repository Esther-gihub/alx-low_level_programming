#include <stdio.h>
#include "main.h"

/**
  *_strlen_recursion - This program outputs the length of a string
  *@s: string length
  *Return: string length
  */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
	return (0);
	}
	return (1) + (_strlen_recursion(1 + s));
}

