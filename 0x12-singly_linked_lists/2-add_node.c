#include "lists.h"
#include <stdlib.h>

/**
  *add_node - function prototype
  *
  *@head: head of the linked list
  *@str: string
  *
  *Return: address of new element
  */

list_t *add_node(list_t **head, const char *str)
{
	size_t n;
	list_t *new_Node;

	new_Node = malloc(sizeof(list_t));

	if (new_Node == NULL)
		return (NULL);

	new_Node->str = strdup(str); /*str being source*/

	for (n = 0; str[n]; n++)
		;

	new_Node->len = n;
	new_Node->next = *head;
	*head = new_Node;

	return (*head);
}
