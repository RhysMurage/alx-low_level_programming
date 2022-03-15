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
	int n, counter, numbervariants, asciivalue = 0;

	counter = 0;
	numbervariants = 48;

	for (n = 0; n < 28; n++)
	{
		asciivalue = 0;
		switch (counter)
		{
			case 0:
				asciivalue = numbervariants;
				numbervariants++;
				break;
			case 1:
				asciivalue = 44;
				break;
			case 2:
				asciivalue = 32;
				break;
			default:
				break;
		}
		counter++;
		if (counter > 2)
			counter = 0;
		putchar(asciivalue);
	}
	putchar('\n');

	return (0);
}
