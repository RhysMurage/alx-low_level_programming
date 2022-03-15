#include "main.h"

/**
 * print_alphabet_x10- prints ten times the alphabet in lowercase
 *
 * Return: Always (0) Success
 */

void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	int n;
	int m = 0;

	while (m < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar('\n');
		m++;
	}
	_putchar('\n');
}
