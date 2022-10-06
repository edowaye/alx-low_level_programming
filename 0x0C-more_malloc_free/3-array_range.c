#include "main.h"
#include <stdlib.h>

/**
  *array_range - prototype function that
  *creates an array of integers
  *
  *@min: minimum value
  *@max: maximum vaue
  *
  *Return: pointer to new array or NULL
  */

int *array_range(int min, int max)
{
	int range, x;
	int *ptr;

	range = 0;
	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	ptr = malloc(range * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < range; x++)
	{
		*(ptr + 1) = min + x;
	}
	return (ptr);
}
