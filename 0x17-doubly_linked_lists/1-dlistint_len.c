#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @head: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *head)
{
	int nodecount = 0;

	if (head == NULL)
		return (nodecount);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		nodecount++;
		head = head->next;
	}

	return (nodecount);
}
