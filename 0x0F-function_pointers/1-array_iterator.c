#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *array_iterator - function prototype that executes
  *a function given as a parameter on each element
  *
  *@array: array containing elements
  *@size: array size
  *@action: function pointer
  *
  *Return: Nothing (void)
  *
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int ui;

	if (array && size > 0 && action)
	{
		for (ui = 0; ui < size; ui++)
		{
			action(array[ui]);
		}
	}
}
