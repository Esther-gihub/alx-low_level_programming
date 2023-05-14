#include <stdio.h>
#include "main.h"

/**
  *_atoi - This program converts a string to an integer
  *@s: The string to be converted
  *Return: The results after the conversion
  */
int _atoi(char *s)
{
	int e, d, g, len, f, h;

	e = 0, d = 0, g = 0, len = 0, f = 0, h = 0;

	while (s[len] != '\0')
		len++;

	while (e < len && f == 0)

	{
		if (s[e] == '-')
			++d;

		if (s[e] >= '0' && s[e] <= '9')

		{
			h = s[e] - '0';

			if (d % 2)
				h = -h;

			g = g * 10 + h;
			f = 1;

			if (s[e + 1] < '0' || s[e + 1] > '9')

				break;

			f = 0;
		}

		e++;
	}

	if (f == 0)

		return (0);

	return (0);
}

/**
 *main - multiplies two numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");

		return (1);
	}

	num1 = _atoi(argv[1]), num2 = _atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);

}

