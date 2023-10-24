#include "lists.h"

/**
 * pop_listint - Function that deletes the head node
 * of a linked list
 * @head: Pointer to the head of the list
 * Return: returns the head nod's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	new = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = new;
	return (n);
}
