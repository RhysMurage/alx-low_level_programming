#include "lists.h"

/**
 * print_dlistint- prints number of elements in a linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *temp = h;

	if (!h)
		return (0);
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		len++;
	}
	return (len);
}
