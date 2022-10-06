#include "main.h"
#include <stdlib.h>

/**
  *_calloc - function prototype that allocates
  *memory for an array using malloc
  *@nmemb: number of elements in size bytes
  *@size: size of array elements
  *
  *Return: NULL or a pointer
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int ui;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (ui = 0; ui < (nmemb * size); ui++)
	{
		*((char *)(ptr) + ui) = 0;
	}
	return (ptr);
}
