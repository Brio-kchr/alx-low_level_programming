#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - function inserts node at a given position
 * @h : Points to the head node of the list
 * @n : element to be added at end
 * @idx : Position to insert element
 * Return: address of the element added in the list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int count = 0;
	
	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	temp = *h;
	while (temp && count < idx)
	{
		count++;
		temp = temp->next;
	}
	if (temp != NULL)
	{
		if (temp->next == NULL)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		new->next = temp->next;
		(temp->next)->prev = new;
		temp->next = new;
		new->prev = temp;
		return (new);
	}
	return (NULL);
}
