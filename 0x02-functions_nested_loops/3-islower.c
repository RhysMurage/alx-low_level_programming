#include "main.h"

/**
 * _islower- checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */

int _islower(int c);

int _islower(int c)
{
	if ((c < 'a') | (c > 'z'))
		return (0);
	else
		return (1);
}
