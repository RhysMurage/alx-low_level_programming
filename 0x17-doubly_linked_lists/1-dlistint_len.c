#include "lists.h"

/**
 * dlistint_len- prints number of elements in a linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *temp = h;

	if (!h)
		return (0);
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
