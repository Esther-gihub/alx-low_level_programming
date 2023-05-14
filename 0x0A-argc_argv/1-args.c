#include <stdio.h>
#include "main.h"

/**
  *main - This program outputs the number of arguments passed
  *@argc: The number of arguments to be passed
  *@argv: The array of arguments in the program
  *Return: Always 0
  */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
