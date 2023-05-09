#include <stdio.h>
#include "main.h"

/**
  *set_string - This program sets the value of a pointer to a character
  *@s: pointer being used
  *@to: character pointer
  *Return: void
  */
void set_string(char **s, char *to)
{
	*s = to;

}
