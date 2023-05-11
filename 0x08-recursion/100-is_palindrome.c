#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - A function that outputs a palindrome string
 * @s: reversal string
 *
 * Return: 1 if palindrome or otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (s, 0, _strlen_recursion(s));
}

/**
 * _strlen_recursion - A function to return the length of a string
 * @s: The string in question
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

