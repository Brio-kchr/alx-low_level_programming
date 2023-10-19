#include "lists.h"

/**
 * print_list - Function that prints all the elesements of
 * a linked list list_t
 * @h: head of the list
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	unsigned int node_count = 0;

	while (h)
	{
		if ((h->str) == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		node_count++;
		h = h->next;
	}
	return (node_count);
}
