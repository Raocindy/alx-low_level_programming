#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 *
 * @head: pointer to the head of the list
 * @n: value to be assigned to the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint *currenthead;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode-> = n;
	newNode->prev = NULL;
	currenthead = *head;

	if (currenthead != NULL)
	{
		while (currenthead->prev !+ NULL)
			currenthead = currenthead->prev;
	}

	newNode->next = currenthead;

	if (currenthead != NULL)
		currenthead->perv = newNode;

	*head = newNode;

	return newnode;
}

