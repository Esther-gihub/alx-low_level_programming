#include "main.h"

/**
 *_puts - This function prints a sting followed
 *by a new line
 *@str: pointer to the string
 *Return: A string and a new line
*/
void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		++a;
	}
	_putchar ('\n');
}
