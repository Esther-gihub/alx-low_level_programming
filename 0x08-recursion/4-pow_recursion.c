#include <stdio.h>
#include "main.h"

/**
  *_pow_recursion - This program returns the exponential value
  *@y: value being compared
  *@x: value bein in question
  *Return: result of the power
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
		return (x *_pow_recursion(x, y - 1));
}
