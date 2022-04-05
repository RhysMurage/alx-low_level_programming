#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _strdup- returns a pointer to a new memory space containing a string copy
  * @str: copy of str
  *
  * Return: pointer to new space; NULL if str is NULL
  */

char *_strdup(char *str)
{
	char *ptr;
	int len = 0;
	int i = 0;
	int j = 0;

	/* length of string */
	for (i = 0; str[i] != '\0'; i++)
		len = i;

	ptr = malloc((len) * sizeof(char));

	/* check return value of malloc */

	if (str == NULL)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		ptr[j] = str[j];
	return (ptr);
	free(ptr);
}
