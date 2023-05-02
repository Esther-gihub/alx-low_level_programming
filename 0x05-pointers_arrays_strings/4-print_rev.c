#include "main.h"

/**
 * print_rev - This function will print a string
 * in reverse followed by a new line
 * @s: string reference pointer
 * Return: 0
 */
void print_rev(char *s)
{
	int begin = 0;

	while (s[begin])
		++begin;
	while (--begin)
		_putchar(s[begin]);
	_putchar('\n');
}
