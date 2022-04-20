#include <stdlib.h>
#include <stdio.h>

/**
  * main- adds positive numbers
  * @argc: number of arguments
  * @argv: pointer to an array of arguments
  *
  * Return: always 0: 1 otherwise
  */

int main(int argc, char *argv[])
{
	int counter = 1;
	long sum = 0;
	long number = 0;
	char error[] = "Error";

	while (argc >= 2)
	{
		number = strtol(argv[counter], NULL, 10);
		if (number == 0)
		{
			printf("%s\n", error);
			return (0);
		}
		sum += number;
		++counter;
		--argc;
	}
	printf("%ld\n", sum);
	return (0);
}
