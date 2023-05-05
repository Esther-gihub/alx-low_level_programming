#include "main.h"
#include <stdio.h>

/**
 *_strcmp - This function compares two strings
 *@s1: pointer to first string
 *@s2: pointer to second string
 *Return: value less than 0 if string is less than the other
 *value greater than 0 if string is greater than the other and 0
 * if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
	return (*s1 - *s2);
	}
}

