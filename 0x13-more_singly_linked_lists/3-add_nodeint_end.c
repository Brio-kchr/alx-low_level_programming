#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node at
 * the end of the list
 * @head: Pointer to the head of the list
 * @n: new value to be added to the list
 * Return: returns adress of the new elements or
 * NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = NULL;
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
