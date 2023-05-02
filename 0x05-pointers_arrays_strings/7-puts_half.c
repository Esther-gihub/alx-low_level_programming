#include "main.h"

/**
 * puts_half - This function prints half a string
 * followed by a new line
 * @str: This is the input string
 * Return: 0
 */
void puts_half(char *str)
{
	int full_string, half_string;
	full str = 0;
	while (str[full_str] != '\0')
		++full_string;

	half_string = full_string / 2
	
	if (full_string % 2 == 1)
		half_string++

	while(half_string < full_string)
	{
		_putchar(str[half_string]);
		half_string++;
	}
	_putchar('\n');
}

