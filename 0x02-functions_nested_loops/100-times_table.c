#include "main.h"

/**
 * print_times_table - this function prints the table of the int passed in
 * @q: this is the variable of the multiplication table
 */

void print_times_table(int q)
{
	if (q != 100)
	{
		int i = 0, k = 0;
		int m = q + 1;

		for (i = 0; i < m; i++)
		{
			_putchar('0');
			if (q > 0)
			{
				_putchar(44);
			}
			for (k = 1; k < m; k++)
			{
				int n = i * k;

				if (k != 0)
				{
					_putchar(' ');
				}
				if (n > 9)
				{
					_putchar(n > 99 ? n / 100 + '0' : ' ');
					_putchar(n > 99 ? (n - ((n / 100) * 100)) / 10 + '0' : (n / 10) + '0');
					_putchar(n > 99 ? (n - ((n / 100) * 100)) % 10 + '0' : (n % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(n + '0');
				}
				if (k != q)
				{
					_putchar(44);
				}
			}
			_putchar('\n');
		}
	}
}
