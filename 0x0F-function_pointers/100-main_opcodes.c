#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints its own opcodes
 *@argc: number of arguments
 *@argv: array of arguments
 *
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, es;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (es = 0; es < bytes; es++)
	{
		if (es == bytes - 1)
		{
			printf("%02hhx\n", arr[es]);
			break;
		}
		printf("%02hhx ", arr[es]);
	}
	return (0);
}


