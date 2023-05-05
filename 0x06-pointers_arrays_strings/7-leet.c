#include "main.h"
#include <stdio.h>

/**
 * leet - This program changes vowels to numbers.
 * @s: The string to be analyzed
 *
 * Return: String with all vowels changed.
 */
char *leet(char *s)
{
	char b[] = "aeotlAEOTL";
	char c[] = "4307143071";
	int d = 0;
	int e;

	while (*(s + d) != '\0')
	{
		for (e = 0; e <= 9; e++)
		{
			if (*(s + d) == b[e])
			{
				*(s + d) = c[e];
			}
		}
		d++;
	}
	return (s);
}

