#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - function that prints all the elements of a dlistint_t list
 * @h : Points to the head node of the list
 * Return: number of elements in the list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (*head == NULL)
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		new->next = NULL;
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}
