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
	int l, m, n = 0;

	for (l = 0; l < 10; l++)
	{
		for (m = l; m < 10; m++)
		{
			if (l != n)
			{
				putchar(l + '0');
				putchar(m + '0');
				if (l == 8 && m == 9)
				{
				}
				else
				{
					putchar(',');
					putchar(32);
				}
			}
		}
		n++;
	}
	putchar('\n');
	return (0);
}
