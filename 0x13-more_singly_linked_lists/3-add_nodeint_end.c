#include "lists.h"
#include <stdlib.h>

/**
  *add_nodeint_end - function prototype that adds a
  *new node at the end if a linked list
  *
  *@head: pointer that points to head of the linked list
  *@n: parameter
  *
  *Return: address of the new element of null
  *
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *current = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
	}
	else
		return (NULL);
	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = newNode;
	}
	else
		*head = newNode;
	return (*head);
}
