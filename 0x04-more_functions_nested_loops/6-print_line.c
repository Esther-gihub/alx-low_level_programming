#include "main.h"

/**
 *This function draws a straight line in the terminal
 *@n:The number of times the character should be printed
 *Return: Always 0
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int es;

		for (es = 0; es < n; es++);
	}
		_putchar('_');
	{
		_putchar('\n');
	}
}
