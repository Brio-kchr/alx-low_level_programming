#include "lists.h"

/**
 * print_list - Function that prints all the elesements of
 * a linked list list_t
 * @h: head of the list
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	list_t *temp;
	size_t node_count = 0;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp->next)
	{
		if ((temp->str) == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%u]", temp->len);
			printf(" %s\n", temp->str);
		}
		node_count++;
		temp = temp->next;
	}
	return (node_count);
}
