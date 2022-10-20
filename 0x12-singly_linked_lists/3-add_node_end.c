#include "lists.h"
#include <stdlib.h>

/**
  *add_node_end - functin prototype
  *
  *@head: head of the linked list
  *@str: str
  *
  *Return: address of new element or NULL
  */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t n;
	list_t *newNode;
	list_t *current;

	newNode = malloc(sizeof(list_t));

	newNode->str = strdup(str);

	if (newNode == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		;

	newNode->len = n;
	newNode->next = NULL;
	current = *head;

	if (current == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = newNode;
	}
	return (*head);
}
