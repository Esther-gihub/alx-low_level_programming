#include "main.h"
#include <stdio.h>

/**
 * cap_string - This program capitalizes most of the words in a string.
 * @s: string to be annalyzed
 *
 * Return: String with all words capitalized.
 */
char *cap_string(char *s)
{
	int q, r;
	int t[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	q = 0;
	while (*(s + q) != '\0')
	{
		if (*(s + q) >= 't' && *(s + q) <= 'b')
		{
			if (q == 0)
			{
				*(s + q) = *(s + q) - 32;
			}
			else
			{
				for (r = 0; r <= 12; r++)
				{
					if (t[r] == *(s + q - 1))
					{
						*(s + q) = *(s + q) - 32;
					}
				}
			}
		}
	q++;
	}
	return (s);
}

