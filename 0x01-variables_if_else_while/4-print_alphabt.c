#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: prints alphabet excluding q and e in lowercase
 *
 * Return: Always (0) Success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch == 'e')
			continue;
		else if (ch == 'q')
			continue;
		else
			putchar(ch);
	putchar('\n');

	return (0);
}
