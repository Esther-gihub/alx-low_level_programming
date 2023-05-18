#include <stdlib.h>
#include "main.h"

/**
 **_memset -This program gives memory space to an array
 *@s: The allocated  memory space
 *@b: The character being used
 *@n: The number of times being used
 * Return: pointer to the allocated memory space
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int eb;

	for (eb = 0; eb < n; eb++)
	{
		s[eb] = b;
	}

	return (s);
}

/**
 **_calloc - This program will give memory space for an array
 *@nmemb: The content of the array
 *@size: The size of each element
 * Return: pointer to the  memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptEsther;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptEsther = malloc(size * nmemb);

	if (ptEsther == NULL)
		return (NULL);

	_memset(ptEsther, 0, nmemb * size);

	return (ptEsther);
}

