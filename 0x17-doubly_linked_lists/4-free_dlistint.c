#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - function that prints all the elements of a dlistint_t list
 * @head : Points to the head node of the list
 * Return: Always zero
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->n);
		free(temp);
	}
	free(head);
}
