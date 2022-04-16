#include "main.h"

/**
  *_memcpy- Copies memory area
  *@dest: pointer to an array
  *@src: pointer to an array
  *@n: integer n
  *Return: a pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int area = 0;
	char *ptr = dest;

	for (area = 0; area < n; ++area)
	{
		dest[area] = src[area];

	}

	return (ptr);
}
