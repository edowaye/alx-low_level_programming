#include "lists.h"

/**
 * add_dnodeint - function that adds a new
 * node at the beginning of a list
 * @head: A pointer to the head of the list
 * @n: The integer for the new node to contain
 *
 * Return: If the function fails, Null
 * and if not, the address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}