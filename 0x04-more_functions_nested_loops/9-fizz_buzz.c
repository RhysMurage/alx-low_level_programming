#include <stdio.h>

/**
 * main- Entry point
 * Description: prints 1 to 100, fizz for multiples of 3, buzz for multiples
 * of 5 and FizzBuzz for multiples of both
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}

	printf('\n');

	return (0);
}
