#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the
 * elements (n) of a linked list
 * @head: Pointer to the head of the list
 * Return: returns the sum of all the elements
 * of a linked list
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum;
}
