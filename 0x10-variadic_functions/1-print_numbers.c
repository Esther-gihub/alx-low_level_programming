#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - This program prints numbers, followed by a new line.
 *@separator: The string to be printed between numbers.
 *@n: The number of integers passed to the function.
 *@...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list NUMBERS;
	unsigned int es;

	va_start(NUMBERS, n);

	for (es = 0; es < n; es++)
	{
		printf("%d", va_arg(NUMBERS, int));

		if (es != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(NUMBERS);
}

