#include "lists.h"

/**
 * listint_len - Function that count all the
 * elements in a list.
 * @h: Pointer to the list to be printed
 * Return: returns the number of elements in the
 * list
 */

size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
