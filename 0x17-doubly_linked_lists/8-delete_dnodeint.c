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
	
	if (head == NULL)
		return (-1);
	if (idx = 0)
	{

	temp = *head;
	while (temp != NULL && count < index)
	{
		count++;
		temp = temp->next;
	}
	if (temp != NULL)
	{
		if (temp->next == NULL)
		{
			(temp->prev)->next = NULL;
			free(temp);
			return (1);
		}
		(temp->next)->prev = temp->prev;
		(temp->prev)->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
