#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - This function will output the sum of all the paramters.
 *@n: The number of paramters in the program.
 *@...: The variable number in question of.
 *Return: If n == 0 - 0
 *Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list Esther;
	unsigned int es, sum = 0;

	va_start(Esther, n);

	for (es = 0; es < n; es++)
		sum += va_arg(Esther, int);

	va_end(Esther);

	return (sum);
}

