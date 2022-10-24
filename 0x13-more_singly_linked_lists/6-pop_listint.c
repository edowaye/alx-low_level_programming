#include "lists.h"

/**
  *pop_listint - function prototype that
  *deletes the head node of a linked list
  *
  *@head: head of node
  *
  *Return: n or 0
  *
  */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;

	if (tmp == NULL)
		return (0);
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
