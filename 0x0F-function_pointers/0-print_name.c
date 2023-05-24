#include <stdio.h>
#include "function_pointers.h"

/**
  *print_name - This program will print a name to the terminal
  *@name: The name to be printed
  *@f: The pointer function being used
  *Return: Always 0
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
