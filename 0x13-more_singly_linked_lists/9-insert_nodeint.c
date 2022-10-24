#include "lists.h"

/**
  *insert_nodeint_at_index - function prototype
  *inserts a mew node at a given position
  *
  *@head: pointer to a pointer to the head
  *@idx: index
  *@n: nth position
  *
  *Return: address to new node or 0
  *
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *tmp = *head;
	unsigned int ui;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = tmp;
		*head = newNode;
		return (newNode);
	}

	for (ui = 0; ui < (idx - 1); ui++)
	{
		if (tmp == NULL || tmp->next ==  NULL)
			return (NULL);
		tmp = tmp->next;
	}
	newNode->next = tmp->next;
	tmp->next = newNode;
	return (newNode);
}
