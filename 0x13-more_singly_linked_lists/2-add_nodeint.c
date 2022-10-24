#include "lists.h"

/**
  *add_nodeint - function prototype that adds
  *a new node at the start of a linked list
  *
  *@head: pointer to a pointer to the head
  *@n: parameter
  *
  *Return: address to new element or null
  *
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_Node;

	new_Node = malloc(sizeof(listint_t));

	if (new_Node != NULL)
	{
		new_Node->n = n;
		new_Node->next = *head;
	}
	else
		return (NULL);

	if (*head != NULL)
		new_Node->next = *head;
	*head = new_Node;
	return (new_Node);
}
