#include "lists.h"

/**
 * list_len - Function that prints all the elesements of
 * a linked list list_t
 * @h: head of the list
 * Return: The number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	unsigned int node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
