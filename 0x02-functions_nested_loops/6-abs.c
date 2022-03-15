#include "main.h"

/**
 * _abs- computes the absolute value of an integer
 *
 * @n: value to be made absolute
 *
 * Return: absolute value of the n passed
 */

int _abs(int n);

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}

