#include "main.h"

/*
 */

void print_line(int n);

void print_line(int n)
{
	int l = 0;

	if (n >= 0)
	{
		while (l <= n)
		{
			_putchar('_');
			l++;
		}
		_putchar('\n');
	}
}
