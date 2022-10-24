#include "lists.h"

/**
  *sum_listint - function prototype that
  *sums all data of a linked list
  *
  *@head: head of linked list
  *
  *Return: sum or 0
  *
  */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
