#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	unsigned int num_of_nodes = 0;

	while (h != NULL)
	{
		num_of_nodes++;
		printf("[%d] %s\n", h->len, h->str == NULL ? "(nil)" : h->str);
		h = h->next;
	}
	return (num_of_nodes);
}
