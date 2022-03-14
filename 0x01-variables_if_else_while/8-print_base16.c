#include <stdio.h>

/**
 * main- Entry point
 *
 * Description:Prints base 16 numbers in lowercase
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int n;
	char m;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (m = 'a'; m <= 'f'; m++)
		putchar(m);
	putchar('\n');

	return (0);
}

