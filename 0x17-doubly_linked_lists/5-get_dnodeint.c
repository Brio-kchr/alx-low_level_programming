#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - function that gets an element at an index
 * of a dlistint_t list
 * @head : Points to the head node of the list
 * @index: index of element to be returned
 * Return: returns nth node at a certain index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head && count < index)
	{
		count++;
		head = head->next;
	}
	if (head != NULL)
		return (head);
	else
		return (NULL);
}
