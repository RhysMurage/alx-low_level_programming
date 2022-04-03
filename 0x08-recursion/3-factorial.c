#include "main.h"

/**
  * factorial- calculates n factorial
  * @n: integer value to compute the factorial
  *
  * Return: factorial of a number; -1 otherwise
  */

int factorial(int n);

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
