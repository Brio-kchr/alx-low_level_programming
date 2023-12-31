#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: Pointer to the list to be freed
 * Return: NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
