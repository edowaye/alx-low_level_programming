#include "lists.h"

/**
  *get_nodeint_at_index - function prototype that finds
  *nth node in a linked list
  *
  *@head: head of node of linked list
  *@index: list containing nth node
  *
  *Return: location of nth node or null
  *
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;

	if (n < index)
		return (NULL);
	return (head);
}
