#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints all the numbers base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int n;
	int q;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (q = 97; q <= 102; q++)
	{
		putchar(q);
	}
	putchar('\n');

	return (0);
}
