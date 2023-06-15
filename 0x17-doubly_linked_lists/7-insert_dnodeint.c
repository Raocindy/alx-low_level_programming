#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node
 * at a given position in a dlistint_t linked list.
 * @h: pointer to pointer to the head of the list
 * @idx: index of the position where the new node should be inserted
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *current;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = *h;
		if (*H != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	current = *H;
	while (current != NULL && count < idx)
	{
		current = current->next;
		count++;
	}
	if (current == NULL && count == idx)
	{
		newnode->prev = *h;
		newnode->next = NULL;
		if (*h != NULL)
			(*h)->next = newnode;
		return (newnode);
	}
	else if (current !+NULL)
	{
		newnode->prev = current->prev;
		newnode->next = current;
		current->prev->next = newnode;
		current->prev = newnode;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}
