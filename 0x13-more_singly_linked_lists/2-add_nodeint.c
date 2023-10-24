#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at
 * the beginning of the list
 * @head: Pointer to the head of the list
 * @n: new value to be added to the list
 * Return: returns adress of the new elements or
 * NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
