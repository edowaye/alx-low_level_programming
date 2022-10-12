#include "function_pointers.h"
#include <stdlib.h>

/**
  *int_index - function prototype that searches
  *for an integer
  *
  *@array: array of elements
  *@size: size of array
  *@cmp: pointer to the function used for comparism
  *
  *Return: index of 1st element or -1
  *
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				return (i);
			}
			else
					return (-1);
		}
	}
	return (-1);
}
