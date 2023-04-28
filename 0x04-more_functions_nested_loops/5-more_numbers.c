#include "main.h"

/**
 * more numbers - This will print numbers from 0 to 14, 10 times
 * Return: void
 */
void more_numbers(void)
{
	int es, bo;

	for (es = 0; es <= 10; es++)
	{
		for (bo = 0; bo <= 14; bo++)
		{
			if (bo >= 10)
			{
				_putchar('1');
				_putchar(bo % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
