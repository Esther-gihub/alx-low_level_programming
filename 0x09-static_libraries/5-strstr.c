#include <stdio.h>
#include "main.h"

/**
  *_strstr - This program locates a substring
  *@string: The first occurence of the substring
  *@haystack: The string being used
  *Return: It returns to the initial pointer otherwise null if substring is
  *not found
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}

