#include "main.h"

/**
  * _memcpy- copies memory area
  * @dest: pointer to a character
  * @src: pointer to a character
  * @n: integer n
  */

char *_memcpy(char *dest, char *src, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int area = 0;

	for (area = 0; area < n; ++area)
	{
		dest = src;
		src++;
		dest++;
	}
	
	return (dest);
}
