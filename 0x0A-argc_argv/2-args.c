#include <stdio.h>
#include <stdlib.h>

/**
  * main- prints all arguments it receives
  * @argc: number ofarguments passed
  * @argv: string of arguments
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int counter;

	if (argc >= 1)
	{
		for (counter = 0; counter < argc; counter++)
			printf("%s\n", argv[counter]);
	}
	return (0);
}
