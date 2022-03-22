#include "main.h"

/**
 * print_rev- prints the string in reverse
 * @s: pointer parsed to the function
 */

void print_rev(char *s);

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
