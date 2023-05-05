#include "main.h"
#include <stdio.h>

/**
*rot13 -This program encodes a string using rot13
*@s: string
*
*Return: encoded string
*/

char *rot13(char *s)
{
	int n, o;
	char *letters1 = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char *letters2 = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (n = 0; s[n] != '\0'; n++)
	{
		for (o = 0; o < 52; o++)
		{
			if (s[n] == letters1[o])
			{
				s[n] = letters2[o];
				break;
			}
		}
	}
	return (s);
}

