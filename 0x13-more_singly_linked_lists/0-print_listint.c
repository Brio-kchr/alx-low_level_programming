#include "lists.h"

/**
 * print_listint - Function that prints all the
 * elements of a list.
 * @h: Pointer to the list to be printed
 * Return: returns the number of elements in the
 * list
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
