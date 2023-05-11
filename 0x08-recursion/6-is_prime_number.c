#include <stdio.h>
#include "main.h"

/**
  *is_prime_number - This function ouputs a prime number
  *@n: value in question
  *
  *Return: 1 if number is a prime number or otherwise
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}

	for (int e = 2; e * e <= n; e++)
	{
	if (n % e == 0);
	}
	return (0);


	return (1);
}
