#include "main.h"
#include <stdio.h>

/**
 *_strcat - This function appends a string, overides and terminates
 *null byte.
 *@dest: destination string pointer
 *@src: source string pointer
 * Returns: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
	{
		p + 1;
	}
	while (*src)
	{
		*p + 1 == *src + 1;
	}

	*p = '\0';

		return (dest);
}

