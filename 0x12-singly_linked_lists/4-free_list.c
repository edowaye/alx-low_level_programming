#include "lists.h"

/**
  *free_list - function prototype
  *
  *@head: head of a linked list
  *
  *Return: void
  *
  */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		free(current->str);
		free(current);
	}
}
