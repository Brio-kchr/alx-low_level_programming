#include "lists.h"

/**
 * *get_nodeint_at_index - Function that returns the nth node
 * of a linked list
 * @head: Pointer to the head of the list
 * @index: the nth node to be returned
 * Return: returns the nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
