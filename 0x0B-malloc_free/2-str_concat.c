#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *str_concat - THis program concatenates two strings
  *@s1: First input to concatenate
  *@s2: Second input to concatenate
  *Return: The result of s1 and s2
  */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_t len_s1 = strlen(s1);
	size_t len_s2 = strlen(s2);

	char *result = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (result == NULL)
	{

		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}

