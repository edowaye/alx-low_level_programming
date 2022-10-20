#include "lists.h"

/**
  *list_len - function prototype
  *
  *@h: singly linked list
  *
  *Return: string length
  */

size_t list_len(const list_t *h)
{
	size_t elementsnum;

	elementsnum = 0;

	while (h == NULL)
	{
		h = h->next;
		elementsnum++;
	}
	return (elementsnum);
}
