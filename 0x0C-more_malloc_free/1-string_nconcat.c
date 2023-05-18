#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **string_nconcat - This program will concatenate a number of unspecified
 *bytes of string 1 to string 2
 *@s1: The string to  be used
 *@s2: The string to be used
 *@n: The number of bytes being used in the program
 * Return: pointer to the string concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int eb = 0, ow = 0, ebo1 = 0, ebo2 = 0;

	while (s1 && s1[ebo1])
		ebo1++;
	while (s2 && s2[ebo2])
		ebo2++;

	if (n < ebo2)
		s = malloc(sizeof(char) * (ebo1 + n + 1));
	else
		s = malloc(sizeof(char) * (ebo1 + ebo2 + 1));

	if (!s)
		return (NULL);

	while (eb < ebo1)
	{
		s[eb] = s1[eb];
		eb++;
	}

	while (n < ebo2 && eb < (ebo1 + n))
		s[eb++] = s2[ow++];

	while (n >= ebo2 && eb < (ebo1 + ebo2))
		s[eb++] = s2[ow++];

	s[eb] = '\0';

	return (s);
}

