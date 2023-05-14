#include <stdio.h>
#include "main.h"

/**
 *main - This program outputs the name of the program
 *@argc: The number of arguments to be made
 *@argv: The array of arguments in the program
 *
 *Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", *argv);



	return (0);
}

