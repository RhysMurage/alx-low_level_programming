#include <stdio.h>

int add(int first, int second);

/**
 * main- Entry point of function
 *
 * Description: Returns the sum of even-valued terms in a Fibonacci sequence
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int z;
	int sum = 0;
	int u;
	int v;
	int x = 1;
	int y = 2;

	while (z < 4000000)
	{
		u = y;
		v = z;

		z = add(x, y);
		if ((x % 2 == 0) & (x != u))
			sum += x;
		else
			sum += 0;
		if ((y % 2 == 0) & (y != v))
			sum += y;
		else
			sum += 0;
		if (z % 2 == 0)
			sum += z;
		else
			sum += 0;

		x = y;
		y = z;
	}
}


/**
 * add- sums 2 even integers
 * @first: First integer
 * @second: Second integer
 *
 * Return: The sum of 2 even integers
 *
 */

int add(int first, int second)
{
	return (first + second);
}
