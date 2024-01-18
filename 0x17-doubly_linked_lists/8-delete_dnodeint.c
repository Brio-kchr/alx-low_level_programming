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

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;
	
	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next == NULL)
		{
			(temp->next)->prev = NULL;
		}
		free(temp);
		return (1);
	}	
	while (count < index)
	{
		if (temp->next == NULL)
			return(-1);
		temp = temp->next;
		count++;
	}
	(temp->prev)->next = temp->next;
	if (temp->next != NULL)
	{
		(temp->next)->prev = temp->prev;
	}
	free(temp);
	return (1);
}
