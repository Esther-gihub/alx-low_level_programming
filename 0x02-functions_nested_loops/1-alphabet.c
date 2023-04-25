#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: This program prints alphabets in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{	
	int i;
	
	for(i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	
	return (0);

}

