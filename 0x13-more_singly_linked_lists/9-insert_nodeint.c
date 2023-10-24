#include "lists.h"

/**
 * *insert_nodeint_at_index - Function that inserts a new node at a
 * certain position of a linked list
 * @head: Pointer to the head of the list
 * @idx: the nth node where new node is to be added
 * @n: value to added at new node.
 * Return: returns the nth node of a linked list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new, *store;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		temp = *head;
		while (temp)
		{
			if (i == idx)
			{
				store = temp->next;
				temp->next = new;
				new->next = store;
				return (temp);
			}
			temp = temp->next;
			i++;
		}
	}
	return (NULL);
}
