#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @head: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t nodeCount = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		nodeCount++;
		head = head->next;
	}

	return (nodeCount);
}
