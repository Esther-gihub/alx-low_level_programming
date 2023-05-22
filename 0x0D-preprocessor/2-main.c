#include <stdio.h>


/**
  *main: This program will print the name of the file it was compiled from
  *followed by a new line.
  *
  *Return: ALways 0
  */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
