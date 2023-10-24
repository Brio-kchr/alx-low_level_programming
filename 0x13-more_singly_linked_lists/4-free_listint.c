#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: Pointer to the list to be freed
 * Return: NULL
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (temp)
	{
		temp = temp->next;
		free(temp->n);
		free(temp);
	}
	free(head);
}
