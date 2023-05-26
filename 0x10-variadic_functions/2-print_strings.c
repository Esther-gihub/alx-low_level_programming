#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - This program outputs a string, followed by a new line.
 *@separator: The string to be printed.
 *@n: The number of strings passed to the function.
 *@...: The variable number in question.
 *Description: If separator is NULL, it is not printed.
 *If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strEsther;
	char *str;
	unsigned int index;

	va_start(strEsther, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strEsther, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strEsther);
}

