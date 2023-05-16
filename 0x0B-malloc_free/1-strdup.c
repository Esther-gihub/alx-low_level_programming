#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{

	char *ptEsther;
	int o = 0, r = 0;

	if (str == NULL)
		return (NULL);

	while (str[o] != '\0')

		o++;

	ptEsther = malloc(sizeof(char) * (o + 1));

	if (ptEsther == NULL)

		return (NULL);

	for (r = 0; str[r]; r++)

		ptEsther[r] = str[r];

	return (ptEsther);

}

