#include "main.h"

/**
 * _strlen- function that determines the length of a string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s);

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i);
}
