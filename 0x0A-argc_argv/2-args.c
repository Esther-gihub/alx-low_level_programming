#include <stdio.h>
#include "main.h"

/**
  *main - This program prints all arguments to be received
  *@argc: The number of commands to be used
  *@argv: The array of arguments to be used
  *Return: Always 0
  */
int main(int argc, char *argv[])
{
	int e;

	for (e = 0; e < argc; e++)

	printf("%s\n", argv[e]);

	return (0);
}

