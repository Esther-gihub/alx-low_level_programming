#include <stdio.h>
#include "main.h"

/**
  *_print_rev_recursion - This program outputs a reversal string
  *@s: The reversed string
  *Return: Always 0
  */
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
	return;
	}

	_print_rev_recursion(1 + s);

	putchar(*s);
}

