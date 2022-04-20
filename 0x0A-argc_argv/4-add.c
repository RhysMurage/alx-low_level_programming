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
	char *ptr = argv[counter];

	while (argc >= 2)
	{
		number = strtol(argv[counter], NULL, 10);
		/* check that ASCII Code are for integers only */
		if ((*ptr < 48) | (*ptr > 57))
		{
			printf("%s\n", error);
			return (0);
		}
		sum += number;
		++counter;
		--argc;
		ptr++;
	}
	printf("%ld\n", sum);
	return (0);
}
