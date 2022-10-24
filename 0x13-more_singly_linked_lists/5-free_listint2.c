#include "lists.h"

/**
  *free_listint2 - function prototype to
  *free a linked list
  *
  *@head: pointer to a pointer of head of node
  *
  *Return: nothing (void)
  *
  */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	head = NULL;
}
