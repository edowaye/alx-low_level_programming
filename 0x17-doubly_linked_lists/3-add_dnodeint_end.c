#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new
 * node at the end of a list
 * @head: pointer to the head of the list
 * @n: The integer for the new node to contain
 *
 * Return: If the function fails, Null, and
 * if not, the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
