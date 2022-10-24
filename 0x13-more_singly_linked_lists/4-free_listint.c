#include "lists.h"

/**
  *free_listint - function prototype that frees a linked list
  *
  *@head: head of linked list
  *
  *Return: nothing (void)
  *
  */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
