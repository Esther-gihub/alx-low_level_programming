#include <stdio.h>
#include "main.h"

/**
  *_puts_recursion - This program will output a string with a new line
  *@s: The string in question
  *Return: Always 0
  */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
	putchar('\n');
	}
	return;

	putchar(*s);

	_puts_recursion(1 + s);
}


