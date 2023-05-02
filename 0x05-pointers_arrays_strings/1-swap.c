#include "main.h"

/**
 *swap_int - This function swaps the values of two integers
 *
 *@a: swaps and holds the value of b
 *@b: swaps and holds the value of a
 *Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

