#include "lists.h"

/**
  *list_len - function prototype
  *
  *@h: singly linked list
  *
  *Return: string elements
  */

size_t list_len(const list_t *h)
{
	size_t elements_num;

	elements_num = 0;

	while (h != NULL)
	{
		h = h->next;
		elements_num++;
	}
	return (elements_num);
}
