#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints the sign of a number
 * 
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
		
}	
