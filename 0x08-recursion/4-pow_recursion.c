#include "main.h"

/**
  * _pow_recursion- calculates the value of x raised to power y
  * @x: first integer, the base
  * @y: second integer, the exponent
  *
  * Return: power of a number; -1 if y is less than 0
  */

int _pow_recursion(int x, int y);

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, (y - 1)));
}
