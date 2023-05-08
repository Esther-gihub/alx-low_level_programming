#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - This program searches a string for a set of bytes.
 * @s: It locates the first occurence in the string
 * @accept: input
 * Return: The pointer to @s if it matches or null if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}

