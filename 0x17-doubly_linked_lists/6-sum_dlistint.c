#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_dnodeint - function that gets sum of all elements
 * of a dlistint_t list
 * @head : Points to the head node of the list
 * Return: returns nth node at a certain index
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
