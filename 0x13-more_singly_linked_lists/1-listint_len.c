#include "lists.h"

/**
  *listint_len - function prototype that lists
  *length of lnked list
  *
  *@h: head of linked list
  *
  *Return: number of elements in linked list
  *
  */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *len = h;

	while (len != NULL)
	{
		count += 1;
		len = len->next;
	}
	return (count);
}
