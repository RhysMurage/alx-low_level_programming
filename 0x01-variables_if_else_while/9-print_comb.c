#include <stdio.h>

/**
 * main- Entry point
 *
 * Description- Prints all possible combinations of single-digit numbers
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int n;
	int m;

	for (n = '0'; n <= '9';)\
	{
		for (m = '0'; m <= '9';)
		{
		       putchar(n);
		       putchar(m);
		       putchar(',');
		       m++;
		}
		n++;
		putchar(n);
	putchar('\n');
	}
return (0);	

}
