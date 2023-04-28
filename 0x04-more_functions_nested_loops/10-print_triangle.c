#include "main.h"

/**
 *This function prints the size of a triangle
 *followed by a new line
 *@a: is the size of the triangle
 *@#: prints the triangle
*/
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int e, o;

	for (e = 1; e <= size; e++)
	}

	{
	for (o = 1; o <= size; o++)
	}
		_putchar(' ');
	{
	for (o = 1; o <= e; o++)

		_putchar('#');
	}
		_putchar('\n');
}
