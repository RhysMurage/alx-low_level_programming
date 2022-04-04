#include <stdio.h>
#include <stdlib.h>

/**
  * main- prints number of arguments passed into it
  * @argc: number of arguments passed to the program
  * @argv: array of strings of arguments
  *
  * Return: Always 0;
  */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc);
	return (0);
}
