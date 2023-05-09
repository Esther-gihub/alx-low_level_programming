#include <stdio.h>
#include "main.h"

/**
  *print_diagsums - This program prints the sum of the square matrix of
  *integers
  *@a: The input to be made
  *@size: The input to be made
  *Return: Always 0
  */
void print_diagsums(int *a, int size)
{
	int car1, car2, z;

	car1 = 0;
	car2 = 0;

	for (z = 0; z < size; z++)
	{
		car1 = car1 + a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
		car2 += a[z * size + (size - z - 1)];
	}
	printf("%d, %d\n", car1, car2);
}

