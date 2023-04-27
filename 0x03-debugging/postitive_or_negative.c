#include "main.h"

/**
 * main - Entry point
 * Description: Determine if number is positive, negative or zero
 *Return: Always 0
 */
void positive _or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else 
	{
		printf("%d is %s\n", i, "zero");
		return (0);
}
