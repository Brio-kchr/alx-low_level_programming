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
	
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (*h == NULL)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
	}
	else
	{
		temp = *h;
		while (temp->next)
		{
			temp = temp->next;
			if (idx == (count + 1))
			{
				new->next = temp->next;
				(temp->next)->prev = new;
				temp->next = new;
				new->prev = temp;
				return (new);
			}
			count++;
		}
	}
	return (new);
}
