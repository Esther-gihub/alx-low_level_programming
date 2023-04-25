#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *Description: This program  prints 10 times the alphabets in lowercase
 *Return - Always 0
 */

void print_alphabet_x10(void)
{
	char num, car;

	for (num = 0; num <= 10; num++)
	{
		for (car = 'a'; car <= 'z'; car++)
		{
			_putchar(car);
		}
		_putchar('\n');
	}
	return (0);
}


