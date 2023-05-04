#include "main.h"
#include <stdio.h>

/**
 *_strncpy - This function copies a string
 *@dest: destination string pointer
 *@src: source string pointer
 *@n: number of character to copy
 *Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	for ( ; b < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
