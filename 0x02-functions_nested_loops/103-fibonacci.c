#include <stdio.h>

long add(long first, long second);

/**
 * main- Entry point of function
 *
 * Description: Returns the sum of even-valued terms in a Fibonacci sequence
 *
 * Return: Always (0) Success
 */

int main(void)
{
	long z;
	long modulo_x;
	long modulo_y;
	long modulo_z;
	long sum = 0;
	long x = 1;
	long y = 2;

	while (z <= 4000000)
	{
		z = add(x, y);
		modulo_x = x % 2;
		modulo_y = y % 2;
		modulo_z = z % 2;

		switch (modulo_x)
		{
			case 0:
				sum = sum + x;
				break;
			default:
				sum = sum + 0;
		}

		switch (modulo_y)
		{
			case 0:
				sum = sum + y;
				break;
			default:
				sum = sum + 0;
		}

		switch (modulo_z)
		{
			case 0:
				sum = sum + z;
				break;
			default:
				sum = sum + 0;
		}


		x = y;
		y = z;

	}

	printf("%ld\n", sum);

	return (0);
}


/**
 * add- sums 2 even integers
 * @first: First integer
 * @second: Second integer
 *
 * Return: The sum of 2 even integers
 *
 */

long add(long first, long second)
{
	return (first + second);
}
