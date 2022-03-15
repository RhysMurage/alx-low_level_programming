#include "main.h"

/**
 * jack_bauer- print every minute of the day of Jack Bauer, starting from 00:00
 *
 */

void jack_bauer(void);

void jack_bauer(void)
{
	int i = 0, k = 0, h = 0;

	for (i = 0; i < 1440; i++)
	{
	if (h < 10)
	{
		_putchar(0 + '0');
		_putchar(h + '0');
	}
	else
	{
		int firstdigit = h / 10;
		int secondigit = h % 10;

		_putchar(firstdigit + '0');
		_putchar(secondigit + '0');
	}
	_putchar(':');
	if (k < 10)
	{
		_putchar(0 + '0');
		_putchar(k + '0');
	}
	else
	{
		int firstdigit = k / 10;
		int secondigit = k % 10;

		_putchar(firstdigit + '0');
		_putchar(secondigit + '0');
	}
	k++;
	if (k > 59)
	{
		k = 0;
		h++;
	}
	_putchar('\n');
	}
}


