#include "main.h"

/**
 * This function draws a diagonal line on the terminal
 *@n: is the number of times the character should be printed
Return: void
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int es, bo;

		for (es = 0; es < n; es++);
	}
		{
		for (bo = 0; bo < es; bo++);
		}
			{
				_putchar(' ');
			}
		{
			_putchar('\\');
			_putchar('\n');
		}
}
