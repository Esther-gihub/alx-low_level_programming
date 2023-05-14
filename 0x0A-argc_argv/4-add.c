#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
  *main - This program prints the addition of two positive numbers
  *@str: The array of strings in the program
  *@agrc: The number of commands in the program
  *@agrv: The array of commands in the program
  *Return: Always 0
  */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
	printf("0\n");

	return (0);
	}

	int sum = 0, e;

	for (e = 1; e < argc; e++)
	{
	char *numStr = argv[e];

	int d = 0;

	while (numStr[d] != '\0')
	{
		if (!isdigit(numStr[d]))
	{
		printf("Error\n");

		return (1);
	}

		d++;
	}

	int num = atoi(numStr);

	sum += num;
	}

	printf("%d\n", sum);

	return (0);
}

