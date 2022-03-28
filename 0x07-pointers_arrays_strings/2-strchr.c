#include "main.h"

/**
  * _strchr- locates the character in a string
  *@s: pointer to a character
  *@c: character
  *Return: pointer to the first occurrence of character c, else NULL
  */

char *_strchr(char *s, char c);

char *_strchr(char *s, char c)
{
	char *ptr;

	int posn = 0;

	while (s[posn] != c)
		posn++;

	ptr = &s[posn];

	return (ptr);
}
