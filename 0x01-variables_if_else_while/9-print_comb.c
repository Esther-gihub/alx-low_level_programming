#include <stdio.h>

/**
 * main - Entry point
 * Description: This programme prints all combinations of single digit numbers
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(',');
	}
	putchar('\n');
	return (0);
}

