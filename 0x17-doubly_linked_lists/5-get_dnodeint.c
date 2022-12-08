#include "lists.h"

/**
 * get_dnodeint_at_index - function that locates
 * a node in a linked list
 * @head: head of the linked list
 * @index: node to be located
 *
 * Return: Null or the address of the located node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
