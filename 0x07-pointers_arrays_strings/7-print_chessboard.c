#include <stdio.h>
#include "main.h"

/**
  *print_chessboard - This program prints the chessboard
  *@a: array
  *Return: Always 0
  */
void print_chessboard(char (*a)[8])
{
	int k, l;

	for (k = 0; k < 8; ++k)
	{
		for (l = 0; l < 8; ++l)
		{
			_putchar(a[k][l]);
		}
		_putchar('\n');

	}

}
