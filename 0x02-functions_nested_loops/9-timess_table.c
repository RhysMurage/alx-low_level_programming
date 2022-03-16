#include "main.h"

/**
 * times_table- prints 9 times table
 *
 */

void times_table(void);

void times_table(void)
{
	int start;
	int number;
	int product;

	for (start = 0; start <= 9; start++)
		{
			for (number = 0; number <= 9; number++)
			{
				product = start * number;

				if ((number == 9) & (product < 9))
				{
					_putchar(product + '0');
					_putchar(',');
					_putchar(' ');
				}

				else if ((number == 9) & (product > 9))
				{
					int initial = product / 10;
					int final = product % 10;

					_putchar(initial + '0');
					_putchar(final + '0');
					_putchar(' ');
				}

				else if ((number != 9) & (product < 9))
				{
					_putchar(product + '0');
					_putchar(',');
					_putchar(' ');
				}
				else if ((number != 9) & (product >= 10))
				{
					int first = product / 10;
					int second = product % 10;

					_putchar(first + '0');
					_putchar(second + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
}
