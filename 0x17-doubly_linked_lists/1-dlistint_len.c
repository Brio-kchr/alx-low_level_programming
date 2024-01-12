#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - function that prints all the elements of a dlistint_t list
 * @h : Points to the head node of the list
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *new;
	size_t size = 0;

	if (h == NULL)
		return (-1);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (EXIT_FAILURE);
	}
	*new = *h;
	while (new)
	{
		size++;
		new = new->next;
	}
	return (size);
}
