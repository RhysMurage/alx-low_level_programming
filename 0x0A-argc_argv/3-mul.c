#include <stdio.h>
#include <stdlib.h>

/**
  * main- returns the product of 2 numbers
  * @argc: number of arguments passed
  * @argv: pointer to array of pointers of strings
  *
  * Return: Always 0; 1 otherwise
  */

int main(int argc, char *argv[])
{
	char error[] = "Error";
	long product;
	long firstNum;
	long secondNum;

	if ((argc > 1) & (argc < 3))
	{
		firstNum = strtol(argv[1], NULL, 10);
		secondNum = strtol(argv[2], NULL, 10);
		product = firstNum * secondNum;
		printf("%ld\n", product);
		return (0);
	}
	else
	{
		printf("%s\n", error);
		return (1);
	}
}
