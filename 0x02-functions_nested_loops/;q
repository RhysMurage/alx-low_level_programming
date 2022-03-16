#include <stdio.h>

long add(long first, long second);

/**
 * main- Entry point of function
 *
 * Description: Returns the first 50 Fibonnaci numbers
 *
 * Return: Always (0) Success
 */

long main(void)
{
	long count = 0;
	long z;
	long x = 1;
	long y = 2;

	printf("%ld, %ld, ", x, y);

	while (count < 48)
	{
		if (count == 47)
		{
			z = add(x, y);
			printf("%ld", z);
			count++;
			x = y;
			y = z;
		}
		else
		{
			z = add(x, y);
			printf("%ld, ", z);
			count++;
			x = y;
			y = z;
		}
	}
	printf("\n");

	return (0);
}


/**
 * add- sums 2 integers
 * @first: First integer
 * @second: Second integer
 *
 * Return: The sum of 2 integers
 *
 */

long add(long first, long second)
{
	return (first + second);
}
