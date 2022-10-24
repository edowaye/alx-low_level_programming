#include "lists.h"

/**
  *print_listint - function prototype that
  *prints all elements in list
  *
  *@h: head of linked list
  *
  *Return: number of nodes
  *
  */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *l1 = h;

	while (l1 != NULL)
	{
		printf("%d\n", l1->n);
		count += 1;
		l1 = l1->next;
	}
	return (count);
}
