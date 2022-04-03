#include "main.h"

/**
  * _strlen_recursion- calculates the length of a string
  * @s: character pointer
  *
  * Description: calculates the length of a string recursively
  * Return: length of string
  */

int _strlen_recursion(char *s);

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
		len = 1 + _strlen_recursion(s + 1);

	return (len);
}
